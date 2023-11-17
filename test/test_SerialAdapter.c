#ifdef TEST

#include "unity.h"
#include "ByteQueues.h"
#include "SerialAdapter.h"
#include "mock_uart5.h"

void setUp(void)
{
	RxQueue->Tail = 4;
	RxQueue->Head = 0;
	RxQueue->Size = 4;
	TxQueue->Tail = 4;
	TxQueue->Head = 0;
	TxQueue->Size = 4;
}

void tearDown(void)
{
}

void test_initializeSerialShouldCall_TheInitializeUART5_AndInitialieRXQueues(void)
{
    UART5_Iniatialize_Expect(9600);
	initializeSerial(9600);
	TEST_ASSERT_EQUAL(0,RxQueue->Head);
	TEST_ASSERT_EQUAL(0,RxQueue->Tail);
	TEST_ASSERT_EQUAL(0,RxQueue->Size);
	TEST_ASSERT_EQUAL(0,TxQueue->Head);
	TEST_ASSERT_EQUAL(0,TxQueue->Tail);
	TEST_ASSERT_EQUAL(0,TxQueue->Size);
}
void test_IsSerialDataAvailableToRead_ShouldReturn1_If_There_IsData_InTheRXQueue(void)
{
	TEST_ASSERT_EQUAL(1,IsSerialDataAvailableToRead());
}
void test_IsSerialDataAvailableToRead_ShouldReturn0_If_There_Is_No_Data_In_TheRXQueue(void)
{
	RxQueue->Tail = 0;
	RxQueue->Head = 0;
	RxQueue->Size = 0;
	TEST_ASSERT_EQUAL(0,IsSerialDataAvailableToRead());
}
void test_Refactor_Serial(void)
{
	TEST_IGNORE_MESSAGE("Need to Refactor Serial");
}

#endif // TEST
