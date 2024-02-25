/*
** ###################################################################
**     Processor:           S32K144
**     Compiler:            Keil ARM C/C++ Compiler
**     Version:             rev. 1.0, <GENERATION_TIME>
**
**     Abstract:
**         Peripheral Access Layer for S32K144
**
** ###################################################################
*/

#ifndef __S32K144_PORT_H__
#define __S32K144_PORT_H__

#include <stdint.h> 

#ifndef RO
#define RO const
#define RW

#define IO volatile
#define DM

#endif //! #ifndef RO

typedef struct PORT_PCR_Type
{
    RW uint32_t PS : 1;
    RW uint32_t PE : 1;
    RO uint32_t RES0 : 2;
    RW uint32_t PFE : 1;
    RO uint32_t RES1 : 1;
    RW uint32_t DSE : 1;
    RO uint32_t RES2 : 1;
    RW uint32_t MUX : 3;
    RO uint32_t RES3 : 4;
    RW uint32_t LK : 1;
    RW uint32_t IRQC : 4;
    RO uint32_t RES4 : 4;
    RW uint32_t ISF : 1;
    RO uint32_t RES5 : 7;
} PORT_PCR_t;

typedef struct PORT_GPCLR_Type
{
    RW uint32_t GPWD : 16;
    RW uint32_t GPWE : 16;
} PORT_GPCLR_t;

typedef struct PORT_GPCHR_Type
{
    RW uint32_t GPWD : 16;
    RW uint32_t GPWE : 16;
} PORT_GPCHR_t;

typedef struct PORT_GICLR_Type
{
    RW uint32_t GIWE : 16;
    RW uint32_t GIWD : 16;
} PORT_GICLR_t;

typedef struct PORT_GICHR_Type
{
    RW uint32_t GIWE : 16;
    RW uint32_t GIWD : 16;
} PORT_GICHR_t;

typedef struct PORT_ISFR_Type
{
    RW uint32_t ISF : 32;
} PORT_ISFR_t;

typedef struct PORT_DFER_Type
{
    RW uint32_t DEF : 32;
} PORT_DFER_t;

typedef struct PORT_DFCR_Type
{
    RW uint32_t CS : 1;
    RO uint32_t RES0 : 31;
} PORT_DFCR_t;

typedef struct PORT_DFWR_Type
{
    RW uint32_t FILT : 5;
    RO uint32_t RES0 : 27;
} PORT_DFWR_t;

typedef struct PORT_Type
{
    IO PORT_PCR_t PORT_PCR;
    DM uint8_t RES0[124];
    IO PORT_GPCLR_t PORT_GPCLR;
    IO PORT_GPCHR_t PORT_GPCHR;
    IO PORT_GICLR_t PORT_GICLR;
    IO PORT_GICHR_t PORT_GICHR;
    DM uint8_t RES1[16];
    IO PORT_ISFR_t PORT_ISFR;
    DM uint8_t RES2[28];
    IO PORT_DFER_t PORT_DFER;
    IO PORT_DFCR_t PORT_DFCR;
    IO PORT_DFWR_t PORT_DFWR;
} PORT_t;

#define PORT_BASE_ADDRS (0x40049000)
#define PORT ((PORT_t *) PORT_BASE_ADDRS)

#endif //! #ifndef __S32K144_PORT_H__
