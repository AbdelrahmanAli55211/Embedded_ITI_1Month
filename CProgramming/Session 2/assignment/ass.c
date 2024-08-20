#include "stdio.h"
void main(void)
{
	int x;
	printf("Enter problem number: ");
	scanf("%d",&x);
	switch(x)
	{
	case 1: //Assignment 1
		{
			int num,fact=1;
			printf("Enter a number: ");
			scanf("%d",&num);
			while(num!=0)
			{
				fact*=num;
				num--;
			}
			printf("Factorial= %d",fact);
		}
		break;
	case 2: //Assignment 2
		{
			for (int i=1;i<=6;i++)
			{
				for(int j=5;j>=i;j--)
					printf(" ");
				for(int k=1;k<2*i;k++)
					printf("*");
				printf("\n");
			}
		}
		break;
	case 3: //Bonus Assignment
		{
			int count=1;
			for (int i=1;i<=5;i++)
			{
				for (int j=5;j>=i;j--)
				{
					printf(" ");
				}
				for(int k=1;k<=i;k++)
				{
					printf("%d",count);
					if(k==i && i!=1)
					{
						count--;
						break;
					}
					count++;
				}
				for(int m=1;m<i;m++)
				{
					printf("%d",count);
					if (m==i-1)
					{
						count++;
						break;
					}
					count--;
				}
				printf("\n");

			}
		}
	}
}