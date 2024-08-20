/*
 * UART_Register.h
 *
 *  Created on: Aug 18, 2024
 *      Author: DELL
 */

#ifndef MCAL_MUART_UART_REGISTER_H_
#define MCAL_MUART_UART_REGISTER_H_

#define UDR		*((volatile u8 *)(0X2C))
#define UCSRA	*((volatile u8 *)(0X2B))
#define UCSRB 	*((volatile u8 *)(0X2A))
#define UCSRC	*((volatile u8 *)(0X40))
#define UBRRL	*((volatile u8 *)(0X29))
#define UBRRH	*((volatile u8 *)(0X40))



#endif /* MCAL_MUART_UART_REGISTER_H_ */
