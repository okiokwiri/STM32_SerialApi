#ifdef TEST

#include "unity.h"
#include "testable_micro_registers.h"
#include "Tmr2.h"

#define RCC_APB1ENR_POST_SETUP  0x00000001
#define TIM2_CR1_POST_SETUP		0x011
#define TIM2_PSC_POST_SETUP		0xFFFF
void setUp(void)
{
	RCC->APB1ENR 	=  	0x00000000;
	TIM2->CR1		=	0x00;
	TIM2->PSC		=	0x00;
	TIM2->ARR		= 	0x00;

}

void tearDown(void)
{
}

void test_Tmr2_Init(void)
{
	TMR2_Init();
  	TEST_ASSERT_EQUAL_HEX32(RCC_APB1ENR_POST_SETUP,RCC->APB1ENR); //Check if necessary bit to enable TIM2 is set
  	TEST_ASSERT_EQUAL_HEX32(TIM2_CR1_POST_SETUP,TIM2->CR1);
  	TEST_ASSERT_EQUAL_HEX32(TIM2_PSC_POST_SETUP,TIM2->PSC);
}
void test_TMR2_Start(void)
{
	TMR2_Start(0x11);
	TEST_ASSERT_EQUAL_HEX16(0x11,TIM2->ARR);
	TMR2_Start(0x12);
	TEST_ASSERT_EQUAL_HEX16(0x12,TIM2->ARR);
}
#endif // TEST
