#include "TEMPSENSOR_TemperatureDecoder.h"

uint16_t DecodeTemperatureReadingFromHardware(uint16_t ReadingFromHardware)
{
	uint16_t DecodedTemperature;
	ReadingFromHardware = ReadingFromHardware>>3; //shift by 3
	DecodedTemperature = ReadingFromHardware&0b0000111111111111;
	DecodedTemperature = DecodedTemperature/4; //divide by 4 owing to 0.25 degrees celsius resolution
	return DecodedTemperature;
}