#include "stdio.h"
int sum(int*x,int*y)
{
	int sum=*x+*y;
	return sum;
}
void sum_sub(int*x,int*y,int *z,int*w)
{
	*z=*x+*y;
	*w=*x-*y;
}
int read_print(int *p,int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		printf("Enter a number: ");
		scanf("%d",p+i);
	}
	for(int i=0;i<size;i++)
	{
		sum+=*(p+i);
	}
	return sum;
}
void main()
{
	int x;
	printf("Enter problem number: ");
	scanf("%d",&x);
	switch(x)
	{
	case 1:
		{
			int num=10;
			printf("%d\n",num);
			int *ptr=&num;
			*ptr=20;
			printf("%d",num);
		}
		break;
	case 2:
		{
			int num1,num2;
			printf("Enter 2 numbers: ");
			scanf("%d%d",&num1,&num2);
			printf("%d",sum(&num1,&num2));
		}
		break;
	case 3:
		{
			int num1,num2,sum,sub;
			printf("Enter 2 numbers: ");
			scanf("%d%d",&num1,&num2);
			int *z=&sum,*w=&sub;
			sum_sub(&num1,&num2,z,w);
			printf("%d %d",*z,*w);
		}
		break;
	case 4:
		{
			int arr[10];
			printf("%d",read_print(arr,10));
		}
		break;
	case 5:
		{
			int arr[7]={6,5,1,8,20,3,16},temp;
			for(int i=0;i<6;i++)
			{
				for(int j=i+1;j<7;j++)
				{
					if(arr[j]<arr[i])
					{
						temp=arr[i];
						arr[i]=arr[j];
						arr[j]=temp;
					}
				}
			}
			for (int i=0;i<7;i++)
			{
				printf("%d\n",arr[i]);
			}
		}
	}
}