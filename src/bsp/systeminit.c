/*
 * SystemInit.c
 *
 *  Created on: Aug 1, 2023
 *      Author: okiokwiri
 */


#include "Clocks.h"
#include <stdint.h>
uint32_t SystemCoreClock = 72000000;  //72MHz


void SystemInit(void)
{
	ConfigureClock();
}
