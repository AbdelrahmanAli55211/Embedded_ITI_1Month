/*
 * LM35_Program.c
 *
 *  Created on: Aug 10, 2024
 *      Author: DELL
 */
#include "../../LIB/BIT_Math.h"
#include "../../LIB/STD_Types.h"
#include "../../MCAL/MADC/ADC_Interface.h"
#include "../../MCAL/MADC/ADC_Config.h"
#include "LM35_Interface.h"
#include "LM35_Private.h"
#include "LM35_Config.h"

void HLM35_voidInit(void)
{
	MADC_voidInit();
}



