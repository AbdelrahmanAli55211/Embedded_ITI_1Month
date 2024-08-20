/*
 * main.c
 *
 *  Created on: Jul 31, 2024
 *      Author: DELL
 */
#include <avr/io.h>
#include <util/delay.h>
#include "STD_Types.h"
enum numbers {zero=0b00111111,one=0b00000110,two=0b01011011,three=0b01001111,four=0b01100110,five=0b01101101,six=0b01111101,seven=0b00000111,eight=0b01111111,nine=0b01100111};
int main(void)
{
	u8 arr[]={zero,one,two,three,four,five,six,seven,eight,nine};
	DDRA=0xff;
	while(1)
	{
		for(int i=0;i<10;i++)
		{
			PORTA=arr[i];
			_delay_ms(1000);
		}
	}
	return 0;
}
