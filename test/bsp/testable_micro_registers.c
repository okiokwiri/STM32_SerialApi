#include "testable_micro_registers.h"

volatile RCC_TypeDef RCC_BASE;
volatile RCC_TypeDef* RCC = &RCC_BASE;
volatile GPIO_TypeDef GPIOA_BASE;
volatile GPIO_TypeDef* GPIOA = &GPIOA_BASE;
volatile USART_TypeDef UART5_BASE;
volatile USART_TypeDef* UART5 = &UART5_BASE;
volatile TIM_TypeDef TIM2_BASE;
volatile TIM_TypeDef* TIM2 = &TIM2_BASE;
