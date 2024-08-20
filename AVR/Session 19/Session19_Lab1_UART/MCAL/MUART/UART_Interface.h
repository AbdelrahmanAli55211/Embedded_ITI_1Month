/*
 * UART_Interface.h
 *
 *  Created on: Aug 18, 2024
 *      Author: DELL
 */

#ifndef MCAL_MUART_UART_INTERFACE_H_
#define MCAL_MUART_UART_INTERFACE_H_

#define NORMAL_SPEED	0
#define DOUBLE_SPEED

#define DISABLED   		0
#define EVEN_PARITY		1
#define ODD_PARITY 		2

#define STOP_1BIT		0
#define STOP_2BIT		1

#define SYNCHRONOUS 	0
#define ASYNCHRONOUS	1

#define RISING_FALLING	0
#define FALLING_RISING	1

#define DATA_5BITS	0
#define DATA_6BITS	1
#define DATA_7BITS	2
#define DATA_8BITS	3
#define DATA_9BITS	4

void MUART_voidUartInit(void);
void MUART_voidUartSend(u8 A_u8Data);
u8 MUART_u8UartRecieve(void);
void MUART_voidUartSendString(u8 * A_PString);


#endif /* MCAL_MUART_UART_INTERFACE_H_ */
