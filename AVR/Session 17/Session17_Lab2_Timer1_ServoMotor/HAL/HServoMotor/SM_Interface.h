/*
 * SM_Interface.h
 *
 *  Created on: Aug 12, 2024
 *      Author: DELL
 */

#ifndef HAL_HSERVOMOTOR_SM_INTERFACE_H_
#define HAL_HSERVOMOTOR_SM_INTERFACE_H_
#include "../../LIB/STD_Types.h"
#define TCCR1A	*((volatile u16 *)(0x4F))
#define TCCR1B	*((volatile u16 *)(0x4E))
#define TCNT1H	*((volatile u16 *)(0x4D))
#define TCNT1L	*((volatile u16 *)(0x4C))
#define OCR1A	*((volatile u16 *)(0x4A))
#define OCR1B	*((volatile u16 *)(0x38))
#define TMSK	*((volatile u16 *)(0x40))
#define ICR1	*((volatile u16 *)(0x46))

void HServoMotor(f32 A_Angle);
#endif /* HAL_HSERVOMOTOR_SM_INTERFACE_H_ */
