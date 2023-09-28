#include "SerialAdapter.h"

Queue_T RxBuffer;
Queue_T  TxBuffer;
Queue_T* RxQueue = &RxBuffer;
Queue_T* TxQueue = &TxBuffer;
 void initializeSerial(uint32_t Baudrate)
 {
 	 UART5_Iniatialize(Baudrate);
 	 Initialize_ByteQueue(RxQueue);
 	 Initialize_ByteQueue(TxQueue);
 }
 uint8_t IsSerialDataAvailableToRead()
 {
	if(Is_QueueEmpty(&RxBuffer))
		return 0;
	else
		return 1;
 }
 // void USART5_IRQHandler (void)
 // {
 	
 // }