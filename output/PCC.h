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

#ifndef __S32K144_PCC_H__
#define __S32K144_PCC_H__

#include <stdint.h> 

#ifndef RO
#define RO const
#define RW

#define IO volatile
#define DM

#endif //! #ifndef RO

typedef struct PCC_FTFC_Type
{
    RO uint32_t RES0 : 30;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_FTFC_t;

typedef struct PCC_DMAMUX_Type
{
    RO uint32_t RES0 : 30;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_DMAMUX_t;

typedef struct PCC_FlexCAN0_Type
{
    RO uint32_t RES0 : 30;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_FlexCAN0_t;

typedef struct PCC_FlexCAN1_Type
{
    RO uint32_t RES0 : 30;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_FlexCAN1_t;

typedef struct PCC_FTM3_Type
{
    RO uint32_t RES0 : 24;
    RW uint32_t PCS : 3;
    RO uint32_t RES1 : 3;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_FTM3_t;

typedef struct PCC_ADC1_Type
{
    RO uint32_t RES0 : 24;
    RW uint32_t PCS : 3;
    RO uint32_t RES1 : 3;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_ADC1_t;

typedef struct PCC_FlexCAN2_Type
{
    RO uint32_t RES0 : 30;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_FlexCAN2_t;

typedef struct PCC_LPSPI0_Type
{
    RO uint32_t RES0 : 24;
    RW uint32_t PCS : 3;
    RO uint32_t RES1 : 3;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_LPSPI0_t;

typedef struct PCC_LPSPI1_Type
{
    RO uint32_t RES0 : 24;
    RW uint32_t PCS : 3;
    RO uint32_t RES1 : 3;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_LPSPI1_t;

typedef struct PCC_LPSPI2_Type
{
    RO uint32_t RES0 : 24;
    RW uint32_t PCS : 3;
    RO uint32_t RES1 : 3;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_LPSPI2_t;

typedef struct PCC_PDB1_Type
{
    RO uint32_t RES0 : 30;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_PDB1_t;

typedef struct PCC_CRC_Type
{
    RO uint32_t RES0 : 30;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_CRC_t;

typedef struct PCC_PDB0_Type
{
    RO uint32_t RES0 : 30;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_PDB0_t;

typedef struct PCC_LPIT_Type
{
    RO uint32_t RES0 : 24;
    RW uint32_t PCS : 3;
    RO uint32_t RES1 : 3;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_LPIT_t;

typedef struct PCC_FTM0_Type
{
    RO uint32_t RES0 : 24;
    RW uint32_t PCS : 3;
    RO uint32_t RES1 : 3;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_FTM0_t;

typedef struct PCC_FTM1_Type
{
    RO uint32_t RES0 : 24;
    RW uint32_t PCS : 3;
    RO uint32_t RES1 : 3;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_FTM1_t;

typedef struct PCC_FTM2_Type
{
    RO uint32_t RES0 : 24;
    RW uint32_t PCS : 3;
    RO uint32_t RES1 : 3;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_FTM2_t;

typedef struct PCC_ADC0_Type
{
    RO uint32_t RES0 : 24;
    RW uint32_t PCS : 3;
    RO uint32_t RES1 : 3;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_ADC0_t;

typedef struct PCC_RTC_Type
{
    RO uint32_t RES0 : 30;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_RTC_t;

typedef struct PCC_LPTMR0_Type
{
    RW uint32_t PCD : 3;
    RW uint32_t FRAC : 1;
    RO uint32_t RES0 : 20;
    RW uint32_t PCS : 3;
    RO uint32_t RES1 : 3;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_LPTMR0_t;

typedef struct PCC_PORTA_Type
{
    RO uint32_t RES0 : 30;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_PORTA_t;

typedef struct PCC_PORTB_Type
{
    RO uint32_t RES0 : 30;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_PORTB_t;

typedef struct PCC_PORTC_Type
{
    RO uint32_t RES0 : 30;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_PORTC_t;

typedef struct PCC_PORTD_Type
{
    RO uint32_t RES0 : 30;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_PORTD_t;

typedef struct PCC_PORTE_Type
{
    RO uint32_t RES0 : 30;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_PORTE_t;

typedef struct PCC_SAI0_Type
{
    RO uint32_t RES0 : 30;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_SAI0_t;

typedef struct PCC_SAI1_Type
{
    RO uint32_t RES0 : 30;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_SAI1_t;

typedef struct PCC_FlexIO_Type
{
    RO uint32_t RES0 : 24;
    RW uint32_t PCS : 3;
    RO uint32_t RES1 : 3;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_FlexIO_t;

typedef struct PCC_EWM_Type
{
    RO uint32_t RES0 : 30;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_EWM_t;

typedef struct PCC_LPI2C0_Type
{
    RO uint32_t RES0 : 24;
    RW uint32_t PCS : 3;
    RO uint32_t RES1 : 3;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_LPI2C0_t;

typedef struct PCC_LPI2C1_Type
{
    RO uint32_t RES0 : 24;
    RW uint32_t PCS : 3;
    RO uint32_t RES1 : 3;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_LPI2C1_t;

typedef struct PCC_LPUART0_Type
{
    RO uint32_t RES0 : 24;
    RW uint32_t PCS : 3;
    RO uint32_t RES1 : 3;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_LPUART0_t;

typedef struct PCC_LPUART1_Type
{
    RO uint32_t RES0 : 24;
    RW uint32_t PCS : 3;
    RO uint32_t RES1 : 3;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_LPUART1_t;

typedef struct PCC_LPUART2_Type
{
    RO uint32_t RES0 : 24;
    RW uint32_t PCS : 3;
    RO uint32_t RES1 : 3;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_LPUART2_t;

typedef struct PCC_FTM4_Type
{
    RO uint32_t RES0 : 24;
    RW uint32_t PCS : 3;
    RO uint32_t RES1 : 3;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_FTM4_t;

typedef struct PCC_FTM5_Type
{
    RO uint32_t RES0 : 24;
    RW uint32_t PCS : 3;
    RO uint32_t RES1 : 3;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_FTM5_t;

typedef struct PCC_FTM6_Type
{
    RO uint32_t RES0 : 24;
    RW uint32_t PCS : 3;
    RO uint32_t RES1 : 3;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_FTM6_t;

typedef struct PCC_FTM7_Type
{
    RO uint32_t RES0 : 24;
    RW uint32_t PCS : 3;
    RO uint32_t RES1 : 3;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_FTM7_t;

typedef struct PCC_CMP0_Type
{
    RO uint32_t RES0 : 30;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_CMP0_t;

typedef struct PCC_QSPI_Type
{
    RO uint32_t RES0 : 30;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_QSPI_t;

typedef struct PCC_ENET_Type
{
    RW uint32_t PCD : 3;
    RW uint32_t FRAC : 1;
    RO uint32_t RES0 : 20;
    RW uint32_t PCS : 3;
    RO uint32_t RES1 : 3;
    RW uint32_t CGC : 1;
    RO uint32_t PR : 1;
} PCC_ENET_t;

typedef struct PCC_Type
{
    DM uint8_t RES0[124];
    IO PCC_FTFC_t PCC_FTFC;
    IO PCC_DMAMUX_t PCC_DMAMUX;
    DM uint8_t RES1[8];
    IO PCC_FlexCAN0_t PCC_FlexCAN0;
    IO PCC_FlexCAN1_t PCC_FlexCAN1;
    IO PCC_FTM3_t PCC_FTM3;
    IO PCC_ADC1_t PCC_ADC1;
    DM uint8_t RES2[12];
    IO PCC_FlexCAN2_t PCC_FlexCAN2;
    IO PCC_LPSPI0_t PCC_LPSPI0;
    IO PCC_LPSPI1_t PCC_LPSPI1;
    IO PCC_LPSPI2_t PCC_LPSPI2;
    DM uint8_t RES3[8];
    IO PCC_PDB1_t PCC_PDB1;
    IO PCC_CRC_t PCC_CRC;
    DM uint8_t RES4[12];
    IO PCC_PDB0_t PCC_PDB0;
    IO PCC_LPIT_t PCC_LPIT;
    IO PCC_FTM0_t PCC_FTM0;
    IO PCC_FTM1_t PCC_FTM1;
    IO PCC_FTM2_t PCC_FTM2;
    IO PCC_ADC0_t PCC_ADC0;
    DM uint8_t RES5[4];
    IO PCC_RTC_t PCC_RTC;
    DM uint8_t RES6[8];
    IO PCC_LPTMR0_t PCC_LPTMR0;
    DM uint8_t RES7[32];
    IO PCC_PORTA_t PCC_PORTA;
    IO PCC_PORTB_t PCC_PORTB;
    IO PCC_PORTC_t PCC_PORTC;
    IO PCC_PORTD_t PCC_PORTD;
    IO PCC_PORTE_t PCC_PORTE;
    DM uint8_t RES8[24];
    IO PCC_SAI0_t PCC_SAI0;
    IO PCC_SAI1_t PCC_SAI1;
    DM uint8_t RES9[16];
    IO PCC_FlexIO_t PCC_FlexIO;
    DM uint8_t RES10[24];
    IO PCC_EWM_t PCC_EWM;
    DM uint8_t RES11[16];
    IO PCC_LPI2C0_t PCC_LPI2C0;
    IO PCC_LPI2C1_t PCC_LPI2C1;
    DM uint8_t RES12[8];
    IO PCC_LPUART0_t PCC_LPUART0;
    IO PCC_LPUART1_t PCC_LPUART1;
    IO PCC_LPUART2_t PCC_LPUART2;
    DM uint8_t RES13[4];
    IO PCC_FTM4_t PCC_FTM4;
    IO PCC_FTM5_t PCC_FTM5;
    IO PCC_FTM6_t PCC_FTM6;
    IO PCC_FTM7_t PCC_FTM7;
    DM uint8_t RES14[4];
    IO PCC_CMP0_t PCC_CMP0;
    DM uint8_t RES15[8];
    IO PCC_QSPI_t PCC_QSPI;
    DM uint8_t RES16[8];
    IO PCC_ENET_t PCC_ENET;
} PCC_t;

#define PCC_BASE_ADDRS (0x40065000)
#define PCC ((PCC_t *) PCC_BASE_ADDRS)

#endif //! #ifndef __S32K144_PCC_H__
