/*
 * spi1.c
 *
 *  Created on: Aug 2, 2023
 *      Author: okiokwiri
 */
#include "spi1.h"
#include "stm32f4xx.h"
#include "system_stm32f4xx.h"
/*
 * The Pins that will be used are
 * SS ----> PA4
 * SCK ---> PA5
 * MISO--->	PA6
 * MOSI--->	PA7
 *
 * */
void initialize_spi1()
{
	//Enables GPIOA since we are PA4,PA5,PA6,PA7
	SET_BIT(RCC->AHB1ENR,RCC_AHB1ENR_GPIOAEN);
	//Configure PA4 PA5,PA6,PA7 to alternate function mode
	MODIFY_REG(GPIOA->MODER,
			GPIO_MODER_MODER4 | GPIO_MODER_MODER5 | GPIO_MODER_MODER6 | GPIO_MODER_MODER7,
			_VAL2FLD(GPIO_MODER_MODER4,2)|_VAL2FLD(GPIO_MODER_MODER5,2)|_VAL2FLD(GPIO_MODER_MODER6,2)|_VAL2FLD(GPIO_MODER_MODER7,2));
	//Configure the Alternate function for PA4 PA5, PA6 and PA7 to be AF5 for SPI1
	MODIFY_REG(GPIOA->AFR[0],
			 	 GPIO_AFRL_AFSEL4 | GPIO_AFRL_AFSEL5 |  GPIO_AFRL_AFSEL6 |  GPIO_AFRL_AFSEL7 ,
				_VAL2FLD(GPIO_AFRL_AFSEL4,5)|_VAL2FLD( GPIO_AFRL_AFSEL5,5)|_VAL2FLD(GPIO_AFRL_AFSEL6,5)
				|_VAL2FLD(GPIO_AFRL_AFSEL7,5));
	//Configure PA4,PA5,PA6 and PA7 to high-speed
	MODIFY_REG(GPIOA->OSPEEDR,
				GPIO_OSPEEDR_OSPEED4 | GPIO_OSPEEDR_OSPEED5 | GPIO_OSPEEDR_OSPEED6|
				GPIO_OSPEEDR_OSPEED7,_VAL2FLD(GPIO_OSPEEDR_OSPEED4,3)|_VAL2FLD(GPIO_OSPEEDR_OSPEED5,3)
				|_VAL2FLD(GPIO_OSPEEDR_OSPEED6,3)|_VAL2FLD(GPIO_OSPEEDR_OSPEED7,3));
	//Configure PA4 and PA6 to have a pull-up
	MODIFY_REG(GPIOA->PUPDR,
			GPIO_PUPDR_PUPD4 | GPIO_PUPDR_PUPD6,_VAL2FLD(GPIO_PUPDR_PUPD4,1)|_VAL2FLD(GPIO_PUPDR_PUPD6,1));
	//Enable clock for SPI1
	SET_BIT(RCC->APB2ENR,RCC_APB2ENR_SPI1EN);
    //Configure 16 bit data frame
	SET_BIT(SPI1->CR1,SPI_CR1_DFF);
	//Configure baud rate to 1.125 MBits/second
	MODIFY_REG(SPI1->CR1,
			SPI_CR1_BR,_VAL2FLD(SPI_CR1_BR,5));
	//Set to Master configuration
	SET_BIT(SPI1->CR1,SPI_CR1_MSTR);
	//Enable the SS pin and set as output
	SET_BIT(SPI1->CR2,SPI_CR2_SSOE);
	//Enable the SPI1

	//SET_BIT(GPIOA->ODR,GPIO_ODR_OD4);
}
uint16_t read_SPI1_16bit()
{
	uint16_t data;
	data = 0x00;
	SET_BIT(SPI1->CR1, SPI_CR1_SPE);
	while((READ_BIT(SPI1->SR,SPI_SR_BSY)));
	(SPI1->DR) = data;
	while(!(READ_BIT(SPI1->SR,SPI_SR_RXNE)));
	data = SPI1->DR;
	CLEAR_BIT(SPI1->CR1, SPI_CR1_SPE);
	return data;
}
