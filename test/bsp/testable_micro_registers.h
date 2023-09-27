#ifndef TESTABLE_MICRO_REGISTERS_H
#define TESTABLE_MICRO_REGISTERS_H
#include <stdint.h>
typedef struct
{
   uint32_t MODER;    /*!< GPIO port mode register,               Address offset: 0x00      */
   uint32_t OTYPER;   /*!< GPIO port output type register,        Address offset: 0x04      */
   uint32_t OSPEEDR;  /*!< GPIO port output speed register,       Address offset: 0x08      */
   uint32_t PUPDR;    /*!< GPIO port pull-up/pull-down register,  Address offset: 0x0C      */
   uint32_t IDR;      /*!< GPIO port input data register,         Address offset: 0x10      */
   uint32_t ODR;      /*!< GPIO port output data register,        Address offset: 0x14      */
   uint32_t BSRR;     /*!< GPIO port bit set/reset register,      Address offset: 0x18      */
   uint32_t LCKR;     /*!< GPIO port configuration lock register, Address offset: 0x1C      */
   uint32_t AFR[2];   /*!< GPIO alternate function registers,     Address offset: 0x20-0x24 */
} GPIO_TypeDef;
extern volatile GPIO_TypeDef* GPIOA;

/******************************************************************************/
/*                                                                            */
/*                            General Purpose I/O                             */
/*                                                                            */
/******************************************************************************/
/******************  Bits definition for GPIO_MODER register  *****************/
#define GPIO_MODER_MODER0_Pos            (0U)                                  
#define GPIO_MODER_MODER0_Msk            (0x3UL << GPIO_MODER_MODER0_Pos)       /*!< 0x00000003 */
#define GPIO_MODER_MODER0                GPIO_MODER_MODER0_Msk                 
#define GPIO_MODER_MODER0_0              (0x1UL << GPIO_MODER_MODER0_Pos)       /*!< 0x00000001 */
#define GPIO_MODER_MODER0_1              (0x2UL << GPIO_MODER_MODER0_Pos)       /*!< 0x00000002 */
#define GPIO_MODER_MODER1_Pos            (2U)                                  
#define GPIO_MODER_MODER1_Msk            (0x3UL << GPIO_MODER_MODER1_Pos)       /*!< 0x0000000C */
#define GPIO_MODER_MODER1                GPIO_MODER_MODER1_Msk                 
#define GPIO_MODER_MODER1_0              (0x1UL << GPIO_MODER_MODER1_Pos)       /*!< 0x00000004 */
#define GPIO_MODER_MODER1_1              (0x2UL << GPIO_MODER_MODER1_Pos)       /*!< 0x00000008 */
#define GPIO_MODER_MODER2_Pos            (4U)                                  
#define GPIO_MODER_MODER2_Msk            (0x3UL << GPIO_MODER_MODER2_Pos)       /*!< 0x00000030 */
#define GPIO_MODER_MODER2                GPIO_MODER_MODER2_Msk                 
#define GPIO_MODER_MODER2_0              (0x1UL << GPIO_MODER_MODER2_Pos)       /*!< 0x00000010 */
#define GPIO_MODER_MODER2_1              (0x2UL << GPIO_MODER_MODER2_Pos)       /*!< 0x00000020 */
#define GPIO_MODER_MODER3_Pos            (6U)                                  
#define GPIO_MODER_MODER3_Msk            (0x3UL << GPIO_MODER_MODER3_Pos)       /*!< 0x000000C0 */
#define GPIO_MODER_MODER3                GPIO_MODER_MODER3_Msk                 
#define GPIO_MODER_MODER3_0              (0x1UL << GPIO_MODER_MODER3_Pos)       /*!< 0x00000040 */
#define GPIO_MODER_MODER3_1              (0x2UL << GPIO_MODER_MODER3_Pos)       /*!< 0x00000080 */
#define GPIO_MODER_MODER4_Pos            (8U)                                  
#define GPIO_MODER_MODER4_Msk            (0x3UL << GPIO_MODER_MODER4_Pos)       /*!< 0x00000300 */
#define GPIO_MODER_MODER4                GPIO_MODER_MODER4_Msk                 
#define GPIO_MODER_MODER4_0              (0x1UL << GPIO_MODER_MODER4_Pos)       /*!< 0x00000100 */
#define GPIO_MODER_MODER4_1              (0x2UL << GPIO_MODER_MODER4_Pos)       /*!< 0x00000200 */
#define GPIO_MODER_MODER5_Pos            (10U)                                 
#define GPIO_MODER_MODER5_Msk            (0x3UL << GPIO_MODER_MODER5_Pos)       /*!< 0x00000C00 */
#define GPIO_MODER_MODER5                GPIO_MODER_MODER5_Msk                 
#define GPIO_MODER_MODER5_0              (0x1UL << GPIO_MODER_MODER5_Pos)       /*!< 0x00000400 */
#define GPIO_MODER_MODER5_1              (0x2UL << GPIO_MODER_MODER5_Pos)       /*!< 0x00000800 */
#define GPIO_MODER_MODER6_Pos            (12U)                                 
#define GPIO_MODER_MODER6_Msk            (0x3UL << GPIO_MODER_MODER6_Pos)       /*!< 0x00003000 */
#define GPIO_MODER_MODER6                GPIO_MODER_MODER6_Msk                 
#define GPIO_MODER_MODER6_0              (0x1UL << GPIO_MODER_MODER6_Pos)       /*!< 0x00001000 */
#define GPIO_MODER_MODER6_1              (0x2UL << GPIO_MODER_MODER6_Pos)       /*!< 0x00002000 */
#define GPIO_MODER_MODER7_Pos            (14U)                                 
#define GPIO_MODER_MODER7_Msk            (0x3UL << GPIO_MODER_MODER7_Pos)       /*!< 0x0000C000 */
#define GPIO_MODER_MODER7                GPIO_MODER_MODER7_Msk                 
#define GPIO_MODER_MODER7_0              (0x1UL << GPIO_MODER_MODER7_Pos)       /*!< 0x00004000 */
#define GPIO_MODER_MODER7_1              (0x2UL << GPIO_MODER_MODER7_Pos)       /*!< 0x00008000 */
#define GPIO_MODER_MODER8_Pos            (16U)                                 
#define GPIO_MODER_MODER8_Msk            (0x3UL << GPIO_MODER_MODER8_Pos)       /*!< 0x00030000 */
#define GPIO_MODER_MODER8                GPIO_MODER_MODER8_Msk                 
#define GPIO_MODER_MODER8_0              (0x1UL << GPIO_MODER_MODER8_Pos)       /*!< 0x00010000 */
#define GPIO_MODER_MODER8_1              (0x2UL << GPIO_MODER_MODER8_Pos)       /*!< 0x00020000 */
#define GPIO_MODER_MODER9_Pos            (18U)                                 
#define GPIO_MODER_MODER9_Msk            (0x3UL << GPIO_MODER_MODER9_Pos)       /*!< 0x000C0000 */
#define GPIO_MODER_MODER9                GPIO_MODER_MODER9_Msk                 
#define GPIO_MODER_MODER9_0              (0x1UL << GPIO_MODER_MODER9_Pos)       /*!< 0x00040000 */
#define GPIO_MODER_MODER9_1              (0x2UL << GPIO_MODER_MODER9_Pos)       /*!< 0x00080000 */
#define GPIO_MODER_MODER10_Pos           (20U)                                 
#define GPIO_MODER_MODER10_Msk           (0x3UL << GPIO_MODER_MODER10_Pos)      /*!< 0x00300000 */
#define GPIO_MODER_MODER10               GPIO_MODER_MODER10_Msk                
#define GPIO_MODER_MODER10_0             (0x1UL << GPIO_MODER_MODER10_Pos)      /*!< 0x00100000 */
#define GPIO_MODER_MODER10_1             (0x2UL << GPIO_MODER_MODER10_Pos)      /*!< 0x00200000 */
#define GPIO_MODER_MODER11_Pos           (22U)                                 
#define GPIO_MODER_MODER11_Msk           (0x3UL << GPIO_MODER_MODER11_Pos)      /*!< 0x00C00000 */
#define GPIO_MODER_MODER11               GPIO_MODER_MODER11_Msk                
#define GPIO_MODER_MODER11_0             (0x1UL << GPIO_MODER_MODER11_Pos)      /*!< 0x00400000 */
#define GPIO_MODER_MODER11_1             (0x2UL << GPIO_MODER_MODER11_Pos)      /*!< 0x00800000 */
#define GPIO_MODER_MODER12_Pos           (24U)                                 
#define GPIO_MODER_MODER12_Msk           (0x3UL << GPIO_MODER_MODER12_Pos)      /*!< 0x03000000 */
#define GPIO_MODER_MODER12               GPIO_MODER_MODER12_Msk                
#define GPIO_MODER_MODER12_0             (0x1UL << GPIO_MODER_MODER12_Pos)      /*!< 0x01000000 */
#define GPIO_MODER_MODER12_1             (0x2UL << GPIO_MODER_MODER12_Pos)      /*!< 0x02000000 */
#define GPIO_MODER_MODER13_Pos           (26U)                                 
#define GPIO_MODER_MODER13_Msk           (0x3UL << GPIO_MODER_MODER13_Pos)      /*!< 0x0C000000 */
#define GPIO_MODER_MODER13               GPIO_MODER_MODER13_Msk                
#define GPIO_MODER_MODER13_0             (0x1UL << GPIO_MODER_MODER13_Pos)      /*!< 0x04000000 */
#define GPIO_MODER_MODER13_1             (0x2UL << GPIO_MODER_MODER13_Pos)      /*!< 0x08000000 */
#define GPIO_MODER_MODER14_Pos           (28U)                                 
#define GPIO_MODER_MODER14_Msk           (0x3UL << GPIO_MODER_MODER14_Pos)      /*!< 0x30000000 */
#define GPIO_MODER_MODER14               GPIO_MODER_MODER14_Msk                
#define GPIO_MODER_MODER14_0             (0x1UL << GPIO_MODER_MODER14_Pos)      /*!< 0x10000000 */
#define GPIO_MODER_MODER14_1             (0x2UL << GPIO_MODER_MODER14_Pos)      /*!< 0x20000000 */
#define GPIO_MODER_MODER15_Pos           (30U)                                 
#define GPIO_MODER_MODER15_Msk           (0x3UL << GPIO_MODER_MODER15_Pos)      /*!< 0xC0000000 */
#define GPIO_MODER_MODER15               GPIO_MODER_MODER15_Msk                
#define GPIO_MODER_MODER15_0             (0x1UL << GPIO_MODER_MODER15_Pos)      /*!< 0x40000000 */
#define GPIO_MODER_MODER15_1             (0x2UL << GPIO_MODER_MODER15_Pos)      /*!< 0x80000000 */

/* Legacy defines */
#define GPIO_MODER_MODE0_Pos             GPIO_MODER_MODER0_Pos                                  
#define GPIO_MODER_MODE0_Msk             GPIO_MODER_MODER0_Msk
#define GPIO_MODER_MODE0                 GPIO_MODER_MODER0                 
#define GPIO_MODER_MODE0_0               GPIO_MODER_MODER0_0
#define GPIO_MODER_MODE0_1               GPIO_MODER_MODER0_1
#define GPIO_MODER_MODE1_Pos             GPIO_MODER_MODER1_Pos                                  
#define GPIO_MODER_MODE1_Msk             GPIO_MODER_MODER1_Msk
#define GPIO_MODER_MODE1                 GPIO_MODER_MODER1                  
#define GPIO_MODER_MODE1_0               GPIO_MODER_MODER1_0
#define GPIO_MODER_MODE1_1               GPIO_MODER_MODER1_1
#define GPIO_MODER_MODE2_Pos             GPIO_MODER_MODER2_Pos
#define GPIO_MODER_MODE2_Msk             GPIO_MODER_MODER2_Msk
#define GPIO_MODER_MODE2                 GPIO_MODER_MODER2                 
#define GPIO_MODER_MODE2_0               GPIO_MODER_MODER2_0
#define GPIO_MODER_MODE2_1               GPIO_MODER_MODER2_1
#define GPIO_MODER_MODE3_Pos             GPIO_MODER_MODER3_Pos                                
#define GPIO_MODER_MODE3_Msk             GPIO_MODER_MODER3_Msk
#define GPIO_MODER_MODE3                 GPIO_MODER_MODER3
#define GPIO_MODER_MODE3_0               GPIO_MODER_MODER3_0
#define GPIO_MODER_MODE3_1               GPIO_MODER_MODER3_1
#define GPIO_MODER_MODE4_Pos             GPIO_MODER_MODER4_Pos
#define GPIO_MODER_MODE4_Msk             GPIO_MODER_MODER4_Msk
#define GPIO_MODER_MODE4                 GPIO_MODER_MODER4
#define GPIO_MODER_MODE4_0               GPIO_MODER_MODER4_0
#define GPIO_MODER_MODE4_1               GPIO_MODER_MODER4_1
#define GPIO_MODER_MODE5_Pos             GPIO_MODER_MODER5_Pos
#define GPIO_MODER_MODE5_Msk             GPIO_MODER_MODER5_Msk
#define GPIO_MODER_MODE5                 GPIO_MODER_MODER5
#define GPIO_MODER_MODE5_0               GPIO_MODER_MODER5_0
#define GPIO_MODER_MODE5_1               GPIO_MODER_MODER5_1
#define GPIO_MODER_MODE6_Pos             GPIO_MODER_MODER6_Pos
#define GPIO_MODER_MODE6_Msk             GPIO_MODER_MODER6_Msk
#define GPIO_MODER_MODE6                 GPIO_MODER_MODER6
#define GPIO_MODER_MODE6_0               GPIO_MODER_MODER6_0
#define GPIO_MODER_MODE6_1               GPIO_MODER_MODER6_1
#define GPIO_MODER_MODE7_Pos             GPIO_MODER_MODER7_Pos
#define GPIO_MODER_MODE7_Msk             GPIO_MODER_MODER7_Msk
#define GPIO_MODER_MODE7                 GPIO_MODER_MODER7
#define GPIO_MODER_MODE7_0               GPIO_MODER_MODER7_0
#define GPIO_MODER_MODE7_1               GPIO_MODER_MODER7_1
#define GPIO_MODER_MODE8_Pos             GPIO_MODER_MODER8_Pos
#define GPIO_MODER_MODE8_Msk             GPIO_MODER_MODER8_Msk
#define GPIO_MODER_MODE8                 GPIO_MODER_MODER8
#define GPIO_MODER_MODE8_0               GPIO_MODER_MODER8_0
#define GPIO_MODER_MODE8_1               GPIO_MODER_MODER8_1
#define GPIO_MODER_MODE9_Pos             GPIO_MODER_MODER9_Pos
#define GPIO_MODER_MODE9_Msk             GPIO_MODER_MODER9_Msk
#define GPIO_MODER_MODE9                 GPIO_MODER_MODER9
#define GPIO_MODER_MODE9_0               GPIO_MODER_MODER9_0
#define GPIO_MODER_MODE9_1               GPIO_MODER_MODER9_1
#define GPIO_MODER_MODE10_Pos            GPIO_MODER_MODER10_Pos
#define GPIO_MODER_MODE10_Msk            GPIO_MODER_MODER10_Msk
#define GPIO_MODER_MODE10                GPIO_MODER_MODER10
#define GPIO_MODER_MODE10_0              GPIO_MODER_MODER10_0
#define GPIO_MODER_MODE10_1              GPIO_MODER_MODER10_1
#define GPIO_MODER_MODE11_Pos            GPIO_MODER_MODER11_Pos
#define GPIO_MODER_MODE11_Msk            GPIO_MODER_MODER11_Msk
#define GPIO_MODER_MODE11                GPIO_MODER_MODER11
#define GPIO_MODER_MODE11_0              GPIO_MODER_MODER11_0
#define GPIO_MODER_MODE11_1              GPIO_MODER_MODER11_1
#define GPIO_MODER_MODE12_Pos            GPIO_MODER_MODER12_Pos
#define GPIO_MODER_MODE12_Msk            GPIO_MODER_MODER12_Msk
#define GPIO_MODER_MODE12                GPIO_MODER_MODER12
#define GPIO_MODER_MODE12_0              GPIO_MODER_MODER12_0
#define GPIO_MODER_MODE12_1              GPIO_MODER_MODER12_1
#define GPIO_MODER_MODE13_Pos            GPIO_MODER_MODER13_Pos
#define GPIO_MODER_MODE13_Msk            GPIO_MODER_MODER13_Msk
#define GPIO_MODER_MODE13                GPIO_MODER_MODER13
#define GPIO_MODER_MODE13_0              GPIO_MODER_MODER13_0
#define GPIO_MODER_MODE13_1              GPIO_MODER_MODER13_1
#define GPIO_MODER_MODE14_Pos            GPIO_MODER_MODER14_Pos
#define GPIO_MODER_MODE14_Msk            GPIO_MODER_MODER14_Msk
#define GPIO_MODER_MODE14                GPIO_MODER_MODER14
#define GPIO_MODER_MODE14_0              GPIO_MODER_MODER14_0
#define GPIO_MODER_MODE14_1              GPIO_MODER_MODER14_1
#define GPIO_MODER_MODE15_Pos            GPIO_MODER_MODER15_Pos
#define GPIO_MODER_MODE15_Msk            GPIO_MODER_MODER15_Msk
#define GPIO_MODER_MODE15                GPIO_MODER_MODER15
#define GPIO_MODER_MODE15_0              GPIO_MODER_MODER15_0
#define GPIO_MODER_MODE15_1              GPIO_MODER_MODER15_1

