#ifdef TEST

#include "unity.h"

#include "TEMPSENSOR_TemperatureDecoder.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_DecodeTemperatureReadingFromHardware(void)
{
    TEST_ASSERT_EQUAL(1023,DecodeTemperatureReadingFromHardware(0xFFFC));
    TEST_ASSERT_EQUAL(63,DecodeTemperatureReadingFromHardware(0x7F8));
    TEST_ASSERT_EQUAL(0,DecodeTemperatureReadingFromHardware(0));
}

#endif // TEST
