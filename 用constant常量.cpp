#include<stdio.h>
#define PI 3.14159
main()
{
	float r,c,s;
	printf("Input r:");
	scanf("%f",&r);
	c=2*r*PI;
	s=r*r*PI;
	printf("printf WITHOUT width or precision specifications:\n");
	printf("circumference = %f, area = %f\n",c,s);
	printf("printf WITH width and precision specifications:\n");
	printf("circumference = %7.2f, area = %7.2f\n",c,s);
	return 0;
	
}
