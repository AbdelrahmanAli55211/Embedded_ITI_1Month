/*
 * SM_Program.c

 *
 *  Created on: Aug 12, 2024
 *      Author: DELL
 */
#include "../../LIB/STD_Types.h"
#include "../../LIB/BIT_Math.h"
#include "../../MCAL/MDIO/DIO_Interface.h"
#include "../../MCAL/MDIO/DIO_Config.h"
#include "SM_Interface.h"

void HServoMotor(f32 A_Angle)
{

	f32 L_OCRAValue;
	MDIO_void_SetDir(DIO_PORTD,PIND5,PIN_OUTPUT);
	set_bit(TCCR1B,1);
	clear_bit(TCCR1B,0);
	clear_bit(TCCR1B,2);

	clear_bit(TCCR1A,0);
	set_bit(TCCR1A,1);
	set_bit(TCCR1B,3);
	set_bit(TCCR1B,4);
	ICR1=19999;

	clear_bit(TCCR1A,6);
	set_bit(TCCR1A,7);

	if(A_Angle>=0 &&A_Angle<=90 )
	{
		L_OCRAValue=1.5+A_Angle*0.005555555;//there is 10^3 needed
	}
	else if (A_Angle>=-90 && A_Angle<=0)
	{
		L_OCRAValue=1.5-A_Angle*-0.005555555;
	}
	L_OCRAValue=(L_OCRAValue*0.001)/(8.0/(8*1000000));
	OCR1A=L_OCRAValue;
}
