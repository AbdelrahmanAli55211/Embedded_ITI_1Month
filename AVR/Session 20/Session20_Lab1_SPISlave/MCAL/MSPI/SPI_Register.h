/*
 * SPI_Register.h
 *
 *  Created on: Aug 15, 2024
 *      Author: DELL
 */

#ifndef MCAL_MSPI_SPI_REGISTER_H_
#define MCAL_MSPI_SPI_REGISTER_H_

#define SPCR 	*((volatile u8 *)(0X2D))
#define SPSR	*((volatile u8 *)(0X2E))
#define SPDR	*((volatile u8 *)(0X2F))


#define DDRB	*((volatile u8 *)(0X37))
#define PORTB 	*((volatile u8 *)(0x38))

#endif /* MCAL_MSPI_SPI_REGISTER_H_ */
