/*
 * SPI_Config.h
 *
 *  Created on: Aug 15, 2024
 *      Author: DELL
 */

#ifndef MCAL_MSPI_SPI_CONFIG_H_
#define MCAL_MSPI_SPI_CONFIG_H_

/* Select Master or Slave
* SPI_MASTER
* SPI_SLAVE
*/
#define SPI_MODE	SPI_MASTER

/*===============================*/
/* Select Clk Rate
* Prescaler_2
* Prescaler_4
* Prescaler_8
* Prescaler_16
* Prescaler_32
* Prescaler_64
* Prescaler_128
*/
#define CLK_RATE	Prescaler_16

/*===============================*/
/*	Select Clk Phase
 * Sample_Setup
 * Setup_Sample
 */
#define CLK_PHASE	Setup_Sample

/*================================*/
/* Select Clk Polarity
 * Rising_Falling
 * Falling_Rising
*/
#define CLK_POLARITY	Rising_Falling

/*==================================*/
/* Select Data Order
 * LSB_FIRST
 * MSB_FIRST
 * */
#define DATA_ORDER		LSB_FIRST
#endif /* MCAL_MSPI_SPI_CONFIG_H_ */
