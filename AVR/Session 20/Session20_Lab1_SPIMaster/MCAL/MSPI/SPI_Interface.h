/*
 * SPI_Interface.h
 *
 *  Created on: Aug 15, 2024
 *      Author: DELL
 */

#ifndef MCAL_MSPI_SPI_INTERFACE_H_
#define MCAL_MSPI_SPI_INTERFACE_H_

#define SPI_MASTER 		1
#define SPI_SLAVE  		0

#define Prescaler_2  	0
#define Prescaler_4  	1
#define Prescaler_8  	2
#define Prescaler_16 	3
#define Prescaler_32 	4
#define Prescaler_64 	5
#define Prescaler_128	6

#define Sample_Setup	0
#define Setup_Sample	1

#define Rising_Falling	0
#define Falling_Rising	1

#define LSB_FIRST		1
#define MSB_FIRST		0
/*SPI FUNCTIONS*/

void MSPI_voidInit(void);
void MSPI_voidMasterSendData(u8 A_u8Data);
u8 MSPI_u8SlaveRecieveData(void);
#endif /* MCAL_MSPI_SPI_INTERFACE_H_ */
