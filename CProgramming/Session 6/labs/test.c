#include "stdio.h"
struct emp
{
	char x;
	short y;
};
void main(void)
{
	printf("%d",sizeof(struct emp));
}