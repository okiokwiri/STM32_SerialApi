#ifdef TEST

#include "unity.h"

#include "eventQueues.h"

 Event_Queue_T myEventQueue;
void setUp(void)
{
	myEventQueue.Head = 3;
	myEventQueue.Tail = 2;
	myEventQueue.Size = 1;
}

void tearDown(void)
{
}

void test_Initialize_EventQueue(void)
{
    Initialize_EventQueue(&myEventQueue);
   TEST_ASSERT_EQUAL(0,myEventQueue.Head);
   TEST_ASSERT_EQUAL(0,myEventQueue.Tail);
   TEST_ASSERT_EQUAL(0,myEventQueue.Size);
}
void test_Is_EventQueueFull_Should_Return_1_If_Size_Is_Equal_To_MAX_EVENT_QUEUE_SIZE_MINUS_1()
{
	myEventQueue.Size = 254;
	TEST_ASSERT_EQUAL(1, Is_EventQueueFull(&myEventQueue));
}
void test_Is_EventQueueFull_Should_Return_0_If_Size_Is_Less_Than_MAX_EVENT_QUEUE_SIZE_MINUS_1()
{
	myEventQueue.Size = 10;
	TEST_ASSERT_EQUAL(0, Is_EventQueueFull(&myEventQueue));
}
void test_Enqueue_Event_Should_Return_0_If_Event_Queue_Is_Full()
{
	myEventQueue.Size = 254;
	TEST_ASSERT_EQUAL(0, Enqueue_Event(&myEventQueue,AT_EXPECTED_RESPONSE_FOUND));
}
#endif // TEST