/******************  Bits definition for GPIO_OTYPER register  ****************/
#define GPIO_OTYPER_OT0_Pos              (0U)                                  
#define GPIO_OTYPER_OT0_Msk              (0x1UL << GPIO_OTYPER_OT0_Pos)         /*!< 0x00000001 */
#define GPIO_OTYPER_OT0                  GPIO_OTYPER_OT0_Msk                   
#define GPIO_OTYPER_OT1_Pos              (1U)                                  
#define GPIO_OTYPER_OT1_Msk              (0x1UL << GPIO_OTYPER_OT1_Pos)         /*!< 0x00000002 */
#define GPIO_OTYPER_OT1                  GPIO_OTYPER_OT1_Msk                   
#define GPIO_OTYPER_OT2_Pos              (2U)                                  
#define GPIO_OTYPER_OT2_Msk              (0x1UL << GPIO_OTYPER_OT2_Pos)         /*!< 0x00000004 */
#define GPIO_OTYPER_OT2                  GPIO_OTYPER_OT2_Msk                   
#define GPIO_OTYPER_OT3_Pos              (3U)                                  
#define GPIO_OTYPER_OT3_Msk              (0x1UL << GPIO_OTYPER_OT3_Pos)         /*!< 0x00000008 */
#define GPIO_OTYPER_OT3                  GPIO_OTYPER_OT3_Msk                   
#define GPIO_OTYPER_OT4_Pos              (4U)                                  
#define GPIO_OTYPER_OT4_Msk              (0x1UL << GPIO_OTYPER_OT4_Pos)         /*!< 0x00000010 */
#define GPIO_OTYPER_OT4                  GPIO_OTYPER_OT4_Msk                   
#define GPIO_OTYPER_OT5_Pos              (5U)                                  
#define GPIO_OTYPER_OT5_Msk              (0x1UL << GPIO_OTYPER_OT5_Pos)         /*!< 0x00000020 */
#define GPIO_OTYPER_OT5                  GPIO_OTYPER_OT5_Msk                   
#define GPIO_OTYPER_OT6_Pos              (6U)                                  
#define GPIO_OTYPER_OT6_Msk              (0x1UL << GPIO_OTYPER_OT6_Pos)         /*!< 0x00000040 */
#define GPIO_OTYPER_OT6                  GPIO_OTYPER_OT6_Msk                   
#define GPIO_OTYPER_OT7_Pos              (7U)                                  
#define GPIO_OTYPER_OT7_Msk              (0x1UL << GPIO_OTYPER_OT7_Pos)         /*!< 0x00000080 */
#define GPIO_OTYPER_OT7                  GPIO_OTYPER_OT7_Msk                   
#define GPIO_OTYPER_OT8_Pos              (8U)                                  
#define GPIO_OTYPER_OT8_Msk              (0x1UL << GPIO_OTYPER_OT8_Pos)         /*!< 0x00000100 */
#define GPIO_OTYPER_OT8                  GPIO_OTYPER_OT8_Msk                   
#define GPIO_OTYPER_OT9_Pos              (9U)                                  
#define GPIO_OTYPER_OT9_Msk              (0x1UL << GPIO_OTYPER_OT9_Pos)         /*!< 0x00000200 */
#define GPIO_OTYPER_OT9                  GPIO_OTYPER_OT9_Msk                   
#define GPIO_OTYPER_OT10_Pos             (10U)                                 
#define GPIO_OTYPER_OT10_Msk             (0x1UL << GPIO_OTYPER_OT10_Pos)        /*!< 0x00000400 */
#define GPIO_OTYPER_OT10                 GPIO_OTYPER_OT10_Msk                  
#define GPIO_OTYPER_OT11_Pos             (11U)                                 
#define GPIO_OTYPER_OT11_Msk             (0x1UL << GPIO_OTYPER_OT11_Pos)        /*!< 0x00000800 */
#define GPIO_OTYPER_OT11                 GPIO_OTYPER_OT11_Msk                  
#define GPIO_OTYPER_OT12_Pos             (12U)                                 
#define GPIO_OTYPER_OT12_Msk             (0x1UL << GPIO_OTYPER_OT12_Pos)        /*!< 0x00001000 */
#define GPIO_OTYPER_OT12                 GPIO_OTYPER_OT12_Msk                  
#define GPIO_OTYPER_OT13_Pos             (13U)                                 
#define GPIO_OTYPER_OT13_Msk             (0x1UL << GPIO_OTYPER_OT13_Pos)        /*!< 0x00002000 */
#define GPIO_OTYPER_OT13                 GPIO_OTYPER_OT13_Msk                  
#define GPIO_OTYPER_OT14_Pos             (14U)                                 
#define GPIO_OTYPER_OT14_Msk             (0x1UL << GPIO_OTYPER_OT14_Pos)        /*!< 0x00004000 */
#define GPIO_OTYPER_OT14                 GPIO_OTYPER_OT14_Msk                  
#define GPIO_OTYPER_OT15_Pos             (15U)                                 
#define GPIO_OTYPER_OT15_Msk             (0x1UL << GPIO_OTYPER_OT15_Pos)        /*!< 0x00008000 */
#define GPIO_OTYPER_OT15                 GPIO_OTYPER_OT15_Msk                  

/* Legacy defines */
#define GPIO_OTYPER_OT_0                 GPIO_OTYPER_OT0
#define GPIO_OTYPER_OT_1                 GPIO_OTYPER_OT1
#define GPIO_OTYPER_OT_2                 GPIO_OTYPER_OT2
#define GPIO_OTYPER_OT_3                 GPIO_OTYPER_OT3
#define GPIO_OTYPER_OT_4                 GPIO_OTYPER_OT4
#define GPIO_OTYPER_OT_5                 GPIO_OTYPER_OT5
#define GPIO_OTYPER_OT_6                 GPIO_OTYPER_OT6
#define GPIO_OTYPER_OT_7                 GPIO_OTYPER_OT7
#define GPIO_OTYPER_OT_8                 GPIO_OTYPER_OT8
#define GPIO_OTYPER_OT_9                 GPIO_OTYPER_OT9
#define GPIO_OTYPER_OT_10                GPIO_OTYPER_OT10
#define GPIO_OTYPER_OT_11                GPIO_OTYPER_OT11
#define GPIO_OTYPER_OT_12                GPIO_OTYPER_OT12
#define GPIO_OTYPER_OT_13                GPIO_OTYPER_OT13
#define GPIO_OTYPER_OT_14                GPIO_OTYPER_OT14
#define GPIO_OTYPER_OT_15                GPIO_OTYPER_OT15

/******************  Bits definition for GPIO_OSPEEDR register  ***************/
#define GPIO_OSPEEDR_OSPEED0_Pos         (0U)                                  
#define GPIO_OSPEEDR_OSPEED0_Msk         (0x3UL << GPIO_OSPEEDR_OSPEED0_Pos)    /*!< 0x00000003 */
#define GPIO_OSPEEDR_OSPEED0             GPIO_OSPEEDR_OSPEED0_Msk              
#define GPIO_OSPEEDR_OSPEED0_0           (0x1UL << GPIO_OSPEEDR_OSPEED0_Pos)    /*!< 0x00000001 */
#define GPIO_OSPEEDR_OSPEED0_1           (0x2UL << GPIO_OSPEEDR_OSPEED0_Pos)    /*!< 0x00000002 */
#define GPIO_OSPEEDR_OSPEED1_Pos         (2U)                                  
#define GPIO_OSPEEDR_OSPEED1_Msk         (0x3UL << GPIO_OSPEEDR_OSPEED1_Pos)    /*!< 0x0000000C */
#define GPIO_OSPEEDR_OSPEED1             GPIO_OSPEEDR_OSPEED1_Msk              
#define GPIO_OSPEEDR_OSPEED1_0           (0x1UL << GPIO_OSPEEDR_OSPEED1_Pos)    /*!< 0x00000004 */
#define GPIO_OSPEEDR_OSPEED1_1           (0x2UL << GPIO_OSPEEDR_OSPEED1_Pos)    /*!< 0x00000008 */
#define GPIO_OSPEEDR_OSPEED2_Pos         (4U)                                  
#define GPIO_OSPEEDR_OSPEED2_Msk         (0x3UL << GPIO_OSPEEDR_OSPEED2_Pos)    /*!< 0x00000030 */
#define GPIO_OSPEEDR_OSPEED2             GPIO_OSPEEDR_OSPEED2_Msk              
#define GPIO_OSPEEDR_OSPEED2_0           (0x1UL << GPIO_OSPEEDR_OSPEED2_Pos)    /*!< 0x00000010 */
#define GPIO_OSPEEDR_OSPEED2_1           (0x2UL << GPIO_OSPEEDR_OSPEED2_Pos)    /*!< 0x00000020 */
#define GPIO_OSPEEDR_OSPEED3_Pos         (6U)                                  
#define GPIO_OSPEEDR_OSPEED3_Msk         (0x3UL << GPIO_OSPEEDR_OSPEED3_Pos)    /*!< 0x000000C0 */
#define GPIO_OSPEEDR_OSPEED3             GPIO_OSPEEDR_OSPEED3_Msk              
#define GPIO_OSPEEDR_OSPEED3_0           (0x1UL << GPIO_OSPEEDR_OSPEED3_Pos)    /*!< 0x00000040 */
#define GPIO_OSPEEDR_OSPEED3_1           (0x2UL << GPIO_OSPEEDR_OSPEED3_Pos)    /*!< 0x00000080 */
#define GPIO_OSPEEDR_OSPEED4_Pos         (8U)                                  
#define GPIO_OSPEEDR_OSPEED4_Msk         (0x3UL << GPIO_OSPEEDR_OSPEED4_Pos)    /*!< 0x00000300 */
#define GPIO_OSPEEDR_OSPEED4             GPIO_OSPEEDR_OSPEED4_Msk              
#define GPIO_OSPEEDR_OSPEED4_0           (0x1UL << GPIO_OSPEEDR_OSPEED4_Pos)    /*!< 0x00000100 */
#define GPIO_OSPEEDR_OSPEED4_1           (0x2UL << GPIO_OSPEEDR_OSPEED4_Pos)    /*!< 0x00000200 */
#define GPIO_OSPEEDR_OSPEED5_Pos         (10U)                                 
#define GPIO_OSPEEDR_OSPEED5_Msk         (0x3UL << GPIO_OSPEEDR_OSPEED5_Pos)    /*!< 0x00000C00 */
#define GPIO_OSPEEDR_OSPEED5             GPIO_OSPEEDR_OSPEED5_Msk              
#define GPIO_OSPEEDR_OSPEED5_0           (0x1UL << GPIO_OSPEEDR_OSPEED5_Pos)    /*!< 0x00000400 */
#define GPIO_OSPEEDR_OSPEED5_1           (0x2UL << GPIO_OSPEEDR_OSPEED5_Pos)    /*!< 0x00000800 */
#define GPIO_OSPEEDR_OSPEED6_Pos         (12U)                                 
#define GPIO_OSPEEDR_OSPEED6_Msk         (0x3UL << GPIO_OSPEEDR_OSPEED6_Pos)    /*!< 0x00003000 */
#define GPIO_OSPEEDR_OSPEED6             GPIO_OSPEEDR_OSPEED6_Msk              
#define GPIO_OSPEEDR_OSPEED6_0           (0x1UL << GPIO_OSPEEDR_OSPEED6_Pos)    /*!< 0x00001000 */
#define GPIO_OSPEEDR_OSPEED6_1           (0x2UL << GPIO_OSPEEDR_OSPEED6_Pos)    /*!< 0x00002000 */
#define GPIO_OSPEEDR_OSPEED7_Pos         (14U)                                 
#define GPIO_OSPEEDR_OSPEED7_Msk         (0x3UL << GPIO_OSPEEDR_OSPEED7_Pos)    /*!< 0x0000C000 */
#define GPIO_OSPEEDR_OSPEED7             GPIO_OSPEEDR_OSPEED7_Msk              
#define GPIO_OSPEEDR_OSPEED7_0           (0x1UL << GPIO_OSPEEDR_OSPEED7_Pos)    /*!< 0x00004000 */
#define GPIO_OSPEEDR_OSPEED7_1           (0x2UL << GPIO_OSPEEDR_OSPEED7_Pos)    /*!< 0x00008000 */
#define GPIO_OSPEEDR_OSPEED8_Pos         (16U)                                 
#define GPIO_OSPEEDR_OSPEED8_Msk         (0x3UL << GPIO_OSPEEDR_OSPEED8_Pos)    /*!< 0x00030000 */
#define GPIO_OSPEEDR_OSPEED8             GPIO_OSPEEDR_OSPEED8_Msk              
#define GPIO_OSPEEDR_OSPEED8_0           (0x1UL << GPIO_OSPEEDR_OSPEED8_Pos)    /*!< 0x00010000 */
#define GPIO_OSPEEDR_OSPEED8_1           (0x2UL << GPIO_OSPEEDR_OSPEED8_Pos)    /*!< 0x00020000 */
#define GPIO_OSPEEDR_OSPEED9_Pos         (18U)                                 
#define GPIO_OSPEEDR_OSPEED9_Msk         (0x3UL << GPIO_OSPEEDR_OSPEED9_Pos)    /*!< 0x000C0000 */
#define GPIO_OSPEEDR_OSPEED9             GPIO_OSPEEDR_OSPEED9_Msk              
#define GPIO_OSPEEDR_OSPEED9_0           (0x1UL << GPIO_OSPEEDR_OSPEED9_Pos)    /*!< 0x00040000 */
#define GPIO_OSPEEDR_OSPEED9_1           (0x2UL << GPIO_OSPEEDR_OSPEED9_Pos)    /*!< 0x00080000 */
#define GPIO_OSPEEDR_OSPEED10_Pos        (20U)                                 
#define GPIO_OSPEEDR_OSPEED10_Msk        (0x3UL << GPIO_OSPEEDR_OSPEED10_Pos)   /*!< 0x00300000 */
#define GPIO_OSPEEDR_OSPEED10            GPIO_OSPEEDR_OSPEED10_Msk             
#define GPIO_OSPEEDR_OSPEED10_0          (0x1UL << GPIO_OSPEEDR_OSPEED10_Pos)   /*!< 0x00100000 */
#define GPIO_OSPEEDR_OSPEED10_1          (0x2UL << GPIO_OSPEEDR_OSPEED10_Pos)   /*!< 0x00200000 */
#define GPIO_OSPEEDR_OSPEED11_Pos        (22U)                                 
#define GPIO_OSPEEDR_OSPEED11_Msk        (0x3UL << GPIO_OSPEEDR_OSPEED11_Pos)   /*!< 0x00C00000 */
#define GPIO_OSPEEDR_OSPEED11            GPIO_OSPEEDR_OSPEED11_Msk             
#define GPIO_OSPEEDR_OSPEED11_0          (0x1UL << GPIO_OSPEEDR_OSPEED11_Pos)   /*!< 0x00400000 */
#define GPIO_OSPEEDR_OSPEED11_1          (0x2UL << GPIO_OSPEEDR_OSPEED11_Pos)   /*!< 0x00800000 */
#define GPIO_OSPEEDR_OSPEED12_Pos        (24U)                                 
#define GPIO_OSPEEDR_OSPEED12_Msk        (0x3UL << GPIO_OSPEEDR_OSPEED12_Pos)   /*!< 0x03000000 */
#define GPIO_OSPEEDR_OSPEED12            GPIO_OSPEEDR_OSPEED12_Msk             
#define GPIO_OSPEEDR_OSPEED12_0          (0x1UL << GPIO_OSPEEDR_OSPEED12_Pos)   /*!< 0x01000000 */
#define GPIO_OSPEEDR_OSPEED12_1          (0x2UL << GPIO_OSPEEDR_OSPEED12_Pos)   /*!< 0x02000000 */
#define GPIO_OSPEEDR_OSPEED13_Pos        (26U)                                 
#define GPIO_OSPEEDR_OSPEED13_Msk        (0x3UL << GPIO_OSPEEDR_OSPEED13_Pos)   /*!< 0x0C000000 */
#define GPIO_OSPEEDR_OSPEED13            GPIO_OSPEEDR_OSPEED13_Msk             
#define GPIO_OSPEEDR_OSPEED13_0          (0x1UL << GPIO_OSPEEDR_OSPEED13_Pos)   /*!< 0x04000000 */
#define GPIO_OSPEEDR_OSPEED13_1          (0x2UL << GPIO_OSPEEDR_OSPEED13_Pos)   /*!< 0x08000000 */
#define GPIO_OSPEEDR_OSPEED14_Pos        (28U)                                 
#define GPIO_OSPEEDR_OSPEED14_Msk        (0x3UL << GPIO_OSPEEDR_OSPEED14_Pos)   /*!< 0x30000000 */
#define GPIO_OSPEEDR_OSPEED14            GPIO_OSPEEDR_OSPEED14_Msk             
#define GPIO_OSPEEDR_OSPEED14_0          (0x1UL << GPIO_OSPEEDR_OSPEED14_Pos)   /*!< 0x10000000 */
#define GPIO_OSPEEDR_OSPEED14_1          (0x2UL << GPIO_OSPEEDR_OSPEED14_Pos)   /*!< 0x20000000 */
#define GPIO_OSPEEDR_OSPEED15_Pos        (30U)                                 
#define GPIO_OSPEEDR_OSPEED15_Msk        (0x3UL << GPIO_OSPEEDR_OSPEED15_Pos)   /*!< 0xC0000000 */
#define GPIO_OSPEEDR_OSPEED15            GPIO_OSPEEDR_OSPEED15_Msk             
#define GPIO_OSPEEDR_OSPEED15_0          (0x1UL << GPIO_OSPEEDR_OSPEED15_Pos)   /*!< 0x40000000 */
#define GPIO_OSPEEDR_OSPEED15_1          (0x2UL << GPIO_OSPEEDR_OSPEED15_Pos)   /*!< 0x80000000 */

