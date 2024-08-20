#include "stdio.h"
#include "stdint.h"
struct grades
{
	float math;
	float lang;
	float physics;
	float chem;
};
typedef struct 
{
	int st_id;
	struct grades st_grades;
}student;
void main(void)
{
	student arr[4];
	uint32_t id;
	uint32_t test=0;
	for(int i=0;i<2;i++)
	{
		printf("Enter student %d data(id,4grades): ",i+1);
		scanf("%d",&arr[i].st_id);
		scanf("%f",&arr[i].st_grades.math);
		scanf("%f",&arr[i].st_grades.lang);
		scanf("%f",&arr[i].st_grades.physics);
		scanf("%f",&arr[i].st_grades.chem);
	}
	printf("Enter Student ID: ");
	scanf("%d",&id);
	for(int i=0;i<2;i++)
	{
		if(id==arr[i].st_id)
		{
			test=1;
			printf("Math Grade= %0.0f\n",arr[i].st_grades.math);
			printf("Language Grade= %0.0f\n",arr[i].st_grades.lang);
			printf("Physics Grade= %0.0f\n",arr[i].st_grades.physics);
			printf("Chemistry Grade= %0.0f\n",arr[i].st_grades.chem);
		}
	}
	if(test==0)
		printf("id not found");

}