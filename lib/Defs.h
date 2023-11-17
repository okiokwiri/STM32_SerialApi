#ifndef DEFS_H
#define DEFS_H


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <float.h>
//--------------------------------------------
//useful test overrides
//--------------------------------------------
#ifdef TEST
#define FOREVER              (0)
#define STATIC
#define INLINE
#else
#define FOREVER              (1)
#define STATIC               static
#define INLINE               inline

#endif

/*
* Add some none standard C datatypes
*/
typedef unsigned char BOOL;
#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif
#ifndef NULL
#define NULL 0
#endif


typedef int STATUS_T;

#define STATUS_OK            		   					(0)
#define STATUS_UNKNOWN_CMD       						(1)
#define STATUS_MISSING_ARG    		   					(2)
#define STATUS_EXTRA_ARG     	    					(3)
#define STATUS_INVALID_ARG   		   					(4)
#define STATUS_TOO_LOW       		   					(5)
#define STATUS_TOO_HIGH       		   					(6)
#define STATUS_BAD_MSG          						(7)
#define STATUS_TRANSMIT_BUSY     						(8)
#define STATUS_NOT_ARMED         						(10)
#define STATUS_NONE_YET          						(11)
#define STATUS_CAPTURING         						(12)
#define STATUS_OVERFLOW          						(13)
#define STATUS_MISSING_DATA      						(14)
#define STATUS_ALREADY_TRIGGERED 						(15)
#define STATUS_ALREADY_ARMED     						(16)
#define STATUS_ALREADY_COMPLETE  						(17)

#define STATUS_FLASH_WRITE_ERROR						(18)
#define STATUS_FLASH_INIT_ERROR							(19)
#define STATUS_INVALID_PARAM     						(20)
#define STATUS_TOO_MANY_PARAMS   						(21)

#define STATUS_NOT_INITIALIZED  						(22)
#define STATUS_NULL_POINTER     						(23)
#define STATUS_UART_BAD_PORT     						(24)

#define STATUS_INVALID_TIME_READING						(25)
#define STATUS_RTC_OSCILLATOR_STOPPAGE		 			(26)
#define STATUS_I2C_BUS_COLLISION						(27)
#define STATUS_RTC_TIME_RESET_DETECTED					(28)
#define STATUS_BAD_RTC_READ_DETECTED					(29)
#define STATUS_OVER_TEMPERATURE							(30)
#define STATUS_UNKNOWN_ERR     							(255)




#endif //DEFS_H