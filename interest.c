#include<conio.h>
#include<stdio.h>
int main()
{
	float p,n,r,I;
	printf(" enter the principle amount");
	scanf("%f",&p);
	printf(" enter the number of years");
	scanf("%f",&n);
	printf(" enter the rate of interest");
	scanf("%f",&r);
	I=(p*n*r)/100;
	printf("interest= %f ",I);	
	return 0;
}
