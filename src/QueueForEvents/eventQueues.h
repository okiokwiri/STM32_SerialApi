#ifndef EVENTQUEUES_H
#define EVENTQUEUES_H
#include <stdint.h>
#define MAX_EVENT_QUEUE_SIZE				255
typedef uint8_t EventType;
#define AT_EXPECTED_RESPONSE_FOUND 			(10)
#define AT_COMMAND_WAIT_TIMEOUT				(11)
#define DATA_PRESENT_IN_GSM_UART_QUEUE		(12)


typedef struct 
{
	EventType Events[MAX_EVENT_QUEUE_SIZE];
	unsigned int Head;
	unsigned int Tail;
	unsigned int Size;
}volatile Event_Queue_T;

/*
 This function intializes the event queue object one desires 
*/
void Initialize_EventQueue(Event_Queue_T *myEventQueue);

/*
This function checks if the Event queue is full
*/
int Is_EventQueueFull(Event_Queue_T *myEventQueue);
/*
	This function enqueus an event.
	The function returns 1 if successful 0 if the queue is full
*/
int Enqueue_Event(Event_Queue_T *myEventQueue, EventType Event);
#endif // EVENTQUEUES_H
