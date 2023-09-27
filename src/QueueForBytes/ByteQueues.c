#include "ByteQueues.h"


void Initialize_ByteQueue(Queue_T *myQueue)
{
	myQueue->Head = 0;
	myQueue->Tail = 0;
	myQueue->Size = 0;
}
int Is_ByteQueueFull(Queue_T *myQueue)
{
	if(myQueue->Size >= (MAX_QUEUE_SIZE-1))
		return 1;
	else
		return 0;
}
int ByteQueue_EnqueueData(Queue_T *myQueue, uint8_t data)
{
	if(myQueue->Size == (MAX_QUEUE_SIZE-1))
		return 0;
	else
	{
		myQueue->Data[myQueue->Tail++] = data;
		myQueue->Tail %= (MAX_QUEUE_SIZE-1);
		myQueue->Size++;
		return 1;
	}
}
int Is_QueueEmpty(Queue_T *myQueue)
{
	if(myQueue->Size == 0)
		return 1;
	else
		return 0;
}
unsigned int ByteQueue_ReturnSize(Queue_T *myQueue)
{
	return myQueue->Size;
}
uint8_t ByteQueue_DequeueByte(Queue_T *myQueue)
{
	uint8_t dataByte;
	dataByte = myQueue->Data[myQueue->Head++];
	myQueue->Head %= (MAX_QUEUE_SIZE-1);
	myQueue->Size--;
	return dataByte;
}