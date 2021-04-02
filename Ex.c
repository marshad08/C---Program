#include<stdio.h>
#include<stdlib.h>
#include "pow.c"
struct date{
	unsigned int d:5,m:4,y;
}d1;
struct student
{
	char name[10];
	//int age,Roll_no;
	float marks;
	double salary;
}s;
typedef union 
{
	int x;
	float y;
	double z;
}t;
int main()
{
	int i=1;
	int *p;
	p=(int *)malloc(sizeof(int));
	float *q;
	q=(float *)calloc(5,sizeof(float));
	for(i=0;i<5;i++)
	  printf("%d ",q[i]);
	printf("\n");
	t t1;
	printf("%d %d %d %d %d",sizeof(t1.x),sizeof(p),sizeof(q),power(2,10),sizeof(d1));
	free(p);
	free(q);
	return 0;
}
