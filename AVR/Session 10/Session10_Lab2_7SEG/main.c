/*
 * main.c
 *
 *  Created on: Aug 3, 2024
 *      Author: DELL
 */
#include "LIB/STD_Types.h"
#include "LIB/BIT_Math.h"
#include "HAL/H7SEG/7SEG_Interface.h"
#include "HAL/H7SEG/7SEG_config.h"
#include "MCAL/MDIO/DIO_Interface.h"
#include "util/delay.h"
int main(void)
{
	H7SEG_void_NumbersDisplay(PORT_NUM);
	//Trick two different values on two 7 seg from the same port

	//MDIO_void_SetDir(DIO_PORTB,PINB0,PIN_OUTPUT);
	//MDIO_void_SetDir(DIO_PORTB,PINB1,PIN_OUTPUT);
	while(1)
	{
		/*
		MDIO_void_PinWrite(DIO_PORTB,PINB1,HIGH);
		MDIO_void_PinWrite(DIO_PORTB,PINB0,LOW);
		H7SEG_void_SingleNumberDisplay(PORT_NUM,one);
		_delay_ms(10);
		MDIO_void_PinWrite(DIO_PORTB,PINB1,LOW);
		MDIO_void_PinWrite(DIO_PORTB,PINB0,HIGH);
		H7SEG_void_SingleNumberDisplay(PORT_NUM,two);
		_delay_ms(10);
		*/
	}
	return 0;
}