/* Legacy defines */
#define GPIO_OSPEEDER_OSPEEDR0           GPIO_OSPEEDR_OSPEED0
#define GPIO_OSPEEDER_OSPEEDR0_0         GPIO_OSPEEDR_OSPEED0_0
#define GPIO_OSPEEDER_OSPEEDR0_1         GPIO_OSPEEDR_OSPEED0_1
#define GPIO_OSPEEDER_OSPEEDR1           GPIO_OSPEEDR_OSPEED1
#define GPIO_OSPEEDER_OSPEEDR1_0         GPIO_OSPEEDR_OSPEED1_0
#define GPIO_OSPEEDER_OSPEEDR1_1         GPIO_OSPEEDR_OSPEED1_1
#define GPIO_OSPEEDER_OSPEEDR2           GPIO_OSPEEDR_OSPEED2
#define GPIO_OSPEEDER_OSPEEDR2_0         GPIO_OSPEEDR_OSPEED2_0
#define GPIO_OSPEEDER_OSPEEDR2_1         GPIO_OSPEEDR_OSPEED2_1
#define GPIO_OSPEEDER_OSPEEDR3           GPIO_OSPEEDR_OSPEED3
#define GPIO_OSPEEDER_OSPEEDR3_0         GPIO_OSPEEDR_OSPEED3_0
#define GPIO_OSPEEDER_OSPEEDR3_1         GPIO_OSPEEDR_OSPEED3_1
#define GPIO_OSPEEDER_OSPEEDR4           GPIO_OSPEEDR_OSPEED4
#define GPIO_OSPEEDER_OSPEEDR4_0         GPIO_OSPEEDR_OSPEED4_0
#define GPIO_OSPEEDER_OSPEEDR4_1         GPIO_OSPEEDR_OSPEED4_1
#define GPIO_OSPEEDER_OSPEEDR5           GPIO_OSPEEDR_OSPEED5
#define GPIO_OSPEEDER_OSPEEDR5_0         GPIO_OSPEEDR_OSPEED5_0
#define GPIO_OSPEEDER_OSPEEDR5_1         GPIO_OSPEEDR_OSPEED5_1
#define GPIO_OSPEEDER_OSPEEDR6           GPIO_OSPEEDR_OSPEED6
#define GPIO_OSPEEDER_OSPEEDR6_0         GPIO_OSPEEDR_OSPEED6_0
#define GPIO_OSPEEDER_OSPEEDR6_1         GPIO_OSPEEDR_OSPEED6_1
#define GPIO_OSPEEDER_OSPEEDR7           GPIO_OSPEEDR_OSPEED7
#define GPIO_OSPEEDER_OSPEEDR7_0         GPIO_OSPEEDR_OSPEED7_0
#define GPIO_OSPEEDER_OSPEEDR7_1         GPIO_OSPEEDR_OSPEED7_1
#define GPIO_OSPEEDER_OSPEEDR8           GPIO_OSPEEDR_OSPEED8
#define GPIO_OSPEEDER_OSPEEDR8_0         GPIO_OSPEEDR_OSPEED8_0
#define GPIO_OSPEEDER_OSPEEDR8_1         GPIO_OSPEEDR_OSPEED8_1
#define GPIO_OSPEEDER_OSPEEDR9           GPIO_OSPEEDR_OSPEED9
#define GPIO_OSPEEDER_OSPEEDR9_0         GPIO_OSPEEDR_OSPEED9_0
#define GPIO_OSPEEDER_OSPEEDR9_1         GPIO_OSPEEDR_OSPEED9_1
#define GPIO_OSPEEDER_OSPEEDR10          GPIO_OSPEEDR_OSPEED10
#define GPIO_OSPEEDER_OSPEEDR10_0        GPIO_OSPEEDR_OSPEED10_0
#define GPIO_OSPEEDER_OSPEEDR10_1        GPIO_OSPEEDR_OSPEED10_1
#define GPIO_OSPEEDER_OSPEEDR11          GPIO_OSPEEDR_OSPEED11
#define GPIO_OSPEEDER_OSPEEDR11_0        GPIO_OSPEEDR_OSPEED11_0
#define GPIO_OSPEEDER_OSPEEDR11_1        GPIO_OSPEEDR_OSPEED11_1
#define GPIO_OSPEEDER_OSPEEDR12          GPIO_OSPEEDR_OSPEED12
#define GPIO_OSPEEDER_OSPEEDR12_0        GPIO_OSPEEDR_OSPEED12_0
#define GPIO_OSPEEDER_OSPEEDR12_1        GPIO_OSPEEDR_OSPEED12_1
#define GPIO_OSPEEDER_OSPEEDR13          GPIO_OSPEEDR_OSPEED13
#define GPIO_OSPEEDER_OSPEEDR13_0        GPIO_OSPEEDR_OSPEED13_0
#define GPIO_OSPEEDER_OSPEEDR13_1        GPIO_OSPEEDR_OSPEED13_1
#define GPIO_OSPEEDER_OSPEEDR14          GPIO_OSPEEDR_OSPEED14
#define GPIO_OSPEEDER_OSPEEDR14_0        GPIO_OSPEEDR_OSPEED14_0
#define GPIO_OSPEEDER_OSPEEDR14_1        GPIO_OSPEEDR_OSPEED14_1
#define GPIO_OSPEEDER_OSPEEDR15          GPIO_OSPEEDR_OSPEED15
#define GPIO_OSPEEDER_OSPEEDR15_0        GPIO_OSPEEDR_OSPEED15_0
#define GPIO_OSPEEDER_OSPEEDR15_1        GPIO_OSPEEDR_OSPEED15_1

/******************  Bits definition for GPIO_PUPDR register  *****************/
#define GPIO_PUPDR_PUPD0_Pos             (0U)                                  
#define GPIO_PUPDR_PUPD0_Msk             (0x3UL << GPIO_PUPDR_PUPD0_Pos)        /*!< 0x00000003 */
#define GPIO_PUPDR_PUPD0                 GPIO_PUPDR_PUPD0_Msk                  
#define GPIO_PUPDR_PUPD0_0               (0x1UL << GPIO_PUPDR_PUPD0_Pos)        /*!< 0x00000001 */
#define GPIO_PUPDR_PUPD0_1               (0x2UL << GPIO_PUPDR_PUPD0_Pos)        /*!< 0x00000002 */
#define GPIO_PUPDR_PUPD1_Pos             (2U)                                  
#define GPIO_PUPDR_PUPD1_Msk             (0x3UL << GPIO_PUPDR_PUPD1_Pos)        /*!< 0x0000000C */
#define GPIO_PUPDR_PUPD1                 GPIO_PUPDR_PUPD1_Msk                  
#define GPIO_PUPDR_PUPD1_0               (0x1UL << GPIO_PUPDR_PUPD1_Pos)        /*!< 0x00000004 */
#define GPIO_PUPDR_PUPD1_1               (0x2UL << GPIO_PUPDR_PUPD1_Pos)        /*!< 0x00000008 */
#define GPIO_PUPDR_PUPD2_Pos             (4U)                                  
#define GPIO_PUPDR_PUPD2_Msk             (0x3UL << GPIO_PUPDR_PUPD2_Pos)        /*!< 0x00000030 */
#define GPIO_PUPDR_PUPD2                 GPIO_PUPDR_PUPD2_Msk                  
#define GPIO_PUPDR_PUPD2_0               (0x1UL << GPIO_PUPDR_PUPD2_Pos)        /*!< 0x00000010 */
#define GPIO_PUPDR_PUPD2_1               (0x2UL << GPIO_PUPDR_PUPD2_Pos)        /*!< 0x00000020 */
#define GPIO_PUPDR_PUPD3_Pos             (6U)                                  
#define GPIO_PUPDR_PUPD3_Msk             (0x3UL << GPIO_PUPDR_PUPD3_Pos)        /*!< 0x000000C0 */
#define GPIO_PUPDR_PUPD3                 GPIO_PUPDR_PUPD3_Msk                  
#define GPIO_PUPDR_PUPD3_0               (0x1UL << GPIO_PUPDR_PUPD3_Pos)        /*!< 0x00000040 */
#define GPIO_PUPDR_PUPD3_1               (0x2UL << GPIO_PUPDR_PUPD3_Pos)        /*!< 0x00000080 */
#define GPIO_PUPDR_PUPD4_Pos             (8U)                                  
#define GPIO_PUPDR_PUPD4_Msk             (0x3UL << GPIO_PUPDR_PUPD4_Pos)        /*!< 0x00000300 */
#define GPIO_PUPDR_PUPD4                 GPIO_PUPDR_PUPD4_Msk                  
#define GPIO_PUPDR_PUPD4_0               (0x1UL << GPIO_PUPDR_PUPD4_Pos)        /*!< 0x00000100 */
#define GPIO_PUPDR_PUPD4_1               (0x2UL << GPIO_PUPDR_PUPD4_Pos)        /*!< 0x00000200 */
#define GPIO_PUPDR_PUPD5_Pos             (10U)                                 
#define GPIO_PUPDR_PUPD5_Msk             (0x3UL << GPIO_PUPDR_PUPD5_Pos)        /*!< 0x00000C00 */
#define GPIO_PUPDR_PUPD5                 GPIO_PUPDR_PUPD5_Msk                  
#define GPIO_PUPDR_PUPD5_0               (0x1UL << GPIO_PUPDR_PUPD5_Pos)        /*!< 0x00000400 */
#define GPIO_PUPDR_PUPD5_1               (0x2UL << GPIO_PUPDR_PUPD5_Pos)        /*!< 0x00000800 */
#define GPIO_PUPDR_PUPD6_Pos             (12U)                                 
#define GPIO_PUPDR_PUPD6_Msk             (0x3UL << GPIO_PUPDR_PUPD6_Pos)        /*!< 0x00003000 */
#define GPIO_PUPDR_PUPD6                 GPIO_PUPDR_PUPD6_Msk                  
#define GPIO_PUPDR_PUPD6_0               (0x1UL << GPIO_PUPDR_PUPD6_Pos)        /*!< 0x00001000 */
#define GPIO_PUPDR_PUPD6_1               (0x2UL << GPIO_PUPDR_PUPD6_Pos)        /*!< 0x00002000 */
#define GPIO_PUPDR_PUPD7_Pos             (14U)                                 
#define GPIO_PUPDR_PUPD7_Msk             (0x3UL << GPIO_PUPDR_PUPD7_Pos)        /*!< 0x0000C000 */
#define GPIO_PUPDR_PUPD7                 GPIO_PUPDR_PUPD7_Msk                  
#define GPIO_PUPDR_PUPD7_0               (0x1UL << GPIO_PUPDR_PUPD7_Pos)        /*!< 0x00004000 */
#define GPIO_PUPDR_PUPD7_1               (0x2UL << GPIO_PUPDR_PUPD7_Pos)        /*!< 0x00008000 */
#define GPIO_PUPDR_PUPD8_Pos             (16U)                                 
#define GPIO_PUPDR_PUPD8_Msk             (0x3UL << GPIO_PUPDR_PUPD8_Pos)        /*!< 0x00030000 */
#define GPIO_PUPDR_PUPD8                 GPIO_PUPDR_PUPD8_Msk                  
#define GPIO_PUPDR_PUPD8_0               (0x1UL << GPIO_PUPDR_PUPD8_Pos)        /*!< 0x00010000 */
#define GPIO_PUPDR_PUPD8_1               (0x2UL << GPIO_PUPDR_PUPD8_Pos)        /*!< 0x00020000 */
#define GPIO_PUPDR_PUPD9_Pos             (18U)                                 
#define GPIO_PUPDR_PUPD9_Msk             (0x3UL << GPIO_PUPDR_PUPD9_Pos)        /*!< 0x000C0000 */
#define GPIO_PUPDR_PUPD9                 GPIO_PUPDR_PUPD9_Msk                  
#define GPIO_PUPDR_PUPD9_0               (0x1UL << GPIO_PUPDR_PUPD9_Pos)        /*!< 0x00040000 */
#define GPIO_PUPDR_PUPD9_1               (0x2UL << GPIO_PUPDR_PUPD9_Pos)        /*!< 0x00080000 */
#define GPIO_PUPDR_PUPD10_Pos            (20U)                                 
#define GPIO_PUPDR_PUPD10_Msk            (0x3UL << GPIO_PUPDR_PUPD10_Pos)       /*!< 0x00300000 */
#define GPIO_PUPDR_PUPD10                GPIO_PUPDR_PUPD10_Msk                 
#define GPIO_PUPDR_PUPD10_0              (0x1UL << GPIO_PUPDR_PUPD10_Pos)       /*!< 0x00100000 */
#define GPIO_PUPDR_PUPD10_1              (0x2UL << GPIO_PUPDR_PUPD10_Pos)       /*!< 0x00200000 */
#define GPIO_PUPDR_PUPD11_Pos            (22U)                                 
#define GPIO_PUPDR_PUPD11_Msk            (0x3UL << GPIO_PUPDR_PUPD11_Pos)       /*!< 0x00C00000 */
#define GPIO_PUPDR_PUPD11                GPIO_PUPDR_PUPD11_Msk                 
#define GPIO_PUPDR_PUPD11_0              (0x1UL << GPIO_PUPDR_PUPD11_Pos)       /*!< 0x00400000 */
#define GPIO_PUPDR_PUPD11_1              (0x2UL << GPIO_PUPDR_PUPD11_Pos)       /*!< 0x00800000 */
#define GPIO_PUPDR_PUPD12_Pos            (24U)                                 
#define GPIO_PUPDR_PUPD12_Msk            (0x3UL << GPIO_PUPDR_PUPD12_Pos)       /*!< 0x03000000 */
#define GPIO_PUPDR_PUPD12                GPIO_PUPDR_PUPD12_Msk                 
#define GPIO_PUPDR_PUPD12_0              (0x1UL << GPIO_PUPDR_PUPD12_Pos)       /*!< 0x01000000 */
#define GPIO_PUPDR_PUPD12_1              (0x2UL << GPIO_PUPDR_PUPD12_Pos)       /*!< 0x02000000 */
#define GPIO_PUPDR_PUPD13_Pos            (26U)                                 
#define GPIO_PUPDR_PUPD13_Msk            (0x3UL << GPIO_PUPDR_PUPD13_Pos)       /*!< 0x0C000000 */
#define GPIO_PUPDR_PUPD13                GPIO_PUPDR_PUPD13_Msk                 
#define GPIO_PUPDR_PUPD13_0              (0x1UL << GPIO_PUPDR_PUPD13_Pos)       /*!< 0x04000000 */
#define GPIO_PUPDR_PUPD13_1              (0x2UL << GPIO_PUPDR_PUPD13_Pos)       /*!< 0x08000000 */
#define GPIO_PUPDR_PUPD14_Pos            (28U)                                 
#define GPIO_PUPDR_PUPD14_Msk            (0x3UL << GPIO_PUPDR_PUPD14_Pos)       /*!< 0x30000000 */
#define GPIO_PUPDR_PUPD14                GPIO_PUPDR_PUPD14_Msk                 
#define GPIO_PUPDR_PUPD14_0              (0x1UL << GPIO_PUPDR_PUPD14_Pos)       /*!< 0x10000000 */
#define GPIO_PUPDR_PUPD14_1              (0x2UL << GPIO_PUPDR_PUPD14_Pos)       /*!< 0x20000000 */
#define GPIO_PUPDR_PUPD15_Pos            (30U)                                 
#define GPIO_PUPDR_PUPD15_Msk            (0x3UL << GPIO_PUPDR_PUPD15_Pos)       /*!< 0xC0000000 */
#define GPIO_PUPDR_PUPD15                GPIO_PUPDR_PUPD15_Msk                 
#define GPIO_PUPDR_PUPD15_0              (0x1UL << GPIO_PUPDR_PUPD15_Pos)       /*!< 0x40000000 */
#define GPIO_PUPDR_PUPD15_1              (0x2UL << GPIO_PUPDR_PUPD15_Pos)       /*!< 0x80000000 */

/* Legacy defines */
#define GPIO_PUPDR_PUPDR0                GPIO_PUPDR_PUPD0
#define GPIO_PUPDR_PUPDR0_0              GPIO_PUPDR_PUPD0_0
#define GPIO_PUPDR_PUPDR0_1              GPIO_PUPDR_PUPD0_1
#define GPIO_PUPDR_PUPDR1                GPIO_PUPDR_PUPD1
#define GPIO_PUPDR_PUPDR1_0              GPIO_PUPDR_PUPD1_0
#define GPIO_PUPDR_PUPDR1_1              GPIO_PUPDR_PUPD1_1
#define GPIO_PUPDR_PUPDR2                GPIO_PUPDR_PUPD2
#define GPIO_PUPDR_PUPDR2_0              GPIO_PUPDR_PUPD2_0
#define GPIO_PUPDR_PUPDR2_1              GPIO_PUPDR_PUPD2_1
#define GPIO_PUPDR_PUPDR3                GPIO_PUPDR_PUPD3
#define GPIO_PUPDR_PUPDR3_0              GPIO_PUPDR_PUPD3_0
#define GPIO_PUPDR_PUPDR3_1              GPIO_PUPDR_PUPD3_1
#define GPIO_PUPDR_PUPDR4                GPIO_PUPDR_PUPD4
#define GPIO_PUPDR_PUPDR4_0              GPIO_PUPDR_PUPD4_0
#define GPIO_PUPDR_PUPDR4_1              GPIO_PUPDR_PUPD4_1
#define GPIO_PUPDR_PUPDR5                GPIO_PUPDR_PUPD5
#define GPIO_PUPDR_PUPDR5_0              GPIO_PUPDR_PUPD5_0
#define GPIO_PUPDR_PUPDR5_1              GPIO_PUPDR_PUPD5_1
#define GPIO_PUPDR_PUPDR6                GPIO_PUPDR_PUPD6
#define GPIO_PUPDR_PUPDR6_0              GPIO_PUPDR_PUPD6_0
#define GPIO_PUPDR_PUPDR6_1              GPIO_PUPDR_PUPD6_1
#define GPIO_PUPDR_PUPDR7                GPIO_PUPDR_PUPD7
#define GPIO_PUPDR_PUPDR7_0              GPIO_PUPDR_PUPD7_0
#define GPIO_PUPDR_PUPDR7_1              GPIO_PUPDR_PUPD7_1
#define GPIO_PUPDR_PUPDR8                GPIO_PUPDR_PUPD8
#define GPIO_PUPDR_PUPDR8_0              GPIO_PUPDR_PUPD8_0
#define GPIO_PUPDR_PUPDR8_1              GPIO_PUPDR_PUPD8_1
#define GPIO_PUPDR_PUPDR9                GPIO_PUPDR_PUPD9
#define GPIO_PUPDR_PUPDR9_0              GPIO_PUPDR_PUPD9_0
#define GPIO_PUPDR_PUPDR9_1              GPIO_PUPDR_PUPD9_1
#define GPIO_PUPDR_PUPDR10               GPIO_PUPDR_PUPD10
#define GPIO_PUPDR_PUPDR10_0             GPIO_PUPDR_PUPD10_0
#define GPIO_PUPDR_PUPDR10_1             GPIO_PUPDR_PUPD10_1
#define GPIO_PUPDR_PUPDR11               GPIO_PUPDR_PUPD11
#define GPIO_PUPDR_PUPDR11_0             GPIO_PUPDR_PUPD11_0
#define GPIO_PUPDR_PUPDR11_1             GPIO_PUPDR_PUPD11_1
#define GPIO_PUPDR_PUPDR12               GPIO_PUPDR_PUPD12
#define GPIO_PUPDR_PUPDR12_0             GPIO_PUPDR_PUPD12_0
#define GPIO_PUPDR_PUPDR12_1             GPIO_PUPDR_PUPD12_1
#define GPIO_PUPDR_PUPDR13               GPIO_PUPDR_PUPD13
#define GPIO_PUPDR_PUPDR13_0             GPIO_PUPDR_PUPD13_0
#define GPIO_PUPDR_PUPDR13_1             GPIO_PUPDR_PUPD13_1
#define GPIO_PUPDR_PUPDR14               GPIO_PUPDR_PUPD14
#define GPIO_PUPDR_PUPDR14_0             GPIO_PUPDR_PUPD14_0
#define GPIO_PUPDR_PUPDR14_1             GPIO_PUPDR_PUPD14_1
#define GPIO_PUPDR_PUPDR15               GPIO_PUPDR_PUPD15
#define GPIO_PUPDR_PUPDR15_0             GPIO_PUPDR_PUPD15_0
#define GPIO_PUPDR_PUPDR15_1             GPIO_PUPDR_PUPD15_1

