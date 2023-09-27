/*
 * Clocks.c
 *
 *  Created on: Aug 1, 2023
 *      Author: Oki Okwiri
 */
#include "Clocks.h"
#include "stm32f4xx.h"
#include "system_stm32f4xx.h"
// HCLK = 72MHz
//PLL: M = 4, N=72, P= 2, Q =3
//AHB Prescaler = 1
//APB Prescaler1 =2, APB Prescaler2 = 1
//MCO1 Prescaler = 2
void ConfigureClock()
{
	//Configures flash latency
	MODIFY_REG(FLASH->ACR,
			FLASH_ACR_LATENCY,
			_VAL2FLD(FLASH_ACR_LATENCY, FLASH_ACR_LATENCY_2WS));
	//Enable HSE
	SET_BIT(RCC->CR, RCC_CR_HSEON);
	//Wait until HSE is stable
	while(!READ_BIT(RCC->CR,RCC_CR_HSERDY));
	//Configure PLL :source HSE, SYSCLK 100MHz
	MODIFY_REG(RCC->PLLCFGR,
		 RCC_PLLCFGR_PLLQ | RCC_PLLCFGR_PLLP | RCC_PLLCFGR_PLLN | RCC_PLLCFGR_PLLM | RCC_PLLCFGR_PLLSRC ,
		_VAL2FLD(RCC_PLLCFGR_PLLQ,3)|_VAL2FLD(RCC_PLLCFGR_PLLP,0)|_VAL2FLD(RCC_PLLCFGR_PLLN,72)|_VAL2FLD(RCC_PLLCFGR_PLLM,4)|
		_VAL2FLD(RCC_PLLCFGR_PLLSRC,1));
	//Enable PLL
	SET_BIT(RCC->CR,RCC_CR_PLLON);
	//Wait until PLL is stable
	while(!READ_BIT(RCC->CR, RCC_CR_PLLRDY));
	//Switches system clock to PLL
	MODIFY_REG(RCC->CFGR, RCC_CFGR_SW,
		_VAL2FLD(RCC_CFGR_SW,RCC_CFGR_SW_PLL));
	//Disable HSI
	CLEAR_BIT(RCC->CR, RCC_CR_HSION);
}
void ConfigureMCO1()
{
	//Configures MC01: source = PLLCLK, MC01PRE =2
	MODIFY_REG(RCC->CFGR,
			RCC_CFGR_MCO1 | RCC_CFGR_MCO1PRE,
			_VAL2FLD(RCC_CFGR_MCO1,3) | _VAL2FLD(RCC_CFGR_MCO1PRE,4)
			);
	//Enables GPIOA (MCO1 is connetcted to PA8)
	SET_BIT(RCC->AHB1ENR,RCC_AHB1ENR_GPIOAEN);

	//Configures PA8 to medium speed
	MODIFY_REG(GPIOA->OSPEEDR,
			GPIO_OSPEEDR_OSPEED8,
			_VAL2FLD(GPIO_OSPEEDR_OSPEED8,1)
			);
	//Configures PA8 to work in alternate function mode
	MODIFY_REG(GPIOA->MODER,
			GPIO_MODER_MODER8,
			_VAL2FLD(GPIO_MODER_MODER8,2)
			);
	}
