#ifdef TEST

#include "unity.h"

#include "TempSensorConductor.h"
#include "mock_TempSensorModel.h"
#include "mock_TempSensorHardware.h"
void setUp(void)
{
}

void tearDown(void)
{
}

void test_TEMPSENSORCONDUCTOR_Init_Should_Initialize_TempSensor_Model_And_TempSensor_Hardware()
{
	TEMPSENSORMODEL_Initialize_Expect();
	TEMPSENSORHARDWARE_Initalize_ExpectAndReturn(1);
	TEMPSENSORCONDUCTOR_Init();
}
void test_TEMPSENSORCONDUCTOR_Exec_Should_First_CheckIf_TempConversionIsComplete_AndIf_Ready_Read_Sensor_then_store_In_Model_Then_Reset_Conversion_Counter()
{
	TEMPSENSORHARDWARE_ConversionComplete_ExpectAndReturn(1);
	TEMPSENSORHARDWARE_ReadValue_ExpectAndReturn(0xAABB);
	TEMPSENSORMODEL_AddTempValue_Expect(0xAABB);
	TEMPSENSORHARDWARE_RestartConversionTimer_Expect();
	TEMPSENSORCONDUCTOR_Exec();
}
void test_TEMPSENSORCONDUCTOR_EXEC_Should_Not_Read_A_Sensor_Value_If_The_TempConversionIsNot_Complete()
{
	TEMPSENSORHARDWARE_ConversionComplete_ExpectAndReturn(0);
	TEMPSENSORCONDUCTOR_Exec();
}
#endif // TEST