/******************  Bits definition for GPIO_IDR register  *******************/
#define GPIO_IDR_ID0_Pos                 (0U)                                  
#define GPIO_IDR_ID0_Msk                 (0x1UL << GPIO_IDR_ID0_Pos)            /*!< 0x00000001 */
#define GPIO_IDR_ID0                     GPIO_IDR_ID0_Msk                      
#define GPIO_IDR_ID1_Pos                 (1U)                                  
#define GPIO_IDR_ID1_Msk                 (0x1UL << GPIO_IDR_ID1_Pos)            /*!< 0x00000002 */
#define GPIO_IDR_ID1                     GPIO_IDR_ID1_Msk                      
#define GPIO_IDR_ID2_Pos                 (2U)                                  
#define GPIO_IDR_ID2_Msk                 (0x1UL << GPIO_IDR_ID2_Pos)            /*!< 0x00000004 */
#define GPIO_IDR_ID2                     GPIO_IDR_ID2_Msk                      
#define GPIO_IDR_ID3_Pos                 (3U)                                  
#define GPIO_IDR_ID3_Msk                 (0x1UL << GPIO_IDR_ID3_Pos)            /*!< 0x00000008 */
#define GPIO_IDR_ID3                     GPIO_IDR_ID3_Msk                      
#define GPIO_IDR_ID4_Pos                 (4U)                                  
#define GPIO_IDR_ID4_Msk                 (0x1UL << GPIO_IDR_ID4_Pos)            /*!< 0x00000010 */
#define GPIO_IDR_ID4                     GPIO_IDR_ID4_Msk                      
#define GPIO_IDR_ID5_Pos                 (5U)                                  
#define GPIO_IDR_ID5_Msk                 (0x1UL << GPIO_IDR_ID5_Pos)            /*!< 0x00000020 */
#define GPIO_IDR_ID5                     GPIO_IDR_ID5_Msk                      
#define GPIO_IDR_ID6_Pos                 (6U)                                  
#define GPIO_IDR_ID6_Msk                 (0x1UL << GPIO_IDR_ID6_Pos)            /*!< 0x00000040 */
#define GPIO_IDR_ID6                     GPIO_IDR_ID6_Msk                      
#define GPIO_IDR_ID7_Pos                 (7U)                                  
#define GPIO_IDR_ID7_Msk                 (0x1UL << GPIO_IDR_ID7_Pos)            /*!< 0x00000080 */
#define GPIO_IDR_ID7                     GPIO_IDR_ID7_Msk                      
#define GPIO_IDR_ID8_Pos                 (8U)                                  
#define GPIO_IDR_ID8_Msk                 (0x1UL << GPIO_IDR_ID8_Pos)            /*!< 0x00000100 */
#define GPIO_IDR_ID8                     GPIO_IDR_ID8_Msk                      
#define GPIO_IDR_ID9_Pos                 (9U)                                  
#define GPIO_IDR_ID9_Msk                 (0x1UL << GPIO_IDR_ID9_Pos)            /*!< 0x00000200 */
#define GPIO_IDR_ID9                     GPIO_IDR_ID9_Msk                      
#define GPIO_IDR_ID10_Pos                (10U)                                 
#define GPIO_IDR_ID10_Msk                (0x1UL << GPIO_IDR_ID10_Pos)           /*!< 0x00000400 */
#define GPIO_IDR_ID10                    GPIO_IDR_ID10_Msk                     
#define GPIO_IDR_ID11_Pos                (11U)                                 
#define GPIO_IDR_ID11_Msk                (0x1UL << GPIO_IDR_ID11_Pos)           /*!< 0x00000800 */
#define GPIO_IDR_ID11                    GPIO_IDR_ID11_Msk                     
#define GPIO_IDR_ID12_Pos                (12U)                                 
#define GPIO_IDR_ID12_Msk                (0x1UL << GPIO_IDR_ID12_Pos)           /*!< 0x00001000 */
#define GPIO_IDR_ID12                    GPIO_IDR_ID12_Msk                     
#define GPIO_IDR_ID13_Pos                (13U)                                 
#define GPIO_IDR_ID13_Msk                (0x1UL << GPIO_IDR_ID13_Pos)           /*!< 0x00002000 */
#define GPIO_IDR_ID13                    GPIO_IDR_ID13_Msk                     
#define GPIO_IDR_ID14_Pos                (14U)                                 
#define GPIO_IDR_ID14_Msk                (0x1UL << GPIO_IDR_ID14_Pos)           /*!< 0x00004000 */
#define GPIO_IDR_ID14                    GPIO_IDR_ID14_Msk                     
#define GPIO_IDR_ID15_Pos                (15U)                                 
#define GPIO_IDR_ID15_Msk                (0x1UL << GPIO_IDR_ID15_Pos)           /*!< 0x00008000 */
#define GPIO_IDR_ID15                    GPIO_IDR_ID15_Msk                     

/* Legacy defines */
#define GPIO_IDR_IDR_0                   GPIO_IDR_ID0
#define GPIO_IDR_IDR_1                   GPIO_IDR_ID1
#define GPIO_IDR_IDR_2                   GPIO_IDR_ID2
#define GPIO_IDR_IDR_3                   GPIO_IDR_ID3
#define GPIO_IDR_IDR_4                   GPIO_IDR_ID4
#define GPIO_IDR_IDR_5                   GPIO_IDR_ID5
#define GPIO_IDR_IDR_6                   GPIO_IDR_ID6
#define GPIO_IDR_IDR_7                   GPIO_IDR_ID7
#define GPIO_IDR_IDR_8                   GPIO_IDR_ID8
#define GPIO_IDR_IDR_9                   GPIO_IDR_ID9
#define GPIO_IDR_IDR_10                  GPIO_IDR_ID10
#define GPIO_IDR_IDR_11                  GPIO_IDR_ID11
#define GPIO_IDR_IDR_12                  GPIO_IDR_ID12
#define GPIO_IDR_IDR_13                  GPIO_IDR_ID13
#define GPIO_IDR_IDR_14                  GPIO_IDR_ID14
#define GPIO_IDR_IDR_15                  GPIO_IDR_ID15

/******************  Bits definition for GPIO_ODR register  *******************/
#define GPIO_ODR_OD0_Pos                 (0U)                                  
#define GPIO_ODR_OD0_Msk                 (0x1UL << GPIO_ODR_OD0_Pos)            /*!< 0x00000001 */
#define GPIO_ODR_OD0                     GPIO_ODR_OD0_Msk                      
#define GPIO_ODR_OD1_Pos                 (1U)                                  
#define GPIO_ODR_OD1_Msk                 (0x1UL << GPIO_ODR_OD1_Pos)            /*!< 0x00000002 */
#define GPIO_ODR_OD1                     GPIO_ODR_OD1_Msk                      
#define GPIO_ODR_OD2_Pos                 (2U)                                  
#define GPIO_ODR_OD2_Msk                 (0x1UL << GPIO_ODR_OD2_Pos)            /*!< 0x00000004 */
#define GPIO_ODR_OD2                     GPIO_ODR_OD2_Msk                      
#define GPIO_ODR_OD3_Pos                 (3U)                                  
#define GPIO_ODR_OD3_Msk                 (0x1UL << GPIO_ODR_OD3_Pos)            /*!< 0x00000008 */
#define GPIO_ODR_OD3                     GPIO_ODR_OD3_Msk                      
#define GPIO_ODR_OD4_Pos                 (4U)                                  
#define GPIO_ODR_OD4_Msk                 (0x1UL << GPIO_ODR_OD4_Pos)            /*!< 0x00000010 */
#define GPIO_ODR_OD4                     GPIO_ODR_OD4_Msk                      
#define GPIO_ODR_OD5_Pos                 (5U)                                  
#define GPIO_ODR_OD5_Msk                 (0x1UL << GPIO_ODR_OD5_Pos)            /*!< 0x00000020 */
#define GPIO_ODR_OD5                     GPIO_ODR_OD5_Msk                      
#define GPIO_ODR_OD6_Pos                 (6U)                                  
#define GPIO_ODR_OD6_Msk                 (0x1UL << GPIO_ODR_OD6_Pos)            /*!< 0x00000040 */
#define GPIO_ODR_OD6                     GPIO_ODR_OD6_Msk                      
#define GPIO_ODR_OD7_Pos                 (7U)                                  
#define GPIO_ODR_OD7_Msk                 (0x1UL << GPIO_ODR_OD7_Pos)            /*!< 0x00000080 */
#define GPIO_ODR_OD7                     GPIO_ODR_OD7_Msk                      
#define GPIO_ODR_OD8_Pos                 (8U)                                  
#define GPIO_ODR_OD8_Msk                 (0x1UL << GPIO_ODR_OD8_Pos)            /*!< 0x00000100 */
#define GPIO_ODR_OD8                     GPIO_ODR_OD8_Msk                      
#define GPIO_ODR_OD9_Pos                 (9U)                                  
#define GPIO_ODR_OD9_Msk                 (0x1UL << GPIO_ODR_OD9_Pos)            /*!< 0x00000200 */
#define GPIO_ODR_OD9                     GPIO_ODR_OD9_Msk                      
#define GPIO_ODR_OD10_Pos                (10U)                                 
#define GPIO_ODR_OD10_Msk                (0x1UL << GPIO_ODR_OD10_Pos)           /*!< 0x00000400 */
#define GPIO_ODR_OD10                    GPIO_ODR_OD10_Msk                     
#define GPIO_ODR_OD11_Pos                (11U)                                 
#define GPIO_ODR_OD11_Msk                (0x1UL << GPIO_ODR_OD11_Pos)           /*!< 0x00000800 */
#define GPIO_ODR_OD11                    GPIO_ODR_OD11_Msk                     
#define GPIO_ODR_OD12_Pos                (12U)                                 
#define GPIO_ODR_OD12_Msk                (0x1UL << GPIO_ODR_OD12_Pos)           /*!< 0x00001000 */
#define GPIO_ODR_OD12                    GPIO_ODR_OD12_Msk                     
#define GPIO_ODR_OD13_Pos                (13U)                                 
#define GPIO_ODR_OD13_Msk                (0x1UL << GPIO_ODR_OD13_Pos)           /*!< 0x00002000 */
#define GPIO_ODR_OD13                    GPIO_ODR_OD13_Msk                     
#define GPIO_ODR_OD14_Pos                (14U)                                 
#define GPIO_ODR_OD14_Msk                (0x1UL << GPIO_ODR_OD14_Pos)           /*!< 0x00004000 */
#define GPIO_ODR_OD14                    GPIO_ODR_OD14_Msk                     
#define GPIO_ODR_OD15_Pos                (15U)                                 
#define GPIO_ODR_OD15_Msk                (0x1UL << GPIO_ODR_OD15_Pos)           /*!< 0x00008000 */
#define GPIO_ODR_OD15                    GPIO_ODR_OD15_Msk                     
/* Legacy defines */
#define GPIO_ODR_ODR_0                   GPIO_ODR_OD0
#define GPIO_ODR_ODR_1                   GPIO_ODR_OD1
#define GPIO_ODR_ODR_2                   GPIO_ODR_OD2
#define GPIO_ODR_ODR_3                   GPIO_ODR_OD3
#define GPIO_ODR_ODR_4                   GPIO_ODR_OD4
#define GPIO_ODR_ODR_5                   GPIO_ODR_OD5
#define GPIO_ODR_ODR_6                   GPIO_ODR_OD6
#define GPIO_ODR_ODR_7                   GPIO_ODR_OD7
#define GPIO_ODR_ODR_8                   GPIO_ODR_OD8
#define GPIO_ODR_ODR_9                   GPIO_ODR_OD9
#define GPIO_ODR_ODR_10                  GPIO_ODR_OD10
#define GPIO_ODR_ODR_11                  GPIO_ODR_OD11
#define GPIO_ODR_ODR_12                  GPIO_ODR_OD12
#define GPIO_ODR_ODR_13                  GPIO_ODR_OD13
#define GPIO_ODR_ODR_14                  GPIO_ODR_OD14
#define GPIO_ODR_ODR_15                  GPIO_ODR_OD15

/******************  Bits definition for GPIO_BSRR register  ******************/
#define GPIO_BSRR_BS0_Pos                (0U)                                  
#define GPIO_BSRR_BS0_Msk                (0x1UL << GPIO_BSRR_BS0_Pos)           /*!< 0x00000001 */
#define GPIO_BSRR_BS0                    GPIO_BSRR_BS0_Msk                     
#define GPIO_BSRR_BS1_Pos                (1U)                                  
#define GPIO_BSRR_BS1_Msk                (0x1UL << GPIO_BSRR_BS1_Pos)           /*!< 0x00000002 */
#define GPIO_BSRR_BS1                    GPIO_BSRR_BS1_Msk                     
#define GPIO_BSRR_BS2_Pos                (2U)                                  
#define GPIO_BSRR_BS2_Msk                (0x1UL << GPIO_BSRR_BS2_Pos)           /*!< 0x00000004 */
#define GPIO_BSRR_BS2                    GPIO_BSRR_BS2_Msk                     
#define GPIO_BSRR_BS3_Pos                (3U)                                  
#define GPIO_BSRR_BS3_Msk                (0x1UL << GPIO_BSRR_BS3_Pos)           /*!< 0x00000008 */
#define GPIO_BSRR_BS3                    GPIO_BSRR_BS3_Msk                     
#define GPIO_BSRR_BS4_Pos                (4U)                                  
#define GPIO_BSRR_BS4_Msk                (0x1UL << GPIO_BSRR_BS4_Pos)           /*!< 0x00000010 */
#define GPIO_BSRR_BS4                    GPIO_BSRR_BS4_Msk                     
#define GPIO_BSRR_BS5_Pos                (5U)                                  
#define GPIO_BSRR_BS5_Msk                (0x1UL << GPIO_BSRR_BS5_Pos)           /*!< 0x00000020 */
#define GPIO_BSRR_BS5                    GPIO_BSRR_BS5_Msk                     
#define GPIO_BSRR_BS6_Pos                (6U)                                  
#define GPIO_BSRR_BS6_Msk                (0x1UL << GPIO_BSRR_BS6_Pos)           /*!< 0x00000040 */
#define GPIO_BSRR_BS6                    GPIO_BSRR_BS6_Msk                     
#define GPIO_BSRR_BS7_Pos                (7U)                                  
#define GPIO_BSRR_BS7_Msk                (0x1UL << GPIO_BSRR_BS7_Pos)           /*!< 0x00000080 */
#define GPIO_BSRR_BS7                    GPIO_BSRR_BS7_Msk                     
#define GPIO_BSRR_BS8_Pos                (8U)                                  
#define GPIO_BSRR_BS8_Msk                (0x1UL << GPIO_BSRR_BS8_Pos)           /*!< 0x00000100 */
#define GPIO_BSRR_BS8                    GPIO_BSRR_BS8_Msk                     
#define GPIO_BSRR_BS9_Pos                (9U)                                  
#define GPIO_BSRR_BS9_Msk                (0x1UL << GPIO_BSRR_BS9_Pos)           /*!< 0x00000200 */
#define GPIO_BSRR_BS9                    GPIO_BSRR_BS9_Msk                     
#define GPIO_BSRR_BS10_Pos               (10U)                                 
#define GPIO_BSRR_BS10_Msk               (0x1UL << GPIO_BSRR_BS10_Pos)          /*!< 0x00000400 */
#define GPIO_BSRR_BS10                   GPIO_BSRR_BS10_Msk                    
#define GPIO_BSRR_BS11_Pos               (11U)                                 
#define GPIO_BSRR_BS11_Msk               (0x1UL << GPIO_BSRR_BS11_Pos)          /*!< 0x00000800 */
#define GPIO_BSRR_BS11                   GPIO_BSRR_BS11_Msk                    
#define GPIO_BSRR_BS12_Pos               (12U)                                 
#define GPIO_BSRR_BS12_Msk               (0x1UL << GPIO_BSRR_BS12_Pos)          /*!< 0x00001000 */
#define GPIO_BSRR_BS12                   GPIO_BSRR_BS12_Msk                    
#define GPIO_BSRR_BS13_Pos               (13U)                                 
#define GPIO_BSRR_BS13_Msk               (0x1UL << GPIO_BSRR_BS13_Pos)          /*!< 0x00002000 */
#define GPIO_BSRR_BS13                   GPIO_BSRR_BS13_Msk                    
#define GPIO_BSRR_BS14_Pos               (14U)                                 
#define GPIO_BSRR_BS14_Msk               (0x1UL << GPIO_BSRR_BS14_Pos)          /*!< 0x00004000 */
#define GPIO_BSRR_BS14                   GPIO_BSRR_BS14_Msk                    
#define GPIO_BSRR_BS15_Pos               (15U)                                 
#define GPIO_BSRR_BS15_Msk               (0x1UL << GPIO_BSRR_BS15_Pos)          /*!< 0x00008000 */
#define GPIO_BSRR_BS15                   GPIO_BSRR_BS15_Msk                    
#define GPIO_BSRR_BR0_Pos                (16U)                                 
#define GPIO_BSRR_BR0_Msk                (0x1UL << GPIO_BSRR_BR0_Pos)           /*!< 0x00010000 */
#define GPIO_BSRR_BR0                    GPIO_BSRR_BR0_Msk                     
#define GPIO_BSRR_BR1_Pos                (17U)                                 
#define GPIO_BSRR_BR1_Msk                (0x1UL << GPIO_BSRR_BR1_Pos)           /*!< 0x00020000 */
#define GPIO_BSRR_BR1                    GPIO_BSRR_BR1_Msk                     
#define GPIO_BSRR_BR2_Pos                (18U)                                 
#define GPIO_BSRR_BR2_Msk                (0x1UL << GPIO_BSRR_BR2_Pos)           /*!< 0x00040000 */
#define GPIO_BSRR_BR2                    GPIO_BSRR_BR2_Msk                     
#define GPIO_BSRR_BR3_Pos                (19U)                                 
#define GPIO_BSRR_BR3_Msk                (0x1UL << GPIO_BSRR_BR3_Pos)           /*!< 0x00080000 */
#define GPIO_BSRR_BR3                    GPIO_BSRR_BR3_Msk                     
#define GPIO_BSRR_BR4_Pos                (20U)                                 
#define GPIO_BSRR_BR4_Msk                (0x1UL << GPIO_BSRR_BR4_Pos)           /*!< 0x00100000 */
#define GPIO_BSRR_BR4                    GPIO_BSRR_BR4_Msk                     
#define GPIO_BSRR_BR5_Pos                (21U)                                 
#define GPIO_BSRR_BR5_Msk                (0x1UL << GPIO_BSRR_BR5_Pos)           /*!< 0x00200000 */
#define GPIO_BSRR_BR5                    GPIO_BSRR_BR5_Msk                     
#define GPIO_BSRR_BR6_Pos                (22U)                                 
#define GPIO_BSRR_BR6_Msk                (0x1UL << GPIO_BSRR_BR6_Pos)           /*!< 0x00400000 */
#define GPIO_BSRR_BR6                    GPIO_BSRR_BR6_Msk                     
#define GPIO_BSRR_BR7_Pos                (23U)                                 
#define GPIO_BSRR_BR7_Msk                (0x1UL << GPIO_BSRR_BR7_Pos)           /*!< 0x00800000 */
#define GPIO_BSRR_BR7                    GPIO_BSRR_BR7_Msk                     
#define GPIO_BSRR_BR8_Pos                (24U)                                 
#define GPIO_BSRR_BR8_Msk                (0x1UL << GPIO_BSRR_BR8_Pos)           /*!< 0x01000000 */
#define GPIO_BSRR_BR8                    GPIO_BSRR_BR8_Msk                     
#define GPIO_BSRR_BR9_Pos                (25U)                                 
#define GPIO_BSRR_BR9_Msk                (0x1UL << GPIO_BSRR_BR9_Pos)           /*!< 0x02000000 */
#define GPIO_BSRR_BR9                    GPIO_BSRR_BR9_Msk                     
#define GPIO_BSRR_BR10_Pos               (26U)                                 
#define GPIO_BSRR_BR10_Msk               (0x1UL << GPIO_BSRR_BR10_Pos)          /*!< 0x04000000 */
#define GPIO_BSRR_BR10                   GPIO_BSRR_BR10_Msk                    
#define GPIO_BSRR_BR11_Pos               (27U)                                 
#define GPIO_BSRR_BR11_Msk               (0x1UL << GPIO_BSRR_BR11_Pos)          /*!< 0x08000000 */
#define GPIO_BSRR_BR11                   GPIO_BSRR_BR11_Msk                    
#define GPIO_BSRR_BR12_Pos               (28U)                                 
#define GPIO_BSRR_BR12_Msk               (0x1UL << GPIO_BSRR_BR12_Pos)          /*!< 0x10000000 */
#define GPIO_BSRR_BR12                   GPIO_BSRR_BR12_Msk                    
#define GPIO_BSRR_BR13_Pos               (29U)                                 
#define GPIO_BSRR_BR13_Msk               (0x1UL << GPIO_BSRR_BR13_Pos)          /*!< 0x20000000 */
#define GPIO_BSRR_BR13                   GPIO_BSRR_BR13_Msk                    
#define GPIO_BSRR_BR14_Pos               (30U)                                 
#define GPIO_BSRR_BR14_Msk               (0x1UL << GPIO_BSRR_BR14_Pos)          /*!< 0x40000000 */
#define GPIO_BSRR_BR14                   GPIO_BSRR_BR14_Msk                    
#define GPIO_BSRR_BR15_Pos               (31U)                                 
#define GPIO_BSRR_BR15_Msk               (0x1UL << GPIO_BSRR_BR15_Pos)          /*!< 0x80000000 */
#define GPIO_BSRR_BR15                   GPIO_BSRR_BR15_Msk                    

