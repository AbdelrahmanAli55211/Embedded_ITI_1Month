/*
 * SPI_Private.h
 *
 *  Created on: Aug 15, 2024
 *      Author: DELL
 */

#ifndef MCAL_MSPI_SPI_PRIVATE_H_
#define MCAL_MSPI_SPI_PRIVATE_H_

/*DDRB Pins to set the direction*/

#define PINB0	0
#define PINB1	1
#define PINB2	2
#define PINB3	3
#define PINB4	4
#define PINB5	5
#define PINB6	6
#define PINB7	7

/*SPCR Pins*/

#define SPR0	0
#define	SPR1	1
#define CPHA	2
#define CPOL	3
#define MSTR	4
#define DORD	5
#define SPE		6
#define SPIE	7

/*SPSR Pins*/

#define SPI2X	0
#define WCOL	6
#define SPIF	7

#define DUMMY_DATA 		0XFF

#endif /* MCAL_MSPI_SPI_PRIVATE_H_ */
