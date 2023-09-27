#include "eventQueues.h"


void Initialize_EventQueue(Event_Queue_T *myEventQueue)
{
	myEventQueue->Head = 0;
	myEventQueue->Size = 0;
	myEventQueue->Tail = 0;
	
}
int Is_EventQueueFull(Event_Queue_T *myEventQueue)
{
	if(myEventQueue->Size == (MAX_EVENT_QUEUE_SIZE-1))
		return 1;
	else
		return 0;
}
int Enqueue_Event(Event_Queue_T *myEventQueue, EventType Event)
{
	if(myEventQueue->Size == (MAX_EVENT_QUEUE_SIZE-1))
		return 0;
	else
	{
		myEventQueue->Events[myEventQueue->Head++] = Event;
		return 1;
	}
}