/* Legacy defines */
#define GPIO_BSRR_BS_0                   GPIO_BSRR_BS0
#define GPIO_BSRR_BS_1                   GPIO_BSRR_BS1
#define GPIO_BSRR_BS_2                   GPIO_BSRR_BS2
#define GPIO_BSRR_BS_3                   GPIO_BSRR_BS3
#define GPIO_BSRR_BS_4                   GPIO_BSRR_BS4
#define GPIO_BSRR_BS_5                   GPIO_BSRR_BS5
#define GPIO_BSRR_BS_6                   GPIO_BSRR_BS6
#define GPIO_BSRR_BS_7                   GPIO_BSRR_BS7
#define GPIO_BSRR_BS_8                   GPIO_BSRR_BS8
#define GPIO_BSRR_BS_9                   GPIO_BSRR_BS9
#define GPIO_BSRR_BS_10                  GPIO_BSRR_BS10
#define GPIO_BSRR_BS_11                  GPIO_BSRR_BS11
#define GPIO_BSRR_BS_12                  GPIO_BSRR_BS12
#define GPIO_BSRR_BS_13                  GPIO_BSRR_BS13
#define GPIO_BSRR_BS_14                  GPIO_BSRR_BS14
#define GPIO_BSRR_BS_15                  GPIO_BSRR_BS15
#define GPIO_BSRR_BR_0                   GPIO_BSRR_BR0
#define GPIO_BSRR_BR_1                   GPIO_BSRR_BR1
#define GPIO_BSRR_BR_2                   GPIO_BSRR_BR2
#define GPIO_BSRR_BR_3                   GPIO_BSRR_BR3
#define GPIO_BSRR_BR_4                   GPIO_BSRR_BR4
#define GPIO_BSRR_BR_5                   GPIO_BSRR_BR5
#define GPIO_BSRR_BR_6                   GPIO_BSRR_BR6
#define GPIO_BSRR_BR_7                   GPIO_BSRR_BR7
#define GPIO_BSRR_BR_8                   GPIO_BSRR_BR8
#define GPIO_BSRR_BR_9                   GPIO_BSRR_BR9
#define GPIO_BSRR_BR_10                  GPIO_BSRR_BR10
#define GPIO_BSRR_BR_11                  GPIO_BSRR_BR11
#define GPIO_BSRR_BR_12                  GPIO_BSRR_BR12
#define GPIO_BSRR_BR_13                  GPIO_BSRR_BR13
#define GPIO_BSRR_BR_14                  GPIO_BSRR_BR14
#define GPIO_BSRR_BR_15                  GPIO_BSRR_BR15
#define GPIO_BRR_BR0                     GPIO_BSRR_BR0
#define GPIO_BRR_BR0_Pos                 GPIO_BSRR_BR0_Pos
#define GPIO_BRR_BR0_Msk                 GPIO_BSRR_BR0_Msk
#define GPIO_BRR_BR1                     GPIO_BSRR_BR1
#define GPIO_BRR_BR1_Pos                 GPIO_BSRR_BR1_Pos
#define GPIO_BRR_BR1_Msk                 GPIO_BSRR_BR1_Msk
#define GPIO_BRR_BR2                     GPIO_BSRR_BR2
#define GPIO_BRR_BR2_Pos                 GPIO_BSRR_BR2_Pos
#define GPIO_BRR_BR2_Msk                 GPIO_BSRR_BR2_Msk
#define GPIO_BRR_BR3                     GPIO_BSRR_BR3
#define GPIO_BRR_BR3_Pos                 GPIO_BSRR_BR3_Pos
#define GPIO_BRR_BR3_Msk                 GPIO_BSRR_BR3_Msk
#define GPIO_BRR_BR4                     GPIO_BSRR_BR4
#define GPIO_BRR_BR4_Pos                 GPIO_BSRR_BR4_Pos
#define GPIO_BRR_BR4_Msk                 GPIO_BSRR_BR4_Msk
#define GPIO_BRR_BR5                     GPIO_BSRR_BR5
#define GPIO_BRR_BR5_Pos                 GPIO_BSRR_BR5_Pos
#define GPIO_BRR_BR5_Msk                 GPIO_BSRR_BR5_Msk
#define GPIO_BRR_BR6                     GPIO_BSRR_BR6
#define GPIO_BRR_BR6_Pos                 GPIO_BSRR_BR6_Pos
#define GPIO_BRR_BR6_Msk                 GPIO_BSRR_BR6_Msk
#define GPIO_BRR_BR7                     GPIO_BSRR_BR7
#define GPIO_BRR_BR7_Pos                 GPIO_BSRR_BR7_Pos
#define GPIO_BRR_BR7_Msk                 GPIO_BSRR_BR7_Msk
#define GPIO_BRR_BR8                     GPIO_BSRR_BR8
#define GPIO_BRR_BR8_Pos                 GPIO_BSRR_BR8_Pos
#define GPIO_BRR_BR8_Msk                 GPIO_BSRR_BR8_Msk
#define GPIO_BRR_BR9                     GPIO_BSRR_BR9
#define GPIO_BRR_BR9_Pos                 GPIO_BSRR_BR9_Pos
#define GPIO_BRR_BR9_Msk                 GPIO_BSRR_BR9_Msk
#define GPIO_BRR_BR10                    GPIO_BSRR_BR10
#define GPIO_BRR_BR10_Pos                GPIO_BSRR_BR10_Pos
#define GPIO_BRR_BR10_Msk                GPIO_BSRR_BR10_Msk
#define GPIO_BRR_BR11                    GPIO_BSRR_BR11
#define GPIO_BRR_BR11_Pos                GPIO_BSRR_BR11_Pos
#define GPIO_BRR_BR11_Msk                GPIO_BSRR_BR11_Msk
#define GPIO_BRR_BR12                    GPIO_BSRR_BR12
#define GPIO_BRR_BR12_Pos                GPIO_BSRR_BR12_Pos
#define GPIO_BRR_BR12_Msk                GPIO_BSRR_BR12_Msk
#define GPIO_BRR_BR13                    GPIO_BSRR_BR13
#define GPIO_BRR_BR13_Pos                GPIO_BSRR_BR13_Pos
#define GPIO_BRR_BR13_Msk                GPIO_BSRR_BR13_Msk
#define GPIO_BRR_BR14                    GPIO_BSRR_BR14
#define GPIO_BRR_BR14_Pos                GPIO_BSRR_BR14_Pos
#define GPIO_BRR_BR14_Msk                GPIO_BSRR_BR14_Msk
#define GPIO_BRR_BR15                    GPIO_BSRR_BR15
#define GPIO_BRR_BR15_Pos                GPIO_BSRR_BR15_Pos
#define GPIO_BRR_BR15_Msk                GPIO_BSRR_BR15_Msk 
/****************** Bit definition for GPIO_LCKR register *********************/
#define GPIO_LCKR_LCK0_Pos               (0U)                                  
#define GPIO_LCKR_LCK0_Msk               (0x1UL << GPIO_LCKR_LCK0_Pos)          /*!< 0x00000001 */
#define GPIO_LCKR_LCK0                   GPIO_LCKR_LCK0_Msk                    
#define GPIO_LCKR_LCK1_Pos               (1U)                                  
#define GPIO_LCKR_LCK1_Msk               (0x1UL << GPIO_LCKR_LCK1_Pos)          /*!< 0x00000002 */
#define GPIO_LCKR_LCK1                   GPIO_LCKR_LCK1_Msk                    
#define GPIO_LCKR_LCK2_Pos               (2U)                                  
#define GPIO_LCKR_LCK2_Msk               (0x1UL << GPIO_LCKR_LCK2_Pos)          /*!< 0x00000004 */
#define GPIO_LCKR_LCK2                   GPIO_LCKR_LCK2_Msk                    
#define GPIO_LCKR_LCK3_Pos               (3U)                                  
#define GPIO_LCKR_LCK3_Msk               (0x1UL << GPIO_LCKR_LCK3_Pos)          /*!< 0x00000008 */
#define GPIO_LCKR_LCK3                   GPIO_LCKR_LCK3_Msk                    
#define GPIO_LCKR_LCK4_Pos               (4U)                                  
#define GPIO_LCKR_LCK4_Msk               (0x1UL << GPIO_LCKR_LCK4_Pos)          /*!< 0x00000010 */
#define GPIO_LCKR_LCK4                   GPIO_LCKR_LCK4_Msk                    
#define GPIO_LCKR_LCK5_Pos               (5U)                                  
#define GPIO_LCKR_LCK5_Msk               (0x1UL << GPIO_LCKR_LCK5_Pos)          /*!< 0x00000020 */
#define GPIO_LCKR_LCK5                   GPIO_LCKR_LCK5_Msk                    
#define GPIO_LCKR_LCK6_Pos               (6U)                                  
#define GPIO_LCKR_LCK6_Msk               (0x1UL << GPIO_LCKR_LCK6_Pos)          /*!< 0x00000040 */
#define GPIO_LCKR_LCK6                   GPIO_LCKR_LCK6_Msk                    
#define GPIO_LCKR_LCK7_Pos               (7U)                                  
#define GPIO_LCKR_LCK7_Msk               (0x1UL << GPIO_LCKR_LCK7_Pos)          /*!< 0x00000080 */
#define GPIO_LCKR_LCK7                   GPIO_LCKR_LCK7_Msk                    
#define GPIO_LCKR_LCK8_Pos               (8U)                                  
#define GPIO_LCKR_LCK8_Msk               (0x1UL << GPIO_LCKR_LCK8_Pos)          /*!< 0x00000100 */
#define GPIO_LCKR_LCK8                   GPIO_LCKR_LCK8_Msk                    
#define GPIO_LCKR_LCK9_Pos               (9U)                                  
#define GPIO_LCKR_LCK9_Msk               (0x1UL << GPIO_LCKR_LCK9_Pos)          /*!< 0x00000200 */
#define GPIO_LCKR_LCK9                   GPIO_LCKR_LCK9_Msk                    
#define GPIO_LCKR_LCK10_Pos              (10U)                                 
#define GPIO_LCKR_LCK10_Msk              (0x1UL << GPIO_LCKR_LCK10_Pos)         /*!< 0x00000400 */
#define GPIO_LCKR_LCK10                  GPIO_LCKR_LCK10_Msk                   
#define GPIO_LCKR_LCK11_Pos              (11U)                                 
#define GPIO_LCKR_LCK11_Msk              (0x1UL << GPIO_LCKR_LCK11_Pos)         /*!< 0x00000800 */
#define GPIO_LCKR_LCK11                  GPIO_LCKR_LCK11_Msk                   
#define GPIO_LCKR_LCK12_Pos              (12U)                                 
#define GPIO_LCKR_LCK12_Msk              (0x1UL << GPIO_LCKR_LCK12_Pos)         /*!< 0x00001000 */
#define GPIO_LCKR_LCK12                  GPIO_LCKR_LCK12_Msk                   
#define GPIO_LCKR_LCK13_Pos              (13U)                                 
#define GPIO_LCKR_LCK13_Msk              (0x1UL << GPIO_LCKR_LCK13_Pos)         /*!< 0x00002000 */
#define GPIO_LCKR_LCK13                  GPIO_LCKR_LCK13_Msk                   
#define GPIO_LCKR_LCK14_Pos              (14U)                                 
#define GPIO_LCKR_LCK14_Msk              (0x1UL << GPIO_LCKR_LCK14_Pos)         /*!< 0x00004000 */
#define GPIO_LCKR_LCK14                  GPIO_LCKR_LCK14_Msk                   
#define GPIO_LCKR_LCK15_Pos              (15U)                                 
#define GPIO_LCKR_LCK15_Msk              (0x1UL << GPIO_LCKR_LCK15_Pos)         /*!< 0x00008000 */
#define GPIO_LCKR_LCK15                  GPIO_LCKR_LCK15_Msk                   
#define GPIO_LCKR_LCKK_Pos               (16U)                                 
#define GPIO_LCKR_LCKK_Msk               (0x1UL << GPIO_LCKR_LCKK_Pos)          /*!< 0x00010000 */
#define GPIO_LCKR_LCKK                   GPIO_LCKR_LCKK_Msk                    
/****************** Bit definition for GPIO_AFRL register *********************/
#define GPIO_AFRL_AFSEL0_Pos             (0U)                                  
#define GPIO_AFRL_AFSEL0_Msk             (0xFUL << GPIO_AFRL_AFSEL0_Pos)        /*!< 0x0000000F */
#define GPIO_AFRL_AFSEL0                 GPIO_AFRL_AFSEL0_Msk                  
#define GPIO_AFRL_AFSEL0_0               (0x1UL << GPIO_AFRL_AFSEL0_Pos)        /*!< 0x00000001 */
#define GPIO_AFRL_AFSEL0_1               (0x2UL << GPIO_AFRL_AFSEL0_Pos)        /*!< 0x00000002 */
#define GPIO_AFRL_AFSEL0_2               (0x4UL << GPIO_AFRL_AFSEL0_Pos)        /*!< 0x00000004 */
#define GPIO_AFRL_AFSEL0_3               (0x8UL << GPIO_AFRL_AFSEL0_Pos)        /*!< 0x00000008 */
#define GPIO_AFRL_AFSEL1_Pos             (4U)                                  
#define GPIO_AFRL_AFSEL1_Msk             (0xFUL << GPIO_AFRL_AFSEL1_Pos)        /*!< 0x000000F0 */
#define GPIO_AFRL_AFSEL1                 GPIO_AFRL_AFSEL1_Msk                  
#define GPIO_AFRL_AFSEL1_0               (0x1UL << GPIO_AFRL_AFSEL1_Pos)        /*!< 0x00000010 */
#define GPIO_AFRL_AFSEL1_1               (0x2UL << GPIO_AFRL_AFSEL1_Pos)        /*!< 0x00000020 */
#define GPIO_AFRL_AFSEL1_2               (0x4UL << GPIO_AFRL_AFSEL1_Pos)        /*!< 0x00000040 */
#define GPIO_AFRL_AFSEL1_3               (0x8UL << GPIO_AFRL_AFSEL1_Pos)        /*!< 0x00000080 */
#define GPIO_AFRL_AFSEL2_Pos             (8U)                                  
#define GPIO_AFRL_AFSEL2_Msk             (0xFUL << GPIO_AFRL_AFSEL2_Pos)        /*!< 0x00000F00 */
#define GPIO_AFRL_AFSEL2                 GPIO_AFRL_AFSEL2_Msk                  
#define GPIO_AFRL_AFSEL2_0               (0x1UL << GPIO_AFRL_AFSEL2_Pos)        /*!< 0x00000100 */
#define GPIO_AFRL_AFSEL2_1               (0x2UL << GPIO_AFRL_AFSEL2_Pos)        /*!< 0x00000200 */
#define GPIO_AFRL_AFSEL2_2               (0x4UL << GPIO_AFRL_AFSEL2_Pos)        /*!< 0x00000400 */
#define GPIO_AFRL_AFSEL2_3               (0x8UL << GPIO_AFRL_AFSEL2_Pos)        /*!< 0x00000800 */
#define GPIO_AFRL_AFSEL3_Pos             (12U)                                 
#define GPIO_AFRL_AFSEL3_Msk             (0xFUL << GPIO_AFRL_AFSEL3_Pos)        /*!< 0x0000F000 */
#define GPIO_AFRL_AFSEL3                 GPIO_AFRL_AFSEL3_Msk                  
#define GPIO_AFRL_AFSEL3_0               (0x1UL << GPIO_AFRL_AFSEL3_Pos)        /*!< 0x00001000 */
#define GPIO_AFRL_AFSEL3_1               (0x2UL << GPIO_AFRL_AFSEL3_Pos)        /*!< 0x00002000 */
#define GPIO_AFRL_AFSEL3_2               (0x4UL << GPIO_AFRL_AFSEL3_Pos)        /*!< 0x00004000 */
#define GPIO_AFRL_AFSEL3_3               (0x8UL << GPIO_AFRL_AFSEL3_Pos)        /*!< 0x00008000 */
#define GPIO_AFRL_AFSEL4_Pos             (16U)                                 
#define GPIO_AFRL_AFSEL4_Msk             (0xFUL << GPIO_AFRL_AFSEL4_Pos)        /*!< 0x000F0000 */
#define GPIO_AFRL_AFSEL4                 GPIO_AFRL_AFSEL4_Msk                  
#define GPIO_AFRL_AFSEL4_0               (0x1UL << GPIO_AFRL_AFSEL4_Pos)        /*!< 0x00010000 */
#define GPIO_AFRL_AFSEL4_1               (0x2UL << GPIO_AFRL_AFSEL4_Pos)        /*!< 0x00020000 */
#define GPIO_AFRL_AFSEL4_2               (0x4UL << GPIO_AFRL_AFSEL4_Pos)        /*!< 0x00040000 */
#define GPIO_AFRL_AFSEL4_3               (0x8UL << GPIO_AFRL_AFSEL4_Pos)        /*!< 0x00080000 */
#define GPIO_AFRL_AFSEL5_Pos             (20U)                                 
#define GPIO_AFRL_AFSEL5_Msk             (0xFUL << GPIO_AFRL_AFSEL5_Pos)        /*!< 0x00F00000 */
#define GPIO_AFRL_AFSEL5                 GPIO_AFRL_AFSEL5_Msk                  
#define GPIO_AFRL_AFSEL5_0               (0x1UL << GPIO_AFRL_AFSEL5_Pos)        /*!< 0x00100000 */
#define GPIO_AFRL_AFSEL5_1               (0x2UL << GPIO_AFRL_AFSEL5_Pos)        /*!< 0x00200000 */
#define GPIO_AFRL_AFSEL5_2               (0x4UL << GPIO_AFRL_AFSEL5_Pos)        /*!< 0x00400000 */
#define GPIO_AFRL_AFSEL5_3               (0x8UL << GPIO_AFRL_AFSEL5_Pos)        /*!< 0x00800000 */
#define GPIO_AFRL_AFSEL6_Pos             (24U)                                 
#define GPIO_AFRL_AFSEL6_Msk             (0xFUL << GPIO_AFRL_AFSEL6_Pos)        /*!< 0x0F000000 */
#define GPIO_AFRL_AFSEL6                 GPIO_AFRL_AFSEL6_Msk                  
#define GPIO_AFRL_AFSEL6_0               (0x1UL << GPIO_AFRL_AFSEL6_Pos)        /*!< 0x01000000 */
#define GPIO_AFRL_AFSEL6_1               (0x2UL << GPIO_AFRL_AFSEL6_Pos)        /*!< 0x02000000 */
#define GPIO_AFRL_AFSEL6_2               (0x4UL << GPIO_AFRL_AFSEL6_Pos)        /*!< 0x04000000 */
#define GPIO_AFRL_AFSEL6_3               (0x8UL << GPIO_AFRL_AFSEL6_Pos)        /*!< 0x08000000 */
#define GPIO_AFRL_AFSEL7_Pos             (28U)                                 
#define GPIO_AFRL_AFSEL7_Msk             (0xFUL << GPIO_AFRL_AFSEL7_Pos)        /*!< 0xF0000000 */
#define GPIO_AFRL_AFSEL7                 GPIO_AFRL_AFSEL7_Msk                  
#define GPIO_AFRL_AFSEL7_0               (0x1UL << GPIO_AFRL_AFSEL7_Pos)        /*!< 0x10000000 */
#define GPIO_AFRL_AFSEL7_1               (0x2UL << GPIO_AFRL_AFSEL7_Pos)        /*!< 0x20000000 */
#define GPIO_AFRL_AFSEL7_2               (0x4UL << GPIO_AFRL_AFSEL7_Pos)        /*!< 0x40000000 */
#define GPIO_AFRL_AFSEL7_3               (0x8UL << GPIO_AFRL_AFSEL7_Pos)        /*!< 0x80000000 */

