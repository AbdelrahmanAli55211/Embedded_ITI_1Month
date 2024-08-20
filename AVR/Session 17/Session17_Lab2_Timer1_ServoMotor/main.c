/*
 * main.c
 *
 *  Created on: Aug 12, 2024
 *      Author: DELL
 */

#include "HAL/HServoMotor/SM_Interface.h"
#include "util/delay.h"
void main(void)
{
	while(1)
	{
		HServoMotor(90);
		_delay_ms(1000);
		HServoMotor(0);
		_delay_ms(1000);
		HServoMotor(-90);
		_delay_ms(1000);

	}
}
