/*
 * UART_Program.c
 *
 *  Created on: Aug 18, 2024
 *      Author: DELL
 */
#include "../../LIB/STD_Types.h"
#include "../../LIB/BIT_Math.h"
#include "UART_Register.h"
#include "UART_Private.h"
#include "UART_Interface.h"
#include "UART_Config.h"

void MUART_voidUartInit(void)
{
	/*setting baud rate*/
#if UART_SPEED==NORMAL_SPEED
	UBRRL=(u8)((SYS_FREQ/(16*UART_BAUD_RATE))-1);
	UBRRH=(u8)(((SYS_FREQ/(16*UART_BAUD_RATE))-1)>>8);

#elif UART_SPEED==DOUBLE_SPEED
	set_bit(UCSRA,U2X);
	UBRRL=(u8)(SYS_FREQ/(8*UART_BAUD_RATE))-1;
	UBRRH=(u8)(((SYS_FREQ/(8*UART_BAUD_RATE))-1)>>8);
#else
#endif

	/*enable tx & rx*/
	set_bit(UCSRB,RXEN);
	set_bit(UCSRB,TXEN);

	set_bit(UCSRC,URSEL);//working on ucsrc register

	/*setting parity mode*/
#if UART_PARITY_MODE==DISABLED
	clear_bit(UCSRC,UPM0);
	clear_bit(UCSRC,UPM1);
#elif UART_PARITY_MODE==EVEN_PARITY
	clear_bit(UCSRC,UPM0);
	set_bit(UCSRC,UPM1);
#elif UART_PARITY_MODE==ODD_PARITY
	set_bit(UCSRC,UPM0);
	set_bit(UCSRC,UPM1);
#else
#endif

	/*setting stop bits*/
#if UART_STOP_MODE==STOP_1BIT
	clear_bit(UCSRC,USBS);
#elif UART_STOP_MODE==STOP_2BIT
	set_bit(UCSRC,USBS);
#else
#endif
	/*select bit size*/
#if UART_DATA_MODE==DATA_5BITS
	clear_bit(UCSRC,UCSZ0);
	clear_bit(UCSRC,UCSZ1);
	clear_bit(UCSRB,UCSZ2);
#elif UART_DATA_MODE==DATA_6BITS
	set_bit(UCSRC,UCSZ0);
	clear_bit(UCSRC,UCSZ1);
	clear_bit(UCSRB,UCSZ2);
#elif UART_DATA_MODE==DATA_7BITS
	clear_bit(UCSRC,UCSZ0);
	set_bit(UCSRC,UCSZ1);
	clear_bit(UCSRB,UCSZ2);
#elif UART_DATA_MODE==DATA_8BITS
	set_bit(UCSRC,UCSZ0);
	set_bit(UCSRC,UCSZ1);
	clear_bit(UCSRB,UCSZ2);
#elif UART_DATA_MODE==DATA_9BITS
	set_bit(UCSRC,UCSZ0);
	set_bit(UCSRC,UCSZ1);
	set_bit(UCSRB,UCSZ2);
#endif
}
void MUART_voidUartSend(u8 A_u8Data)
{

	while(read_bit(UCSRA,UDRE)==0)
	{

	}
	UDR=A_u8Data;
}
u8 MUART_u8UartRecieve(void)
{

	while(read_bit(UCSRA,RXC)==0)
	{

	}
	return UDR;
}
void MUART_voidUartSendString(u8 * A_PString)
{
	while((*A_PString)!=0)
	{
		MUART_voidUartSend(*A_PString);
		A_PString++;
	}
}

