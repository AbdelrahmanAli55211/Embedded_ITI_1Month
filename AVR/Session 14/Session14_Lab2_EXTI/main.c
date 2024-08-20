/*
 * main.c
 *
 *  Created on: Aug 10, 2024
 *      Author: DELL
 */
#include "LIB/STD_Types.h"
#include "LIB/BIT_Math.h"
#include "HAL/HLED/LED_Interface.h"
#include "HAL/HLED/LED_Config.h"
#include "MCAL/MGINT/GINT_Interface.h"
#include "MCAL/MGINT/GINT_Config.h"
#include "MCAL/MEXTI/EXTI_Interface.h"
#include "MCAL/MEXTI/EXTI_Config.h"
#include "MCAL/MDIO/DIO_Interface.h"
#include "MCAL/MDIO/DIO_Config.h"

void main(void)
{

	MDIO_void_SetDir(DIO_PORTD,PIND2,PIN_INPUT);
	MDIO_void_SetDir(DIO_PORTD,PIND3,PIN_INPUT);
	MDIO_void_PinWrite(DIO_PORTD,PIND2,HIGH);
	MDIO_void_PinWrite(DIO_PORTD,PIND3,HIGH);
	MDIO_void_PortSetDir(DIO_PORTA,PORT_OUTPUT);
	MEXTI_voidExt0CallBack(HLED_void_LedAnimation1);
	MEXTI_voidExt1CallBack(HLED_void_LedAnimation2);
	MEXTI_voidExtInit();
	MEXTI_voidExtEnable(EXTI_EXTI0);
	MEXTI_voidExtEnable(EXTI_EXTI1);
	MGINT_voidGlobalIntEnable();
	while(1)
	{

	}

}

