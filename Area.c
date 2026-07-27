#include<stdio.h>
#include<conio.h>
int main()
{
	int l,b,Area,Peri;
	printf( "      RECTANGLE    ");
	printf("\n Enter the length and breadth");
	scanf("%d%d",&l,&b);
	Area=l*b;
	printf("\nArea= %d" ,Area);
	Peri=2*(l+b);
	printf("\n Perimeter= %d",Peri);
	return 0;
}
