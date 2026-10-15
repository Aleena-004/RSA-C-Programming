//call by refernce//
#include<stdio.h>
#include<conio.h>
void change(int *x)
{
	printf("value in x = %d\n",*x);
	*x=10;
	printf("inside function= %d\n",*x);
}
void main()
{
	int a=20;
	printf("BEFORE FUNCTION CALL = a= %d\n",a);
	change(&a);
	printf("AFTER FUNCTION CALL= a=%d\n",a);
	
}