/* Legacy defines */
#define GPIO_AFRL_AFRL0                  GPIO_AFRL_AFSEL0
#define GPIO_AFRL_AFRL0_0                GPIO_AFRL_AFSEL0_0
#define GPIO_AFRL_AFRL0_1                GPIO_AFRL_AFSEL0_1
#define GPIO_AFRL_AFRL0_2                GPIO_AFRL_AFSEL0_2
#define GPIO_AFRL_AFRL0_3                GPIO_AFRL_AFSEL0_3
#define GPIO_AFRL_AFRL1                  GPIO_AFRL_AFSEL1
#define GPIO_AFRL_AFRL1_0                GPIO_AFRL_AFSEL1_0
#define GPIO_AFRL_AFRL1_1                GPIO_AFRL_AFSEL1_1
#define GPIO_AFRL_AFRL1_2                GPIO_AFRL_AFSEL1_2
#define GPIO_AFRL_AFRL1_3                GPIO_AFRL_AFSEL1_3
#define GPIO_AFRL_AFRL2                  GPIO_AFRL_AFSEL2
#define GPIO_AFRL_AFRL2_0                GPIO_AFRL_AFSEL2_0
#define GPIO_AFRL_AFRL2_1                GPIO_AFRL_AFSEL2_1
#define GPIO_AFRL_AFRL2_2                GPIO_AFRL_AFSEL2_2
#define GPIO_AFRL_AFRL2_3                GPIO_AFRL_AFSEL2_3
#define GPIO_AFRL_AFRL3                  GPIO_AFRL_AFSEL3
#define GPIO_AFRL_AFRL3_0                GPIO_AFRL_AFSEL3_0
#define GPIO_AFRL_AFRL3_1                GPIO_AFRL_AFSEL3_1
#define GPIO_AFRL_AFRL3_2                GPIO_AFRL_AFSEL3_2
#define GPIO_AFRL_AFRL3_3                GPIO_AFRL_AFSEL3_3
#define GPIO_AFRL_AFRL4                  GPIO_AFRL_AFSEL4
#define GPIO_AFRL_AFRL4_0                GPIO_AFRL_AFSEL4_0
#define GPIO_AFRL_AFRL4_1                GPIO_AFRL_AFSEL4_1
#define GPIO_AFRL_AFRL4_2                GPIO_AFRL_AFSEL4_2
#define GPIO_AFRL_AFRL4_3                GPIO_AFRL_AFSEL4_3
#define GPIO_AFRL_AFRL5                  GPIO_AFRL_AFSEL5
#define GPIO_AFRL_AFRL5_0                GPIO_AFRL_AFSEL5_0
#define GPIO_AFRL_AFRL5_1                GPIO_AFRL_AFSEL5_1
#define GPIO_AFRL_AFRL5_2                GPIO_AFRL_AFSEL5_2
#define GPIO_AFRL_AFRL5_3                GPIO_AFRL_AFSEL5_3
#define GPIO_AFRL_AFRL6                  GPIO_AFRL_AFSEL6
#define GPIO_AFRL_AFRL6_0                GPIO_AFRL_AFSEL6_0
#define GPIO_AFRL_AFRL6_1                GPIO_AFRL_AFSEL6_1
#define GPIO_AFRL_AFRL6_2                GPIO_AFRL_AFSEL6_2
#define GPIO_AFRL_AFRL6_3                GPIO_AFRL_AFSEL6_3
#define GPIO_AFRL_AFRL7                  GPIO_AFRL_AFSEL7
#define GPIO_AFRL_AFRL7_0                GPIO_AFRL_AFSEL7_0
#define GPIO_AFRL_AFRL7_1                GPIO_AFRL_AFSEL7_1
#define GPIO_AFRL_AFRL7_2                GPIO_AFRL_AFSEL7_2
#define GPIO_AFRL_AFRL7_3                GPIO_AFRL_AFSEL7_3

/****************** Bit definition for GPIO_AFRH register *********************/
#define GPIO_AFRH_AFSEL8_Pos             (0U)                                  
#define GPIO_AFRH_AFSEL8_Msk             (0xFUL << GPIO_AFRH_AFSEL8_Pos)        /*!< 0x0000000F */
#define GPIO_AFRH_AFSEL8                 GPIO_AFRH_AFSEL8_Msk                  
#define GPIO_AFRH_AFSEL8_0               (0x1UL << GPIO_AFRH_AFSEL8_Pos)        /*!< 0x00000001 */
#define GPIO_AFRH_AFSEL8_1               (0x2UL << GPIO_AFRH_AFSEL8_Pos)        /*!< 0x00000002 */
#define GPIO_AFRH_AFSEL8_2               (0x4UL << GPIO_AFRH_AFSEL8_Pos)        /*!< 0x00000004 */
#define GPIO_AFRH_AFSEL8_3               (0x8UL << GPIO_AFRH_AFSEL8_Pos)        /*!< 0x00000008 */
#define GPIO_AFRH_AFSEL9_Pos             (4U)                                  
#define GPIO_AFRH_AFSEL9_Msk             (0xFUL << GPIO_AFRH_AFSEL9_Pos)        /*!< 0x000000F0 */
#define GPIO_AFRH_AFSEL9                 GPIO_AFRH_AFSEL9_Msk                  
#define GPIO_AFRH_AFSEL9_0               (0x1UL << GPIO_AFRH_AFSEL9_Pos)        /*!< 0x00000010 */
#define GPIO_AFRH_AFSEL9_1               (0x2UL << GPIO_AFRH_AFSEL9_Pos)        /*!< 0x00000020 */
#define GPIO_AFRH_AFSEL9_2               (0x4UL << GPIO_AFRH_AFSEL9_Pos)        /*!< 0x00000040 */
#define GPIO_AFRH_AFSEL9_3               (0x8UL << GPIO_AFRH_AFSEL9_Pos)        /*!< 0x00000080 */
#define GPIO_AFRH_AFSEL10_Pos            (8U)                                  
#define GPIO_AFRH_AFSEL10_Msk            (0xFUL << GPIO_AFRH_AFSEL10_Pos)       /*!< 0x00000F00 */
#define GPIO_AFRH_AFSEL10                GPIO_AFRH_AFSEL10_Msk                 
#define GPIO_AFRH_AFSEL10_0              (0x1UL << GPIO_AFRH_AFSEL10_Pos)       /*!< 0x00000100 */
#define GPIO_AFRH_AFSEL10_1              (0x2UL << GPIO_AFRH_AFSEL10_Pos)       /*!< 0x00000200 */
#define GPIO_AFRH_AFSEL10_2              (0x4UL << GPIO_AFRH_AFSEL10_Pos)       /*!< 0x00000400 */
#define GPIO_AFRH_AFSEL10_3              (0x8UL << GPIO_AFRH_AFSEL10_Pos)       /*!< 0x00000800 */
#define GPIO_AFRH_AFSEL11_Pos            (12U)                                 
#define GPIO_AFRH_AFSEL11_Msk            (0xFUL << GPIO_AFRH_AFSEL11_Pos)       /*!< 0x0000F000 */
#define GPIO_AFRH_AFSEL11                GPIO_AFRH_AFSEL11_Msk                 
#define GPIO_AFRH_AFSEL11_0              (0x1UL << GPIO_AFRH_AFSEL11_Pos)       /*!< 0x00001000 */
#define GPIO_AFRH_AFSEL11_1              (0x2UL << GPIO_AFRH_AFSEL11_Pos)       /*!< 0x00002000 */
#define GPIO_AFRH_AFSEL11_2              (0x4UL << GPIO_AFRH_AFSEL11_Pos)       /*!< 0x00004000 */
#define GPIO_AFRH_AFSEL11_3              (0x8UL << GPIO_AFRH_AFSEL11_Pos)       /*!< 0x00008000 */
#define GPIO_AFRH_AFSEL12_Pos            (16U)                                 
#define GPIO_AFRH_AFSEL12_Msk            (0xFUL << GPIO_AFRH_AFSEL12_Pos)       /*!< 0x000F0000 */
#define GPIO_AFRH_AFSEL12                GPIO_AFRH_AFSEL12_Msk                 
#define GPIO_AFRH_AFSEL12_0              (0x1UL << GPIO_AFRH_AFSEL12_Pos)       /*!< 0x00010000 */
#define GPIO_AFRH_AFSEL12_1              (0x2UL << GPIO_AFRH_AFSEL12_Pos)       /*!< 0x00020000 */
#define GPIO_AFRH_AFSEL12_2              (0x4UL << GPIO_AFRH_AFSEL12_Pos)       /*!< 0x00040000 */
#define GPIO_AFRH_AFSEL12_3              (0x8UL << GPIO_AFRH_AFSEL12_Pos)       /*!< 0x00080000 */
#define GPIO_AFRH_AFSEL13_Pos            (20U)                                 
#define GPIO_AFRH_AFSEL13_Msk            (0xFUL << GPIO_AFRH_AFSEL13_Pos)       /*!< 0x00F00000 */
#define GPIO_AFRH_AFSEL13                GPIO_AFRH_AFSEL13_Msk                 
#define GPIO_AFRH_AFSEL13_0              (0x1UL << GPIO_AFRH_AFSEL13_Pos)       /*!< 0x00100000 */
#define GPIO_AFRH_AFSEL13_1              (0x2UL << GPIO_AFRH_AFSEL13_Pos)       /*!< 0x00200000 */
#define GPIO_AFRH_AFSEL13_2              (0x4UL << GPIO_AFRH_AFSEL13_Pos)       /*!< 0x00400000 */
#define GPIO_AFRH_AFSEL13_3              (0x8UL << GPIO_AFRH_AFSEL13_Pos)       /*!< 0x00800000 */
#define GPIO_AFRH_AFSEL14_Pos            (24U)                                 
#define GPIO_AFRH_AFSEL14_Msk            (0xFUL << GPIO_AFRH_AFSEL14_Pos)       /*!< 0x0F000000 */
#define GPIO_AFRH_AFSEL14                GPIO_AFRH_AFSEL14_Msk                 
#define GPIO_AFRH_AFSEL14_0              (0x1UL << GPIO_AFRH_AFSEL14_Pos)       /*!< 0x01000000 */
#define GPIO_AFRH_AFSEL14_1              (0x2UL << GPIO_AFRH_AFSEL14_Pos)       /*!< 0x02000000 */
#define GPIO_AFRH_AFSEL14_2              (0x4UL << GPIO_AFRH_AFSEL14_Pos)       /*!< 0x04000000 */
#define GPIO_AFRH_AFSEL14_3              (0x8UL << GPIO_AFRH_AFSEL14_Pos)       /*!< 0x08000000 */
#define GPIO_AFRH_AFSEL15_Pos            (28U)                                 
#define GPIO_AFRH_AFSEL15_Msk            (0xFUL << GPIO_AFRH_AFSEL15_Pos)       /*!< 0xF0000000 */
#define GPIO_AFRH_AFSEL15                GPIO_AFRH_AFSEL15_Msk                 
#define GPIO_AFRH_AFSEL15_0              (0x1UL << GPIO_AFRH_AFSEL15_Pos)       /*!< 0x10000000 */
#define GPIO_AFRH_AFSEL15_1              (0x2UL << GPIO_AFRH_AFSEL15_Pos)       /*!< 0x20000000 */
#define GPIO_AFRH_AFSEL15_2              (0x4UL << GPIO_AFRH_AFSEL15_Pos)       /*!< 0x40000000 */
#define GPIO_AFRH_AFSEL15_3              (0x8UL << GPIO_AFRH_AFSEL15_Pos)       /*!< 0x80000000 */

/* Legacy defines */
#define GPIO_AFRH_AFRH0                  GPIO_AFRH_AFSEL8
#define GPIO_AFRH_AFRH0_0                GPIO_AFRH_AFSEL8_0
#define GPIO_AFRH_AFRH0_1                GPIO_AFRH_AFSEL8_1
#define GPIO_AFRH_AFRH0_2                GPIO_AFRH_AFSEL8_2
#define GPIO_AFRH_AFRH0_3                GPIO_AFRH_AFSEL8_3
#define GPIO_AFRH_AFRH1                  GPIO_AFRH_AFSEL9
#define GPIO_AFRH_AFRH1_0                GPIO_AFRH_AFSEL9_0
#define GPIO_AFRH_AFRH1_1                GPIO_AFRH_AFSEL9_1
#define GPIO_AFRH_AFRH1_2                GPIO_AFRH_AFSEL9_2
#define GPIO_AFRH_AFRH1_3                GPIO_AFRH_AFSEL9_3
#define GPIO_AFRH_AFRH2                  GPIO_AFRH_AFSEL10
#define GPIO_AFRH_AFRH2_0                GPIO_AFRH_AFSEL10_0
#define GPIO_AFRH_AFRH2_1                GPIO_AFRH_AFSEL10_1
#define GPIO_AFRH_AFRH2_2                GPIO_AFRH_AFSEL10_2
#define GPIO_AFRH_AFRH2_3                GPIO_AFRH_AFSEL10_3
#define GPIO_AFRH_AFRH3                  GPIO_AFRH_AFSEL11
#define GPIO_AFRH_AFRH3_0                GPIO_AFRH_AFSEL11_0
#define GPIO_AFRH_AFRH3_1                GPIO_AFRH_AFSEL11_1
#define GPIO_AFRH_AFRH3_2                GPIO_AFRH_AFSEL11_2
#define GPIO_AFRH_AFRH3_3                GPIO_AFRH_AFSEL11_3
#define GPIO_AFRH_AFRH4                  GPIO_AFRH_AFSEL12
#define GPIO_AFRH_AFRH4_0                GPIO_AFRH_AFSEL12_0
#define GPIO_AFRH_AFRH4_1                GPIO_AFRH_AFSEL12_1
#define GPIO_AFRH_AFRH4_2                GPIO_AFRH_AFSEL12_2
#define GPIO_AFRH_AFRH4_3                GPIO_AFRH_AFSEL12_3
#define GPIO_AFRH_AFRH5                  GPIO_AFRH_AFSEL13
#define GPIO_AFRH_AFRH5_0                GPIO_AFRH_AFSEL13_0
#define GPIO_AFRH_AFRH5_1                GPIO_AFRH_AFSEL13_1
#define GPIO_AFRH_AFRH5_2                GPIO_AFRH_AFSEL13_2
#define GPIO_AFRH_AFRH5_3                GPIO_AFRH_AFSEL13_3
#define GPIO_AFRH_AFRH6                  GPIO_AFRH_AFSEL14
#define GPIO_AFRH_AFRH6_0                GPIO_AFRH_AFSEL14_0
#define GPIO_AFRH_AFRH6_1                GPIO_AFRH_AFSEL14_1
#define GPIO_AFRH_AFRH6_2                GPIO_AFRH_AFSEL14_2
#define GPIO_AFRH_AFRH6_3                GPIO_AFRH_AFSEL14_3
#define GPIO_AFRH_AFRH7                  GPIO_AFRH_AFSEL15
#define GPIO_AFRH_AFRH7_0                GPIO_AFRH_AFSEL15_0
#define GPIO_AFRH_AFRH7_1                GPIO_AFRH_AFSEL15_1
#define GPIO_AFRH_AFRH7_2                GPIO_AFRH_AFSEL15_2
#define GPIO_AFRH_AFRH7_3                GPIO_AFRH_AFSEL15_3



