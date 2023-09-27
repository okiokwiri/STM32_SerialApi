#ifndef BYTEQUEUES_H
#define BYTEQUEUES_H
#include <stdint.h>

/*
  *define a typedef for queues
*/
 #define MAX_QUEUE_SIZE			255
typedef struct 
{
	/* data */
	uint8_t Data[MAX_QUEUE_SIZE];
	unsigned int Head;
	unsigned int Tail;
	unsigned int Size;
}volatile Queue_T;

/*
* This function initialzies the Queue object one desires
	
*/
void Initialize_ByteQueue(Queue_T *myQueue);
/*
	This function checks if the queue is full and returns 1 if full
	and returns 0 if the queue is not full;
*/
int Is_ByteQueueFull(Queue_T *myQueue);
/*
	*This function adds data to the queue given by the argument *myQueue 
	and returns 1 if successful and returns 0 if unsuccessful
*/
int ByteQueue_EnqueueData(Queue_T *myQueue, uint8_t data);
/*
	This function returns 1 if the queue is empty i.e Size ==0 and
	returns 0 if the Queue is not empty
*/
int Is_QueueEmpty(Queue_T *myQueue);
/*
	This function returns the Size of Queue
*/
unsigned int ByteQueue_ReturnSize(Queue_T *myQueue);
/*
	this function removes a byte of data from the queue
*/
uint8_t ByteQueue_DequeueByte(Queue_T *myQueue);
#endif // BYTEQUEUES_H
