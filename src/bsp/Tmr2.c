#include "Tmr2.h"

#ifdef TEST
	#include "testable_micro_registers.h"
#else
    #include "stm32f4xx.h" 
#endif
#include "system_stm32f4xx.h"

void TMR2_Init()
{
	SET_BIT(RCC->APB1ENR,RCC_APB1ENR_TIM2EN); //Enable Clock to TIM2
	SET_BIT(TIM2->CR1,TIM_CR1_CEN); //Set the counter enable bit
	SET_BIT(TIM2->CR1,TIM_CR1_DIR); // Configure as a down-counter
	TIM2->PSC = 0xFFFF; //set counter prescaler
}

void TMR2_Start(uint16_t ReloadValue)
{
	TIM2->ARR = ReloadValue;
}
uint8_t TMR2_UpdateEventOccured()
{
	if(READ_BIT(TIM2->SR,TIM_SR_UIF))
		return 1;
	else
		return 0 ;
}