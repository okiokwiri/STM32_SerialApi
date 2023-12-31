#ifdef TEST

#include "unity.h"
#include "testable_micro_registers.h"
#include "uart5.h"
#define RCC_AHB1ENR_AFTER_SET_UP  					0x00000001 
#define GPIOA_AFRL_AFTER_SET_UP   					0x00007700
#define GPIOA_MODER_AFTER_SET_UP  					0xA80000A0
#define GPIOA_OSPEEDR_AFTER_SET_UP					0x00000050
#define GPIOA_PUPDR_AFTER_SET_UP					0x64000050
#define UART5_CR1_AFTER_SET_UP						0x000020AC
#define RCC_APB1_ENR_AFTER_SET_UP					0x00100000	
#define UART5_BRR_9600_BAUDRATE						0x00000A2C
#define UART5_BRR_115200_BAUDRATE					0x000000D9
#define UART5_BRR_19200_BAUDRATE					0x00000516
#define UART5_BRR_38400_BAUDRATE					0x0000028B

void setUp(void)
{
	RCC->AHB1ENR	 = 0x00000000;
	GPIOA->MODER	 = 0xA8000000; 
	GPIOA->OSPEEDR	 = 0x00000000;
	GPIOA->PUPDR	 = 0x64000000;
	GPIOA->AFR[0]    = 0x00000000;
	UART5->CR1		 = 0x00000000;
	RCC->APB1ENR     = 0x00000000;
	UART5->BRR		 = 0x00000000;
	UART5->DR		 = 0x00000001;
}
void tearDown(void)
{
	UART5->BRR		 = 0x00000000;
}
void test_uart5_ShouldEnable_Uart_correctly_For_9600_baudrate(void)
{

	UART5_Iniatialize(9600);
    TEST_ASSERT_EQUAL_HEX32(RCC_AHB1ENR_AFTER_SET_UP, RCC->AHB1ENR); //Testing that peripheral clock for GPIOA is enabled so as to use PA2 	and PA3
    TEST_ASSERT_EQUAL_HEX32(GPIOA_MODER_AFTER_SET_UP, GPIOA->MODER); // Checking if PA2 and PA3 are in alternate function mode
    TEST_ASSERT_EQUAL_HEX32(GPIOA_AFRL_AFTER_SET_UP,GPIOA->AFR[0]);  //checking that the AF mode for 
	TEST_ASSERT_EQUAL_HEX32(GPIOA_OSPEEDR_AFTER_SET_UP,GPIOA->OSPEEDR); //checking if the PA2 and PA3 have been set to medium speed
	TEST_ASSERT_EQUAL_HEX32(GPIOA_PUPDR_AFTER_SET_UP,GPIOA->PUPDR);
	TEST_ASSERT_EQUAL_HEX32(UART5_CR1_AFTER_SET_UP,UART5->CR1);
	TEST_ASSERT_EQUAL_HEX32(RCC_APB1_ENR_AFTER_SET_UP,RCC->APB1ENR);
	TEST_ASSERT_EQUAL_HEX32(UART5_BRR_9600_BAUDRATE,UART5->BRR);
}
void test_uart5_ShouldEnable_Uart_correctly_For_115200_baudrate(void)
{
	UART5_Iniatialize(115200);
    TEST_ASSERT_EQUAL_HEX32(RCC_AHB1ENR_AFTER_SET_UP, RCC->AHB1ENR); //Testing that peripheral clock for GPIOA is enabled so as to use PA2 	and PA3
    TEST_ASSERT_EQUAL_HEX32(GPIOA_MODER_AFTER_SET_UP, GPIOA->MODER); // Checking if PA2 and PA3 are in alternate function mode
    TEST_ASSERT_EQUAL_HEX32(GPIOA_AFRL_AFTER_SET_UP,GPIOA->AFR[0]);  //checking that the AF mode for 
	TEST_ASSERT_EQUAL_HEX32(GPIOA_OSPEEDR_AFTER_SET_UP,GPIOA->OSPEEDR); //checking if the PA2 and PA3 have been set to medium speed
	TEST_ASSERT_EQUAL_HEX32(GPIOA_PUPDR_AFTER_SET_UP,GPIOA->PUPDR);
	TEST_ASSERT_EQUAL_HEX32(UART5_CR1_AFTER_SET_UP,UART5->CR1);
	TEST_ASSERT_EQUAL_HEX32(RCC_APB1_ENR_AFTER_SET_UP,RCC->APB1ENR);
	TEST_ASSERT_EQUAL_HEX32(UART5_BRR_115200_BAUDRATE,UART5->BRR);
}
void test_UART5_READ_Should_Return_A_Value_That_Matches_The_Contents_Of_The_DR_Register(void)
{
	TEST_ASSERT_EQUAL_HEX8(1,UART5_Read());
}
void test_UART5_Write_Should_Write_A_Given_CharacterTo_The_DR_Register(void)
{
	 UART5_Write(0x03);
	 TEST_ASSERT_EQUAL_HEX32(0x03,UART5->DR);
}
void test_UART5_DataAvalaibleFromUart(void)
{
	UART5->SR = 0x00000021;
	TEST_ASSERT_EQUAL(1,UART5_DataAvalaibleFromUart());
	UART5->SR = 0x00000011;
	TEST_ASSERT_EQUAL(0,UART5_DataAvalaibleFromUart());
}
void test_UART5_ReadyToTransmitData(void)
{
	UART5->SR = 0x00000081;
	TEST_ASSERT_EQUAL(1,UART5_ReadyToTransmitData());
	UART5->SR = 0x00000011;
	TEST_ASSERT_EQUAL(0,UART5_ReadyToTransmitData());
}
#endif // TEST
