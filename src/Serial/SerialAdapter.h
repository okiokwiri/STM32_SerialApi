#ifndef SERIALADAPTER_H
#define SERIALADAPTER_H
#include "uart5.h"
#include "ByteQueues.h"
#include <stdint.h>
extern Queue_T* RxQueue;
extern Queue_T* TxQueue;
void initializeSerial(uint32_t Baudrate);
uint8_t IsSerialDataAvailableToRead(); //This function returns 1 if there is data availabe to read and 0 if none is available in the RX  Queue
uint8_t WriteDataToSerial(uint8_t data);
#endif // SERIALADAPTER_H