typedef struct
{
   uint32_t CR;            /*!< RCC clock control register,                                  Address offset: 0x00 */
   uint32_t PLLCFGR;       /*!< RCC PLL configuration register,                              Address offset: 0x04 */
   uint32_t CFGR;          /*!< RCC clock configuration register,                            Address offset: 0x08 */
   uint32_t CIR;           /*!< RCC clock interrupt register,                                Address offset: 0x0C */
   uint32_t AHB1RSTR;      /*!< RCC AHB1 peripheral reset register,                          Address offset: 0x10 */
   uint32_t AHB2RSTR;      /*!< RCC AHB2 peripheral reset register,                          Address offset: 0x14 */
   uint32_t AHB3RSTR;      /*!< RCC AHB3 peripheral reset register,                          Address offset: 0x18 */
  uint32_t      RESERVED0;     /*!< Reserved, 0x1C                                                                    */
   uint32_t APB1RSTR;      /*!< RCC APB1 peripheral reset register,                          Address offset: 0x20 */
   uint32_t APB2RSTR;      /*!< RCC APB2 peripheral reset register,                          Address offset: 0x24 */
  uint32_t      RESERVED1[2];  /*!< Reserved, 0x28-0x2C                                                               */
   uint32_t AHB1ENR;       /*!< RCC AHB1 peripheral clock register,                          Address offset: 0x30 */
   uint32_t AHB2ENR;       /*!< RCC AHB2 peripheral clock register,                          Address offset: 0x34 */
   uint32_t AHB3ENR;       /*!< RCC AHB3 peripheral clock register,                          Address offset: 0x38 */
  uint32_t      RESERVED2;     /*!< Reserved, 0x3C                                                                    */
   uint32_t APB1ENR;       /*!< RCC APB1 peripheral clock enable register,                   Address offset: 0x40 */
   uint32_t APB2ENR;       /*!< RCC APB2 peripheral clock enable register,                   Address offset: 0x44 */
  uint32_t      RESERVED3[2];  /*!< Reserved, 0x48-0x4C                                                               */
   uint32_t AHB1LPENR;     /*!< RCC AHB1 peripheral clock enable in low power mode register, Address offset: 0x50 */
   uint32_t AHB2LPENR;     /*!< RCC AHB2 peripheral clock enable in low power mode register, Address offset: 0x54 */
   uint32_t AHB3LPENR;     /*!< RCC AHB3 peripheral clock enable in low power mode register, Address offset: 0x58 */
  uint32_t      RESERVED4;     /*!< Reserved, 0x5C                                                                    */
   uint32_t APB1LPENR;     /*!< RCC APB1 peripheral clock enable in low power mode register, Address offset: 0x60 */
   uint32_t APB2LPENR;     /*!< RCC APB2 peripheral clock enable in low power mode register, Address offset: 0x64 */
  uint32_t      RESERVED5[2];  /*!< Reserved, 0x68-0x6C                                                               */
   uint32_t BDCR;          /*!< RCC Backup domain control register,                          Address offset: 0x70 */
   uint32_t CSR;           /*!< RCC clock control & status register,                         Address offset: 0x74 */
  uint32_t      RESERVED6[2];  /*!< Reserved, 0x78-0x7C                                                               */
   uint32_t SSCGR;         /*!< RCC spread spectrum clock generation register,               Address offset: 0x80 */
   uint32_t PLLI2SCFGR;    /*!< RCC PLLI2S configuration register,                           Address offset: 0x84 */
   uint32_t PLLSAICFGR;    /*!< RCC PLLSAI configuration register,                           Address offset: 0x88 */
   uint32_t DCKCFGR;       /*!< RCC Dedicated Clocks configuration register,                 Address offset: 0x8C */
   uint32_t CKGATENR;      /*!< RCC Clocks Gated ENable Register,                            Address offset: 0x90 */
   uint32_t DCKCFGR2;      /*!< RCC Dedicated Clocks configuration register 2,               Address offset: 0x94 */
} RCC_TypeDef;

extern volatile RCC_TypeDef* RCC;



/********************  Bit definition for RCC_AHB1ENR register  ***************/
#define RCC_AHB1ENR_GPIOAEN_Pos            (0U)                                
#define RCC_AHB1ENR_GPIOAEN_Msk            (0x1UL << RCC_AHB1ENR_GPIOAEN_Pos)   /*!< 0x00000001 */
#define RCC_AHB1ENR_GPIOAEN                RCC_AHB1ENR_GPIOAEN_Msk             
#define RCC_AHB1ENR_GPIOBEN_Pos            (1U)                                
#define RCC_AHB1ENR_GPIOBEN_Msk            (0x1UL << RCC_AHB1ENR_GPIOBEN_Pos)   /*!< 0x00000002 */
#define RCC_AHB1ENR_GPIOBEN                RCC_AHB1ENR_GPIOBEN_Msk             
#define RCC_AHB1ENR_GPIOCEN_Pos            (2U)                                
#define RCC_AHB1ENR_GPIOCEN_Msk            (0x1UL << RCC_AHB1ENR_GPIOCEN_Pos)   /*!< 0x00000004 */
#define RCC_AHB1ENR_GPIOCEN                RCC_AHB1ENR_GPIOCEN_Msk             
#define RCC_AHB1ENR_GPIODEN_Pos            (3U)                                
#define RCC_AHB1ENR_GPIODEN_Msk            (0x1UL << RCC_AHB1ENR_GPIODEN_Pos)   /*!< 0x00000008 */
#define RCC_AHB1ENR_GPIODEN                RCC_AHB1ENR_GPIODEN_Msk             
#define RCC_AHB1ENR_GPIOEEN_Pos            (4U)                                
#define RCC_AHB1ENR_GPIOEEN_Msk            (0x1UL << RCC_AHB1ENR_GPIOEEN_Pos)   /*!< 0x00000010 */
#define RCC_AHB1ENR_GPIOEEN                RCC_AHB1ENR_GPIOEEN_Msk             
#define RCC_AHB1ENR_GPIOFEN_Pos            (5U)                                
#define RCC_AHB1ENR_GPIOFEN_Msk            (0x1UL << RCC_AHB1ENR_GPIOFEN_Pos)   /*!< 0x00000020 */
#define RCC_AHB1ENR_GPIOFEN                RCC_AHB1ENR_GPIOFEN_Msk             
#define RCC_AHB1ENR_GPIOGEN_Pos            (6U)                                
#define RCC_AHB1ENR_GPIOGEN_Msk            (0x1UL << RCC_AHB1ENR_GPIOGEN_Pos)   /*!< 0x00000040 */
#define RCC_AHB1ENR_GPIOGEN                RCC_AHB1ENR_GPIOGEN_Msk             
#define RCC_AHB1ENR_GPIOHEN_Pos            (7U)                                
#define RCC_AHB1ENR_GPIOHEN_Msk            (0x1UL << RCC_AHB1ENR_GPIOHEN_Pos)   /*!< 0x00000080 */
#define RCC_AHB1ENR_GPIOHEN                RCC_AHB1ENR_GPIOHEN_Msk             
#define RCC_AHB1ENR_CRCEN_Pos              (12U)                               
#define RCC_AHB1ENR_CRCEN_Msk              (0x1UL << RCC_AHB1ENR_CRCEN_Pos)     /*!< 0x00001000 */
#define RCC_AHB1ENR_CRCEN                  RCC_AHB1ENR_CRCEN_Msk               
#define RCC_AHB1ENR_BKPSRAMEN_Pos          (18U)                               
#define RCC_AHB1ENR_BKPSRAMEN_Msk          (0x1UL << RCC_AHB1ENR_BKPSRAMEN_Pos) /*!< 0x00040000 */
#define RCC_AHB1ENR_BKPSRAMEN              RCC_AHB1ENR_BKPSRAMEN_Msk           
#define RCC_AHB1ENR_DMA1EN_Pos             (21U)                               
#define RCC_AHB1ENR_DMA1EN_Msk             (0x1UL << RCC_AHB1ENR_DMA1EN_Pos)    /*!< 0x00200000 */
#define RCC_AHB1ENR_DMA1EN                 RCC_AHB1ENR_DMA1EN_Msk              
#define RCC_AHB1ENR_DMA2EN_Pos             (22U)                               
#define RCC_AHB1ENR_DMA2EN_Msk             (0x1UL << RCC_AHB1ENR_DMA2EN_Pos)    /*!< 0x00400000 */
#define RCC_AHB1ENR_DMA2EN                 RCC_AHB1ENR_DMA2EN_Msk              
#define RCC_AHB1ENR_OTGHSEN_Pos            (29U)                               
#define RCC_AHB1ENR_OTGHSEN_Msk            (0x1UL << RCC_AHB1ENR_OTGHSEN_Pos)   /*!< 0x20000000 */
#define RCC_AHB1ENR_OTGHSEN                RCC_AHB1ENR_OTGHSEN_Msk             
#define RCC_AHB1ENR_OTGHSULPIEN_Pos        (30U)                               
#define RCC_AHB1ENR_OTGHSULPIEN_Msk        (0x1UL << RCC_AHB1ENR_OTGHSULPIEN_Pos) /*!< 0x40000000 */
#define RCC_AHB1ENR_OTGHSULPIEN            RCC_AHB1ENR_OTGHSULPIEN_Msk     


/********************  Bit definition for RCC_APB1ENR register  ***************/
#define RCC_APB1ENR_TIM2EN_Pos             (0U)                                
#define RCC_APB1ENR_TIM2EN_Msk             (0x1UL << RCC_APB1ENR_TIM2EN_Pos)    /*!< 0x00000001 */
#define RCC_APB1ENR_TIM2EN                 RCC_APB1ENR_TIM2EN_Msk              
#define RCC_APB1ENR_TIM3EN_Pos             (1U)                                
#define RCC_APB1ENR_TIM3EN_Msk             (0x1UL << RCC_APB1ENR_TIM3EN_Pos)    /*!< 0x00000002 */
#define RCC_APB1ENR_TIM3EN                 RCC_APB1ENR_TIM3EN_Msk              
#define RCC_APB1ENR_TIM4EN_Pos             (2U)                                
#define RCC_APB1ENR_TIM4EN_Msk             (0x1UL << RCC_APB1ENR_TIM4EN_Pos)    /*!< 0x00000004 */
#define RCC_APB1ENR_TIM4EN                 RCC_APB1ENR_TIM4EN_Msk              
#define RCC_APB1ENR_TIM5EN_Pos             (3U)                                
#define RCC_APB1ENR_TIM5EN_Msk             (0x1UL << RCC_APB1ENR_TIM5EN_Pos)    /*!< 0x00000008 */
#define RCC_APB1ENR_TIM5EN                 RCC_APB1ENR_TIM5EN_Msk              
#define RCC_APB1ENR_TIM6EN_Pos             (4U)                                
#define RCC_APB1ENR_TIM6EN_Msk             (0x1UL << RCC_APB1ENR_TIM6EN_Pos)    /*!< 0x00000010 */
#define RCC_APB1ENR_TIM6EN                 RCC_APB1ENR_TIM6EN_Msk              
#define RCC_APB1ENR_TIM7EN_Pos             (5U)                                
#define RCC_APB1ENR_TIM7EN_Msk             (0x1UL << RCC_APB1ENR_TIM7EN_Pos)    /*!< 0x00000020 */
#define RCC_APB1ENR_TIM7EN                 RCC_APB1ENR_TIM7EN_Msk              
#define RCC_APB1ENR_TIM12EN_Pos            (6U)                                
#define RCC_APB1ENR_TIM12EN_Msk            (0x1UL << RCC_APB1ENR_TIM12EN_Pos)   /*!< 0x00000040 */
#define RCC_APB1ENR_TIM12EN                RCC_APB1ENR_TIM12EN_Msk             
#define RCC_APB1ENR_TIM13EN_Pos            (7U)                                
#define RCC_APB1ENR_TIM13EN_Msk            (0x1UL << RCC_APB1ENR_TIM13EN_Pos)   /*!< 0x00000080 */
#define RCC_APB1ENR_TIM13EN                RCC_APB1ENR_TIM13EN_Msk             
#define RCC_APB1ENR_TIM14EN_Pos            (8U)                                
#define RCC_APB1ENR_TIM14EN_Msk            (0x1UL << RCC_APB1ENR_TIM14EN_Pos)   /*!< 0x00000100 */
#define RCC_APB1ENR_TIM14EN                RCC_APB1ENR_TIM14EN_Msk             
#define RCC_APB1ENR_WWDGEN_Pos             (11U)                               
#define RCC_APB1ENR_WWDGEN_Msk             (0x1UL << RCC_APB1ENR_WWDGEN_Pos)    /*!< 0x00000800 */
#define RCC_APB1ENR_WWDGEN                 RCC_APB1ENR_WWDGEN_Msk              
#define RCC_APB1ENR_SPI2EN_Pos             (14U)                               
#define RCC_APB1ENR_SPI2EN_Msk             (0x1UL << RCC_APB1ENR_SPI2EN_Pos)    /*!< 0x00004000 */
#define RCC_APB1ENR_SPI2EN                 RCC_APB1ENR_SPI2EN_Msk              
#define RCC_APB1ENR_SPI3EN_Pos             (15U)                               
#define RCC_APB1ENR_SPI3EN_Msk             (0x1UL << RCC_APB1ENR_SPI3EN_Pos)    /*!< 0x00008000 */
#define RCC_APB1ENR_SPI3EN                 RCC_APB1ENR_SPI3EN_Msk              
#define RCC_APB1ENR_SPDIFRXEN_Pos          (16U)                               
#define RCC_APB1ENR_SPDIFRXEN_Msk          (0x1UL << RCC_APB1ENR_SPDIFRXEN_Pos) /*!< 0x00010000 */
#define RCC_APB1ENR_SPDIFRXEN              RCC_APB1ENR_SPDIFRXEN_Msk           
#define RCC_APB1ENR_USART2EN_Pos           (17U)                               
#define RCC_APB1ENR_USART2EN_Msk           (0x1UL << RCC_APB1ENR_USART2EN_Pos)  /*!< 0x00020000 */
#define RCC_APB1ENR_USART2EN               RCC_APB1ENR_USART2EN_Msk            
#define RCC_APB1ENR_USART3EN_Pos           (18U)                               
#define RCC_APB1ENR_USART3EN_Msk           (0x1UL << RCC_APB1ENR_USART3EN_Pos)  /*!< 0x00040000 */
#define RCC_APB1ENR_USART3EN               RCC_APB1ENR_USART3EN_Msk            
#define RCC_APB1ENR_UART4EN_Pos            (19U)                               
#define RCC_APB1ENR_UART4EN_Msk            (0x1UL << RCC_APB1ENR_UART4EN_Pos)   /*!< 0x00080000 */
#define RCC_APB1ENR_UART4EN                RCC_APB1ENR_UART4EN_Msk             
#define RCC_APB1ENR_UART5EN_Pos            (20U)                               
#define RCC_APB1ENR_UART5EN_Msk            (0x1UL << RCC_APB1ENR_UART5EN_Pos)   /*!< 0x00100000 */
#define RCC_APB1ENR_UART5EN                RCC_APB1ENR_UART5EN_Msk             
#define RCC_APB1ENR_I2C1EN_Pos             (21U)                               
#define RCC_APB1ENR_I2C1EN_Msk             (0x1UL << RCC_APB1ENR_I2C1EN_Pos)    /*!< 0x00200000 */
#define RCC_APB1ENR_I2C1EN                 RCC_APB1ENR_I2C1EN_Msk              
#define RCC_APB1ENR_I2C2EN_Pos             (22U)                               
#define RCC_APB1ENR_I2C2EN_Msk             (0x1UL << RCC_APB1ENR_I2C2EN_Pos)    /*!< 0x00400000 */
#define RCC_APB1ENR_I2C2EN                 RCC_APB1ENR_I2C2EN_Msk              
#define RCC_APB1ENR_I2C3EN_Pos             (23U)                               
#define RCC_APB1ENR_I2C3EN_Msk             (0x1UL << RCC_APB1ENR_I2C3EN_Pos)    /*!< 0x00800000 */
#define RCC_APB1ENR_I2C3EN                 RCC_APB1ENR_I2C3EN_Msk              
#define RCC_APB1ENR_FMPI2C1EN_Pos          (24U)                               
#define RCC_APB1ENR_FMPI2C1EN_Msk          (0x1UL << RCC_APB1ENR_FMPI2C1EN_Pos) /*!< 0x01000000 */
#define RCC_APB1ENR_FMPI2C1EN              RCC_APB1ENR_FMPI2C1EN_Msk           
#define RCC_APB1ENR_CAN1EN_Pos             (25U)                               
#define RCC_APB1ENR_CAN1EN_Msk             (0x1UL << RCC_APB1ENR_CAN1EN_Pos)    /*!< 0x02000000 */
#define RCC_APB1ENR_CAN1EN                 RCC_APB1ENR_CAN1EN_Msk              
#define RCC_APB1ENR_CAN2EN_Pos             (26U)                               
#define RCC_APB1ENR_CAN2EN_Msk             (0x1UL << RCC_APB1ENR_CAN2EN_Pos)    /*!< 0x04000000 */
#define RCC_APB1ENR_CAN2EN                 RCC_APB1ENR_CAN2EN_Msk              
#define RCC_APB1ENR_CECEN_Pos              (27U)                               
#define RCC_APB1ENR_CECEN_Msk              (0x1UL << RCC_APB1ENR_CECEN_Pos)     /*!< 0x08000000 */
#define RCC_APB1ENR_CECEN                  RCC_APB1ENR_CECEN_Msk               
#define RCC_APB1ENR_PWREN_Pos              (28U)                               
#define RCC_APB1ENR_PWREN_Msk              (0x1UL << RCC_APB1ENR_PWREN_Pos)     /*!< 0x10000000 */
#define RCC_APB1ENR_PWREN                  RCC_APB1ENR_PWREN_Msk               
#define RCC_APB1ENR_DACEN_Pos              (29U)                               
#define RCC_APB1ENR_DACEN_Msk              (0x1UL << RCC_APB1ENR_DACEN_Pos)     /*!< 0x20000000 */
#define RCC_APB1ENR_DACEN                  RCC_APB1ENR_DACEN_Msk               


typedef struct
{
	uint32_t SR;         /*!< USART Status register,                   Address offset: 0x00 */
	uint32_t DR;         /*!< USART Data register,                     Address offset: 0x04 */
	uint32_t BRR;        /*!< USART Baud rate register,                Address offset: 0x08 */
	uint32_t CR1;        /*!< USART Control register 1,                Address offset: 0x0C */
	uint32_t CR2;        /*!< USART Control register 2,                Address offset: 0x10 */
	uint32_t CR3;        /*!< USART Control register 3,                Address offset: 0x14 */
	uint32_t GTPR;       /*!< USART Guard time and prescaler register, Address offset: 0x18 */
} USART_TypeDef;

extern volatile USART_TypeDef* UART5;

