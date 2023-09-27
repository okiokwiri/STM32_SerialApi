#ifdef TEST

#include "unity.h"

#include "ByteQueues.h"

Queue_T TestQueue;
void setUp(void)
{
	TestQueue.Head = 3;
	TestQueue.Tail = 2;
	TestQueue.Size = 1;
}

void tearDown(void)
{
}

void test_ByteQueues_Initialize(void)
{
   Initialize_ByteQueue(&TestQueue);
   TEST_ASSERT_EQUAL(0,TestQueue.Head);
   TEST_ASSERT_EQUAL(0,TestQueue.Tail);
   TEST_ASSERT_EQUAL(0,TestQueue.Size);
}
void test_Is_ByteQueueFull_Should_Return_1_If_Size_Is_Equal_To_MAX_QUEUE_SIZE_MINUS_1()
{
	TestQueue.Size = 254;
	TEST_ASSERT_EQUAL(1, Is_ByteQueueFull(&TestQueue));

}
void test_Is_ByteQueueFull_Should_Return_0_If_Size_Is_Less_Than_MAX_QUEUE_SIZE_MINUS_1()
{
	TestQueue.Size = 10;
	TEST_ASSERT_EQUAL(0, Is_ByteQueueFull(&TestQueue));
}
void test_Is_ByteQueue_EnqueueData_should_Return_0_If_The_Queue_Is_Full()
{
	TestQueue.Size = 254;
	TEST_ASSERT_EQUAL(0, ByteQueue_EnqueueData(&TestQueue, 0xCC));
}
void test_ByteQueue_EnqueueData_should_Add_The_Data_To_The_Queue_Tail_Increment_The_Tail_And_Size_And_Return_1()
{
	int tempTail;
	int resultOfRunningFunction;
	tempTail = TestQueue.Tail;
	resultOfRunningFunction = ByteQueue_EnqueueData(&TestQueue,0xAA);
	TEST_ASSERT_EQUAL_HEX8(0xAA,TestQueue.Data[tempTail]);
	TEST_ASSERT_EQUAL(3,TestQueue.Tail);
	TEST_ASSERT_EQUAL(2,TestQueue.Size);
}
void test_Byte_EnqueueData_Should_Return_The_Tail_To_Zero_Should_The_Tail_Be_Incremented_To_Max_Queue_Size_Minus_1()
{
	TestQueue.Tail = 253;
	int tempTail = TestQueue.Tail;
	int resultOfRunningFunction;
	resultOfRunningFunction = ByteQueue_EnqueueData(&TestQueue,0xDD);
	TEST_ASSERT_EQUAL_HEX8(0xDD,TestQueue.Data[tempTail]);
	TEST_ASSERT_EQUAL(0,TestQueue.Tail);
}
void test_Is_QueueEmpty_returns_1_If_Queue_Size_Is_Zero()
{
	TestQueue.Size = 0;
	int resultOfRunningFunction;
	resultOfRunningFunction =  Is_QueueEmpty(&TestQueue);
	TEST_ASSERT_EQUAL(1,resultOfRunningFunction);
}
void test_Is_QueueEmpty_returns_0_If_Queue_Size_Is_NOT_Zero()
{
	TestQueue.Size = 2;
	int resultOfRunningFunction;
	resultOfRunningFunction =  Is_QueueEmpty(&TestQueue);
	TEST_ASSERT_EQUAL(0,resultOfRunningFunction);
}
void test_Is_ByteQueue_ReturnSize_should_return_size()
{
	TestQueue.Size = 2;
	int resultOfRunningFunction;
	resultOfRunningFunction =  ByteQueue_ReturnSize(&TestQueue);
	TEST_ASSERT_EQUAL(2,resultOfRunningFunction);
}
void test_ByteQueue_DequeueData_should_Read_The_Data_At_The_Queue_Head_Increment_The_Head_Decrement_Size_And_Return_The_Data_Read_At_The_Queue_Head()
{
	int tempHead;
	tempHead = TestQueue.Head;
	TestQueue.Data[tempHead] = 0x09;
	uint8_t resultOfRunningFunction;
	
	resultOfRunningFunction =ByteQueue_DequeueByte(&TestQueue);
	TEST_ASSERT_EQUAL_HEX8(0x09,resultOfRunningFunction);
	TEST_ASSERT_EQUAL(4,TestQueue.Head);
	TEST_ASSERT_EQUAL(0,TestQueue.Size);
}
void test_Byte_DequeueData_Should_Return_The_Head_To_Zero_Should_The_Head_Be_Incremented_To_Max_Queue_Size_Minus_1()
{
	TestQueue.Head = 253;
	int resultOfRunningFunction;
	resultOfRunningFunction =ByteQueue_DequeueByte(&TestQueue);
	TEST_ASSERT_EQUAL(0,TestQueue.Head);
}
#endif // TEST
