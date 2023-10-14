#ifndef TEMPSENSOR_TEMPERATUREDECODER_H
#define TEMPSENSOR_TEMPERATUREDECODER_H
#include <stdint.h>
/*
This function decodes the temperature reading that has been read over SPI to
a temperature value of bewteen 0-1023 degrees celsius
*/
uint16_t DecodeTemperatureReadingFromHardware(uint16_t ReadingFromHardware);

#endif // TEMPSENSOR_TEMPERATUREDECODER_H