/******************************************************************************/
/*                                                                            */
/*         Universal Synchronous Asynchronous Receiver Transmitter            */
/*                                                                            */
/******************************************************************************/
/*******************  Bit definition for USART_SR register  *******************/
#define USART_SR_PE_Pos               (0U)                                     
#define USART_SR_PE_Msk               (0x1UL << USART_SR_PE_Pos)                /*!< 0x00000001 */
#define USART_SR_PE                   USART_SR_PE_Msk                          /*!<Parity Error                 */
#define USART_SR_FE_Pos               (1U)                                     
#define USART_SR_FE_Msk               (0x1UL << USART_SR_FE_Pos)                /*!< 0x00000002 */
#define USART_SR_FE                   USART_SR_FE_Msk                          /*!<Framing Error                */
#define USART_SR_NE_Pos               (2U)                                     
#define USART_SR_NE_Msk               (0x1UL << USART_SR_NE_Pos)                /*!< 0x00000004 */
#define USART_SR_NE                   USART_SR_NE_Msk                          /*!<Noise Error Flag             */
#define USART_SR_ORE_Pos              (3U)                                     
#define USART_SR_ORE_Msk              (0x1UL << USART_SR_ORE_Pos)               /*!< 0x00000008 */
#define USART_SR_ORE                  USART_SR_ORE_Msk                         /*!<OverRun Error                */
#define USART_SR_IDLE_Pos             (4U)                                     
#define USART_SR_IDLE_Msk             (0x1UL << USART_SR_IDLE_Pos)              /*!< 0x00000010 */
#define USART_SR_IDLE                 USART_SR_IDLE_Msk                        /*!<IDLE line detected           */
#define USART_SR_RXNE_Pos             (5U)                                     
#define USART_SR_RXNE_Msk             (0x1UL << USART_SR_RXNE_Pos)              /*!< 0x00000020 */
#define USART_SR_RXNE                 USART_SR_RXNE_Msk                        /*!<Read Data Register Not Empty */
#define USART_SR_TC_Pos               (6U)                                     
#define USART_SR_TC_Msk               (0x1UL << USART_SR_TC_Pos)                /*!< 0x00000040 */
#define USART_SR_TC                   USART_SR_TC_Msk                          /*!<Transmission Complete        */
#define USART_SR_TXE_Pos              (7U)                                     
#define USART_SR_TXE_Msk              (0x1UL << USART_SR_TXE_Pos)               /*!< 0x00000080 */
#define USART_SR_TXE                  USART_SR_TXE_Msk                         /*!<Transmit Data Register Empty */
#define USART_SR_LBD_Pos              (8U)                                     
#define USART_SR_LBD_Msk              (0x1UL << USART_SR_LBD_Pos)               /*!< 0x00000100 */
#define USART_SR_LBD                  USART_SR_LBD_Msk                         /*!<LIN Break Detection Flag     */
#define USART_SR_CTS_Pos              (9U)                                     
#define USART_SR_CTS_Msk              (0x1UL << USART_SR_CTS_Pos)               /*!< 0x00000200 */
#define USART_SR_CTS                  USART_SR_CTS_Msk                         /*!<CTS Flag                     */

/*******************  Bit definition for USART_DR register  *******************/
#define USART_DR_DR_Pos               (0U)                                     
#define USART_DR_DR_Msk               (0x1FFUL << USART_DR_DR_Pos)              /*!< 0x000001FF */
#define USART_DR_DR                   USART_DR_DR_Msk                          /*!<Data value */

/******************  Bit definition for USART_BRR register  *******************/
#define USART_BRR_DIV_Fraction_Pos    (0U)                                     
#define USART_BRR_DIV_Fraction_Msk    (0xFUL << USART_BRR_DIV_Fraction_Pos)     /*!< 0x0000000F */
#define USART_BRR_DIV_Fraction        USART_BRR_DIV_Fraction_Msk               /*!<Fraction of USARTDIV */
#define USART_BRR_DIV_Mantissa_Pos    (4U)                                     
#define USART_BRR_DIV_Mantissa_Msk    (0xFFFUL << USART_BRR_DIV_Mantissa_Pos)   /*!< 0x0000FFF0 */
#define USART_BRR_DIV_Mantissa        USART_BRR_DIV_Mantissa_Msk               /*!<Mantissa of USARTDIV */

/******************  Bit definition for USART_CR1 register  *******************/
#define USART_CR1_SBK_Pos             (0U)                                     
#define USART_CR1_SBK_Msk             (0x1UL << USART_CR1_SBK_Pos)              /*!< 0x00000001 */
#define USART_CR1_SBK                 USART_CR1_SBK_Msk                        /*!<Send Break                             */
#define USART_CR1_RWU_Pos             (1U)                                     
#define USART_CR1_RWU_Msk             (0x1UL << USART_CR1_RWU_Pos)              /*!< 0x00000002 */
#define USART_CR1_RWU                 USART_CR1_RWU_Msk                        /*!<Receiver wakeup                        */
#define USART_CR1_RE_Pos              (2U)                                     
#define USART_CR1_RE_Msk              (0x1UL << USART_CR1_RE_Pos)               /*!< 0x00000004 */
#define USART_CR1_RE                  USART_CR1_RE_Msk                         /*!<Receiver Enable                        */
#define USART_CR1_TE_Pos              (3U)                                     
#define USART_CR1_TE_Msk              (0x1UL << USART_CR1_TE_Pos)               /*!< 0x00000008 */
#define USART_CR1_TE                  USART_CR1_TE_Msk                         /*!<Transmitter Enable                     */
#define USART_CR1_IDLEIE_Pos          (4U)                                     
#define USART_CR1_IDLEIE_Msk          (0x1UL << USART_CR1_IDLEIE_Pos)           /*!< 0x00000010 */
#define USART_CR1_IDLEIE              USART_CR1_IDLEIE_Msk                     /*!<IDLE Interrupt Enable                  */
#define USART_CR1_RXNEIE_Pos          (5U)                                     
#define USART_CR1_RXNEIE_Msk          (0x1UL << USART_CR1_RXNEIE_Pos)           /*!< 0x00000020 */
#define USART_CR1_RXNEIE              USART_CR1_RXNEIE_Msk                     /*!<RXNE Interrupt Enable                  */
#define USART_CR1_TCIE_Pos            (6U)                                     
#define USART_CR1_TCIE_Msk            (0x1UL << USART_CR1_TCIE_Pos)             /*!< 0x00000040 */
#define USART_CR1_TCIE                USART_CR1_TCIE_Msk                       /*!<Transmission Complete Interrupt Enable */
#define USART_CR1_TXEIE_Pos           (7U)                                     
#define USART_CR1_TXEIE_Msk           (0x1UL << USART_CR1_TXEIE_Pos)            /*!< 0x00000080 */
#define USART_CR1_TXEIE               USART_CR1_TXEIE_Msk                      /*!<TXE Interrupt Enable                   */
#define USART_CR1_PEIE_Pos            (8U)                                     
#define USART_CR1_PEIE_Msk            (0x1UL << USART_CR1_PEIE_Pos)             /*!< 0x00000100 */
#define USART_CR1_PEIE                USART_CR1_PEIE_Msk                       /*!<PE Interrupt Enable                    */
#define USART_CR1_PS_Pos              (9U)                                     
#define USART_CR1_PS_Msk              (0x1UL << USART_CR1_PS_Pos)               /*!< 0x00000200 */
#define USART_CR1_PS                  USART_CR1_PS_Msk                         /*!<Parity Selection                       */
#define USART_CR1_PCE_Pos             (10U)                                    
#define USART_CR1_PCE_Msk             (0x1UL << USART_CR1_PCE_Pos)              /*!< 0x00000400 */
#define USART_CR1_PCE                 USART_CR1_PCE_Msk                        /*!<Parity Control Enable                  */
#define USART_CR1_WAKE_Pos            (11U)                                    
#define USART_CR1_WAKE_Msk            (0x1UL << USART_CR1_WAKE_Pos)             /*!< 0x00000800 */
#define USART_CR1_WAKE                USART_CR1_WAKE_Msk                       /*!<Wakeup method                          */
#define USART_CR1_M_Pos               (12U)                                    
#define USART_CR1_M_Msk               (0x1UL << USART_CR1_M_Pos)                /*!< 0x00001000 */
#define USART_CR1_M                   USART_CR1_M_Msk                          /*!<Word length                            */
#define USART_CR1_UE_Pos              (13U)                                    
#define USART_CR1_UE_Msk              (0x1UL << USART_CR1_UE_Pos)               /*!< 0x00002000 */
#define USART_CR1_UE                  USART_CR1_UE_Msk                         /*!<USART Enable                           */
#define USART_CR1_OVER8_Pos           (15U)                                    
#define USART_CR1_OVER8_Msk           (0x1UL << USART_CR1_OVER8_Pos)            /*!< 0x00008000 */
#define USART_CR1_OVER8               USART_CR1_OVER8_Msk                      /*!<USART Oversampling by 8 enable         */

/******************  Bit definition for USART_CR2 register  *******************/
#define USART_CR2_ADD_Pos             (0U)                                     
#define USART_CR2_ADD_Msk             (0xFUL << USART_CR2_ADD_Pos)              /*!< 0x0000000F */
#define USART_CR2_ADD                 USART_CR2_ADD_Msk                        /*!<Address of the USART node            */
#define USART_CR2_LBDL_Pos            (5U)                                     
#define USART_CR2_LBDL_Msk            (0x1UL << USART_CR2_LBDL_Pos)             /*!< 0x00000020 */
#define USART_CR2_LBDL                USART_CR2_LBDL_Msk                       /*!<LIN Break Detection Length           */
#define USART_CR2_LBDIE_Pos           (6U)                                     
#define USART_CR2_LBDIE_Msk           (0x1UL << USART_CR2_LBDIE_Pos)            /*!< 0x00000040 */
#define USART_CR2_LBDIE               USART_CR2_LBDIE_Msk                      /*!<LIN Break Detection Interrupt Enable */
#define USART_CR2_LBCL_Pos            (8U)                                     
#define USART_CR2_LBCL_Msk            (0x1UL << USART_CR2_LBCL_Pos)             /*!< 0x00000100 */
#define USART_CR2_LBCL                USART_CR2_LBCL_Msk                       /*!<Last Bit Clock pulse                 */
#define USART_CR2_CPHA_Pos            (9U)                                     
#define USART_CR2_CPHA_Msk            (0x1UL << USART_CR2_CPHA_Pos)             /*!< 0x00000200 */
#define USART_CR2_CPHA                USART_CR2_CPHA_Msk                       /*!<Clock Phase                          */
#define USART_CR2_CPOL_Pos            (10U)                                    
#define USART_CR2_CPOL_Msk            (0x1UL << USART_CR2_CPOL_Pos)             /*!< 0x00000400 */
#define USART_CR2_CPOL                USART_CR2_CPOL_Msk                       /*!<Clock Polarity                       */
#define USART_CR2_CLKEN_Pos           (11U)                                    
#define USART_CR2_CLKEN_Msk           (0x1UL << USART_CR2_CLKEN_Pos)            /*!< 0x00000800 */
#define USART_CR2_CLKEN               USART_CR2_CLKEN_Msk                      /*!<Clock Enable                         */

#define USART_CR2_STOP_Pos            (12U)                                    
#define USART_CR2_STOP_Msk            (0x3UL << USART_CR2_STOP_Pos)             /*!< 0x00003000 */
#define USART_CR2_STOP                USART_CR2_STOP_Msk                       /*!<STOP[1:0] bits (STOP bits) */
#define USART_CR2_STOP_0              (0x1UL << USART_CR2_STOP_Pos)             /*!< 0x1000 */
#define USART_CR2_STOP_1              (0x2UL << USART_CR2_STOP_Pos)             /*!< 0x2000 */

#define USART_CR2_LINEN_Pos           (14U)                                    
#define USART_CR2_LINEN_Msk           (0x1UL << USART_CR2_LINEN_Pos)            /*!< 0x00004000 */
#define USART_CR2_LINEN               USART_CR2_LINEN_Msk                      /*!<LIN mode enable */

/******************  Bit definition for USART_CR3 register  *******************/
#define USART_CR3_EIE_Pos             (0U)                                     
#define USART_CR3_EIE_Msk             (0x1UL << USART_CR3_EIE_Pos)              /*!< 0x00000001 */
#define USART_CR3_EIE                 USART_CR3_EIE_Msk                        /*!<Error Interrupt Enable      */
#define USART_CR3_IREN_Pos            (1U)                                     
#define USART_CR3_IREN_Msk            (0x1UL << USART_CR3_IREN_Pos)             /*!< 0x00000002 */
#define USART_CR3_IREN                USART_CR3_IREN_Msk                       /*!<IrDA mode Enable            */
#define USART_CR3_IRLP_Pos            (2U)                                     
#define USART_CR3_IRLP_Msk            (0x1UL << USART_CR3_IRLP_Pos)             /*!< 0x00000004 */
#define USART_CR3_IRLP                USART_CR3_IRLP_Msk                       /*!<IrDA Low-Power              */
#define USART_CR3_HDSEL_Pos           (3U)                                     
#define USART_CR3_HDSEL_Msk           (0x1UL << USART_CR3_HDSEL_Pos)            /*!< 0x00000008 */
#define USART_CR3_HDSEL               USART_CR3_HDSEL_Msk                      /*!<Half-Duplex Selection       */
#define USART_CR3_NACK_Pos            (4U)                                     
#define USART_CR3_NACK_Msk            (0x1UL << USART_CR3_NACK_Pos)             /*!< 0x00000010 */
#define USART_CR3_NACK                USART_CR3_NACK_Msk                       /*!<Smartcard NACK enable       */
#define USART_CR3_SCEN_Pos            (5U)                                     
#define USART_CR3_SCEN_Msk            (0x1UL << USART_CR3_SCEN_Pos)             /*!< 0x00000020 */
#define USART_CR3_SCEN                USART_CR3_SCEN_Msk                       /*!<Smartcard mode enable       */
#define USART_CR3_DMAR_Pos            (6U)                                     
#define USART_CR3_DMAR_Msk            (0x1UL << USART_CR3_DMAR_Pos)             /*!< 0x00000040 */
#define USART_CR3_DMAR                USART_CR3_DMAR_Msk                       /*!<DMA Enable Receiver         */
#define USART_CR3_DMAT_Pos            (7U)                                     
#define USART_CR3_DMAT_Msk            (0x1UL << USART_CR3_DMAT_Pos)             /*!< 0x00000080 */
#define USART_CR3_DMAT                USART_CR3_DMAT_Msk                       /*!<DMA Enable Transmitter      */
#define USART_CR3_RTSE_Pos            (8U)                                     
#define USART_CR3_RTSE_Msk            (0x1UL << USART_CR3_RTSE_Pos)             /*!< 0x00000100 */
#define USART_CR3_RTSE                USART_CR3_RTSE_Msk                       /*!<RTS Enable                  */
#define USART_CR3_CTSE_Pos            (9U)                                     
#define USART_CR3_CTSE_Msk            (0x1UL << USART_CR3_CTSE_Pos)             /*!< 0x00000200 */
#define USART_CR3_CTSE                USART_CR3_CTSE_Msk                       /*!<CTS Enable                  */
#define USART_CR3_CTSIE_Pos           (10U)                                    
#define USART_CR3_CTSIE_Msk           (0x1UL << USART_CR3_CTSIE_Pos)            /*!< 0x00000400 */
#define USART_CR3_CTSIE               USART_CR3_CTSIE_Msk                      /*!<CTS Interrupt Enable        */
#define USART_CR3_ONEBIT_Pos          (11U)                                    
#define USART_CR3_ONEBIT_Msk          (0x1UL << USART_CR3_ONEBIT_Pos)           /*!< 0x00000800 */
#define USART_CR3_ONEBIT              USART_CR3_ONEBIT_Msk                     /*!<USART One bit method enable */

/******************  Bit definition for USART_GTPR register  ******************/
#define USART_GTPR_PSC_Pos            (0U)                                     
#define USART_GTPR_PSC_Msk            (0xFFUL << USART_GTPR_PSC_Pos)            /*!< 0x000000FF */
#define USART_GTPR_PSC                USART_GTPR_PSC_Msk                       /*!<PSC[7:0] bits (Prescaler value) */
#define USART_GTPR_PSC_0              (0x01UL << USART_GTPR_PSC_Pos)            /*!< 0x0001 */
#define USART_GTPR_PSC_1              (0x02UL << USART_GTPR_PSC_Pos)            /*!< 0x0002 */
#define USART_GTPR_PSC_2              (0x04UL << USART_GTPR_PSC_Pos)            /*!< 0x0004 */
#define USART_GTPR_PSC_3              (0x08UL << USART_GTPR_PSC_Pos)            /*!< 0x0008 */
#define USART_GTPR_PSC_4              (0x10UL << USART_GTPR_PSC_Pos)            /*!< 0x0010 */
#define USART_GTPR_PSC_5              (0x20UL << USART_GTPR_PSC_Pos)            /*!< 0x0020 */
#define USART_GTPR_PSC_6              (0x40UL << USART_GTPR_PSC_Pos)            /*!< 0x0040 */
#define USART_GTPR_PSC_7              (0x80UL << USART_GTPR_PSC_Pos)            /*!< 0x0080 */

#define USART_GTPR_GT_Pos             (8U)                                     
#define USART_GTPR_GT_Msk             (0xFFUL << USART_GTPR_GT_Pos)             /*!< 0x0000FF00 */
#define USART_GTPR_GT                 USART_GTPR_GT_Msk                        /*!<Guard time value */


#define SET_BIT(REG, BIT)     ((REG) |= (BIT))

#define CLEAR_BIT(REG, BIT)   ((REG) &= ~(BIT))

#define READ_BIT(REG, BIT)    ((REG) & (BIT))

#define CLEAR_REG(REG)        ((REG) = (0x0))

#define WRITE_REG(REG, VAL)   ((REG) = (VAL))

#define READ_REG(REG)         ((REG))

#define MODIFY_REG(REG, CLEARMASK, SETMASK)  WRITE_REG((REG), (((READ_REG(REG)) & (~(CLEARMASK))) | (SETMASK)))

#define POSITION_VAL(VAL)     (__CLZ(__RBIT(VAL))) 


/**
  \brief   Mask and shift a bit field value for use in a register bit range.
  \param[in] field  Name of the register bit field.
  \param[in] value  Value of the bit field. This parameter is interpreted as an uint32_t type.
  \return           Masked and shifted value.
*/
#define _VAL2FLD(field, value)    (((uint32_t)(value) << field ## _Pos) & field ## _Msk)

/**
  \brief     Mask and shift a register value to extract a bit filed value.
  \param[in] field  Name of the register bit field.
  \param[in] value  Value of register. This parameter is interpreted as an uint32_t type.
  \return           Masked and shifted bit field value.
*/
#define _FLD2VAL(field, value)    (((uint32_t)(value) & field ## _Msk) >> field ## _Pos)

#endif