#ifndef TEMPSENSORMODEL_H
#define TEMPSENSORMODEL_H
#include <stdint.h>
/*
 * This function adds a value that has been read from the temperature sensor
*/
void TEMPSENSORMODEL_AddTempValue(uint16_t NewVal);
/*
* This function reads a temperature value 
*/
uint16_t TEMPSENSORMODEL_ReadTempValue();
/*
 This function intializes the TempSensor Model
*/
void TEMPSENSORMODEL_Initialize();
#endif // TEMPSENSORMODEL_H
