#include "TempSensorConductor.h"

uint16_t SensorValueRead;
void TEMPSENSORCONDUCTOR_Init(void)
{
	TEMPSENSORMODEL_Initialize();
	TEMPSENSORHARDWARE_Initalize();
	
}
void TEMPSENSORCONDUCTOR_Exec(void)
{
	if(TEMPSENSORHARDWARE_ConversionComplete())
	{
		SensorValueRead = TEMPSENSORHARDWARE_ReadValue();
		TEMPSENSORMODEL_AddTempValue(SensorValueRead);
		TEMPSENSORHARDWARE_RestartConversionTimer();
	}
}
