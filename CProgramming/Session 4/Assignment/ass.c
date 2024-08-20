#include "stdio.h"
int fun(int ,int*,int**);
void read(int arr[],int size);
void sort(int arr[],int size);
void print(int arr[],int size);
void main(void)
{
	int prob_num;
	printf("Enter Problem number: ");
	scanf("%d",&prob_num);
	switch(prob_num)
	{
	case 1: //Assignment 1: Writing a code of the board
		{
			int c,*b,**a;
			c=4,b=&c,a=&b;
			printf("%d",fun(c,b,a));
		}
		break;
	case 2://Assignment 2: swapping elements of array
		{
			int arr1[10],arr2[10],temp[10];
			read(arr1,10);read(arr2,10);
			printf("Values before swapping\n");
			for(int i=0;i<10;i++)
			{
				printf("%d %d\n",*(arr1+i),*(arr2+i));
			}
			for(int i=0;i<10;i++)
			{
				*(temp+i)=*(arr1+i);
				*(arr1+i)=*(arr2+i);
				*(arr2+i)=*(temp+i);
			}
			printf("Values after swapping\n");
			for(int i=0;i<10;i++)
			{
				printf("%d %d\n",*(arr1+i),*(arr2+i));
			}
		}
		break;
	case 3://Assignment 3: bubble sort
		{
			int arr[10];
			read(arr,10);
			sort(arr,10);
			print(arr,10);
		}
		break;
	case 4://Assignment 4 (last in the lecture pdf)
		{
			int x=3,y=4,z=5,*temp;
			int *p=&x,*q=&y,*r=&z;
			printf("%d %d %d %d %d %d %d %d %d\n",x,y,z,p,q,r,*p,*q,*r);
			printf("Swapping Pointers\n");
			temp=r;
			r=p;
			p=q;
			q=temp;
			printf("%d %d %d %d %d %d %d %d %d\n",x,y,z,p,q,r,*p,*q,*r);
		}

	}
}

int fun(int c,int *py,int **ppz)
{
	int y,z;
	**ppz+=1; //c=5
	z=**ppz; //z=5
	*py+=2; // c=7
	y=*py; //y=7
	c+=3; //x=7
	return c+y+z; //19
}
void read(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",arr+i);
	}
}
void sort(int arr[],int size)
{ //selection sort not bubble sort
	int temp;
	for(int i=0;i<size-1;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if (arr[j]<arr[i])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}

		}
	}
}
void print(int arr[],int size)
{
	for (int i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}
}
