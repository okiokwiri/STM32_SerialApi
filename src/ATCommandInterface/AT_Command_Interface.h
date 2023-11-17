#ifndef AT_COMMAND_INTERFACE_H
#define AT_COMMAND_INTERFACE_H
#include "Defs.h"

STATUS_T Send_AT_Command(char* Command, char* Response, uint8_t Retries, uint8_t waitTime);

#endif // AT_COMMAND_INTERFACE_H
