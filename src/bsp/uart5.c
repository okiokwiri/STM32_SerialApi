#include "uart5.h"

#ifdef TEST
	#include "testable_micro_registers.h"
#else
    #include "stm32f4xx.h" 
#endif
#include "system_stm32f4xx.h"


void UART5_Iniatialize(uint32_t Baudrate)
{
	SET_BIT(RCC->AHB1ENR,RCC_AHB1ENR_GPIOAEN); //Enable Clock to GPIOA so as to use PA2 and PA3
	MODIFY_REG(GPIOA->MODER,GPIO_MODER_MODER2|GPIO_MODER_MODER3,
				_VAL2FLD(GPIO_MODER_MODER2,2)|_VAL2FLD(GPIO_MODER_MODER3,2)); //configure PA2 and PA3 to alternate function mode

	MODIFY_REG(GPIOA->AFR[0],GPIO_AFRL_AFSEL2 | GPIO_AFRL_AFSEL3,
				_VAL2FLD(GPIO_AFRL_AFSEL2,7)|_VAL2FLD(GPIO_AFRL_AFSEL3,7)); //configure alternate function mode 7
	MODIFY_REG(GPIOA->OSPEEDR, GPIO_OSPEEDR_OSPEED3|GPIO_OSPEEDR_OSPEED2,
				_VAL2FLD(GPIO_OSPEEDR_OSPEED3,1)|_VAL2FLD(GPIO_OSPEEDR_OSPEED2,1)); //configure PA2 and PA3 to medium speed mode
	MODIFY_REG(GPIOA->PUPDR, GPIO_PUPDR_PUPD3|GPIO_PUPDR_PUPD2,
				_VAL2FLD(GPIO_PUPDR_PUPD3,1)|_VAL2FLD(GPIO_PUPDR_PUPD2,1)); //configure PA2 and PA3 to have I/O pull-ups
	
	SET_BIT(RCC->APB1ENR,RCC_APB1ENR_UART5EN); //Enable clock to UART5
	SET_BIT(UART5->CR1,USART_CR1_UE); //SET usart enable bit
	switch(Baudrate)
	{
		case 9600:
			UART5->BRR |= 162<<4;
			UART5->BRR  |= 12;
			break;
		case 19200:
			UART5->BRR |= 81<<4;
			UART5->BRR  |= 6;
			break;
		case 38400:
			UART5->BRR |= 40<<4;
			UART5->BRR	|= 11;
		case 57600:
			UART5->BRR |= 27<<4;
			UART5->BRR |= 2;
			break;
		case 115200:
			UART5->BRR |= 13<<4;
			UART5->BRR |= 9;
			break;
		default:
			break;
	}
	SET_BIT(UART5->CR1,USART_CR1_TXEIE); // Enable the TX buffer enable interrupt
	SET_BIT(UART5->CR1,USART_CR1_RXNEIE); //Enable the RX buffer not empty interrupt
	SET_BIT(UART5->CR1,USART_CR1_RE);   //Enable the UART Receiver
	SET_BIT(UART5->CR1,USART_CR1_TE); //Enable the UART Transmitter

}
void UART5_Write(uint8_t Byte)
{
	UART5->DR = Byte;

}
uint8_t UART5_Read()
{
	return UART5->DR;

}
uint8_t UART5_DataAvalaibleFromUart()
{
	if(READ_BIT(UART5->SR,USART_SR_RXNE))
		return 1;
	else
		return 0;
}
uint8_t UART5_ReadyToTransmitData()
{
	if(READ_BIT(UART5->SR,USART_SR_TXE))
		return 1;
	else
		return 0;
}