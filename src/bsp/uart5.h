#ifndef UART5_H
#define UART5_H
#include <stdint.h>

//#ifdef TEST
//#define GPIOA (*(volatile uint32_t*)(0x40001000))
//extern  GPIO_TypeDef GPIOA;
//extern 	RCC_TypeDef RCC;
//#endif

/*
*This funtcion initializes the UART5 peripherals and PA2 and PA3 pins
*/

void UART5_Iniatialize(uint32_t Baudrate);
uint8_t UART5_DataAvalaibleFromUart();
uint8_t UART5_ReadyToTransmitData();
void UART5_Write(uint8_t Byte); //This function puts a byte in the UART data register

uint8_t UART5_Read(); // This function reads and returns the contents of the Uart data register
#endif //UART5_H