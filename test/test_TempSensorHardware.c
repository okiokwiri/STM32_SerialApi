#ifdef TEST

#include "unity.h"

#include "TempSensorHardware.h"
#include "mock_spi1.h"
void setUp(void)
{
}

void tearDown(void)
{
}

void test_TempSensorHardware_Initialize_Should_Call_The_SPI1Initialize_Function_And_Return_1(void)
{
    initialize_spi1_Expect();
	TEST_ASSERT_EQUAL(1,TEMPSENSORHARDWARE_Initalize());
}
void test_TEMPSENSORHARDWARE_ReadValue_Should_Return_a_Value_Equal_To_What_Has_been_Returned_From_The_read_SPI_16bIT_Function()
{
	read_SPI1_16bit_ExpectAndReturn(0xAABB);
	TEST_ASSERT_EQUAL_HEX16(0xAABB,TEMPSENSORHARDWARE_ReadValue());
}
void test_TEMPSENSORHARDWARE_ConversionComplete()
{
	TEST_IGNORE_MESSAGE("Need to Implement TEMPSENSORHARDWARE_ConversionComplete");
}
void test_TEMPSENSORHARDWARE_RestartConversionTimer()
{
	TEST_IGNORE_MESSAGE("Need to Implement TEMPSENSORHARDWARE_RestartConversionTimer");
}
#endif
