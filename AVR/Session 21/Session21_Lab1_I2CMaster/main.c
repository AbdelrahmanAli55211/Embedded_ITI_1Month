/*
 * main.c

 *
 *  Created on: Aug 2, 2024
 *      Author: DELL
 */
#include"LIB/STD_Types.h"
#include"LIB/BIT_Math.h"
#include"MCAL/MDIO/DIO_Interface.h"
#include "MCAL/MDIO/DIO_Config.h"
#include "MCAL/MI2C/I2C_int.h"
#include "MCAL/MI2C/I2C_conf.h"
#include"util/delay.h"
int main()
{
	MTWI_voidMasterInt(F_CPU/16);
	for(int i='A';i<'E';i++)
	{
		MTWI_voidMasterSendStartCondition();
		MTWI_voidMasterSendAddress(0x51);
		MTWI_voidMasterSendData(i);
		MTWI_voidMasterSendStopCondition();
	}
	while(1)
	{

	}
	return 0;
}
