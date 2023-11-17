#ifndef TMR2_H
#define TMR2_H
#include <stdint.h>
void TMR2_Init();

void TMR2_Start(uint16_t ReloadValue);

void TMR2_Stop();

uint8_t TMR2_UpdateEventOccured();
#endif // TMR2_H
