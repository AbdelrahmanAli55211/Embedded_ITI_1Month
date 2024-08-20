/*
 * UART_Config.h
 *
 *  Created on: Aug 18, 2024
 *      Author: DELL
 */

#ifndef MCAL_MUART_UART_CONFIG_H_
#define MCAL_MUART_UART_CONFIG_H_

/* Select Baud Rate
 * 2400
 * 4800
 * 9600
 * 14400
 * 19200
 * 28800
 * 38400
 * 57600
 * 76800
 * 115200
 * 230400
 * 250000
 * */
#define UART_BAUD_RATE	9600

/*Select uart speed
 * NORMAL_SPEED
 * DOUBLE_SPEED
 * */
#define UART_SPEED	NORMAL_ASPEED

/*select parity mode
 * DISABLED
 * EVEN_PARITY
 * ODD_PARITY
 * */
#define UART_PARITY_MODE	DISABLED

/*Select stop mode
 * STOP_1BIT
 * STOP_2BIT
 * */
#define UART_STOP_MODE		STOP_1BIT

/*Select clk mode
 * SYNCHRONOUS
 * ASYNCHRONOUS
 * */
#define UART_CLK_MODE

/*select clk polarity
 * RISING_FALLING
 * FALLING_RISING
 * */
#define CLK_POLARITY RISING_FALLING

/*select number of data bits
 * DATA_5BITS
 * DATA_6BITS
 * DATA_7BITS
 * DATA_8BITS
 * DATA_9BITS
 * */
#define UART_DATA_MODE		DATA_8BITS

#define SYS_FREQ	8000000
#endif /* MCAL_MUART_UART_CONFIG_H_ */
