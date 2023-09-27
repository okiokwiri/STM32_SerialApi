#ifndef TEMPSENSORHARDWARE_H
#define TEMPSENSORHARDWARE_H
#include "spi1.h"
#include <stdint.h>
/*
 *This function Initializes the SPI hardware and returns 1 
*/
uint8_t TEMPSENSORHARDWARE_Initalize();
/*
  * This function returns what has been read from the SPI bus 
*/
uint16_t TEMPSENSORHARDWARE_ReadValue();
/*
 * This function checks if the time required for a conversion to be complete has elapsed
*/
uint8_t TEMPSENSORHARDWARE_ConversionComplete();
/*
  * Thsi function restarts the timer that keeps track of if a conversion is complete
*/
void TEMPSENSORHARDWARE_RestartConversionTimer();
#endif // TEMPSENSORHARDWARE_H
