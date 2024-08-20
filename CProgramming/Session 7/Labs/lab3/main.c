#include "stdio.h"
#include "ST_TYPES.h"
#include "bit_operations.h"

void main(void)
{
	int x=9;
	printf("setting bit 3 of %d: %d\n",x,set_bit(x,3));
	printf("clear bit 3 of %d: %d\n",x,clear_bit(x,3));
	printf("toggle bit 3 of %d: %d\n",x,toggle_bit(x,3));
	printf("read bit 3 of %d: %d\n",x,read_bit(x,3));
}