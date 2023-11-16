#ifndef TMR2_H
#define TMR2_H
#include <stdint.h>
void TMR2_Init();

void TMR2_Start(uint16_t ReloadValue);

void TMR2_Stop();

#endif // TMR2_H
