#include "TempSensorHardware.h"
uint8_t TEMPSENSORHARDWARE_Initalize()
{
	initialize_spi1();
	return 1;
}
uint16_t TEMPSENSORHARDWARE_ReadValue()
{
	uint16_t SensorValue;
	SensorValue = read_SPI1_16bit();
	return SensorValue;
}