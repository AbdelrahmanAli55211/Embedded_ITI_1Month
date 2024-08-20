#include "../../LIB/STD_Types.h"
#include "../../LIB/BIT_Math.h"
#include "SPI_Register.h"
#include "SPI_Private.h"
#include "SPI_Interface.h"
#include "SPI_Config.h"
#include "util/delay.h"

void MSPI_voidInit(void)
{
#if SPI_MODE==SPI_MASTER
	/*Setting Dierction of master pins*/
	set_bit(DDRB,PINB4);
	set_bit(DDRB,PINB5);
	clear_bit(DDRB,PINB6);
	set_bit(DDRB,PINB7);

	/*Setting master mode*/
	set_bit(SPCR,MSTR);

	/*Setting Prescaler*/
#if CLK_RATE==Prescaler_2
	clear_bit(SPCR,SPR0);
	clear_bit(SPCR,SPR1);
	set_bit(SPSR,SPI2X);
#elif CLK_RATE==Prescaler_4
	clear_bit(SPCR,SPR0);
	clear_bit(SPCR,SPR1);
	clear_bit(SPSR,SPI2X);
#elif CLK_RATE==Prescaler_8
	set_bit(SPCR,SPR0);
	clear_bit(SPCR,SPR1);
	set_bit(SPSR,SPI2X);
#elif CLK_RATE==Prescaler_16
	set_bit(SPCR,SPR0);
	clear_bit(SPCR,SPR1);
	clear_bit(SPSR,SPI2X);
#elif CLK_RATE==Prescaler_32
	clear_bit(SPCR,SPR0);
	set_bit(SPCR,SPR1);
	set_bit(SPSR,SPI2X);
#elif CLK_RATE==Prescaler_64
	clear_bit(SPCR,SPR0);
	set_bit(SPCR,SPR1);
	clear_bit(SPSR,SPI2X);
#elif CLK_RATE==Prescaler_128
	set_bit(SPCR,SPR0);
	set_bit(SPCR,SPR1);
	clear_bit(SPSR,SPI2X);
#endif

	/*Setting CLK PHASE*/

#if CLK_PHASE==Sample_Setup
	clear_bit(SPCR,CPHA);
#elif CLK_PHASE==Setup_Sample
	set_bit(SPCR,CPHA);
#endif

	/*Setting Clk Polarity*/
#if CLK_POLARITY==Rising_Falling
	clear_bit(SPCR,CPOL);
#elif CLK_POLARITY==Falling_Rising
	set_bit(SPCR,CPOL);
#endif

	/*Setting data order*/
#if DATA_ORDER==LSB_FIRST
	set_bit(SPCR,DORD);
#elif DATA_ORDER==MSB_FIRST
	clear_bit(SPCR,DORD);
#endif

	/*Enable SPI*/
	set_bit(SPCR,SPE);
#elif SPI_MODE==SPI_SLAVE
	/*Setting Dierction of slave pins*/
	clear_bit(DDRB,PINB4);
	clear_bit(DDRB,PINB5);
	set_bit(DDRB,PINB6);
	clear_bit(DDRB,PINB7);

	/*Setting master mode*/
	clear_bit(SPCR,MSTR);

	/*Setting SS to be high*/
	set_bit(PORTB,PINB4);

	/*Setting data order*/
#if DATA_ORDER==LSB_FIRST
	set_bit(SPCR,DORD);
#elif DATA_ORDER==MSB_FIRST
	clear_bit(SPCR,DORD);
#endif

	/*Enable SPI*/
	set_bit(SPCR,SPE);
#endif
	_delay_ms(200);
}
void MSPI_voidMasterSendData(u8 A_u8Data)
{
	/*prepare slave to recieve*/
	clear_bit(PORTB,PINB4);

	/*Writing data to be transmitted into spdr*/
	SPDR=A_u8Data;

	/*booling until transmit is done*/
	while(read_bit(SPSR,SPIF)==0)
	{

	}
	_delay_ms(1);

	/*Stopping slave from recieving*/
	set_bit(PORTB,PINB4);
}
u8 MSPI_u8SlaveRecieveData(void)
{
	/*Preparing dummy data to be exchanged with the master*/
	SPDR=DUMMY_DATA;

	/*Waiting until the master decides to send data*/
	while(read_bit(SPSR,SPIF)==0)
	{

	}
	return SPDR;
}
