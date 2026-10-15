#include<stdio.h>
#include<conio.h>
void display(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("reverse of the array is=");
	for(i=0;i<size;i--)
	{
		printf("%d\n",arr[i]);
	}
}
void main()
{
	int arr[]={10,20,30,40};
	display (arr,4);
}
