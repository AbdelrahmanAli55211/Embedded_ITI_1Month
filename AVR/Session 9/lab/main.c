/*
 * main.c
 *
 *  Created on: Jul 31, 2024
 *      Author: DELL
 */
#include <avr/io.h>
#include <util/delay.h>
#include "STD_Types.h"
#define lab_number 3
void main(void)
{
	switch(lab_number)
	{
	//set led to be on
	case 1:
	{
		DDRA=0x1;
		PORTA=0x1;
	}
	break;
	//toggle led
	case 2:
	{
		DDRA=0x1;
		while(1)
		{
			PORTA=0x1;
			_delay_ms(1000);
			PORTA=0X0;
			_delay_ms(1000);
		}
	}
	break;
	//led animation
	case 3:
	{
		DDRA=0xf;
		while(1)
		{
			for(int i=0;i<4;i++)
			{
				PORTA=(0x1<<i);
				_delay_ms(1000);
			}
		}
	}

	}
}
