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

#ifndef __S32K144_GPIO_H__
#define __S32K144_GPIO_H__

#include <stdint.h> 

#ifndef RO
#define RO const
#define RW

#define IO volatile
#define DM

#endif //! #ifndef RO

typedef struct PDOR_Type
{
    RW uint32_t PDO : 32;
} PDOR_t;

typedef struct PSOR_Type
{
    RW uint32_t PTSO : 32;
} PSOR_t;

typedef struct PCOR_Type
{
    RW uint32_t PTCO : 32;
} PCOR_t;

typedef struct PTOR_Type
{
    RW uint32_t PTTO : 32;
} PTOR_t;

typedef struct PDIR_Type
{
    RO uint32_t PDI : 32;
} PDIR_t;

typedef struct PDDR_Type
{
    RW uint32_t PDD : 32;
} PDDR_t;

typedef struct PIDR_Type
{
    RW uint32_t PID : 32;
} PIDR_t;

typedef struct GPIO_Type
{
    IO PDOR_t PDOR;
    IO PSOR_t PSOR;
    IO PCOR_t PCOR;
    IO PTOR_t PTOR;
    IO PDIR_t PDIR;
    IO PDDR_t PDDR;
    IO PIDR_t PIDR;
} GPIO_t;

#define GPIO_BASE_ADDRS (0x400FF000)
#define GPIO ((GPIO_t *) GPIO_BASE_ADDRS)

#endif //! #ifndef __S32K144_GPIO_H__
