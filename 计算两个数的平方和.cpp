#include<stdio.h>
#include <math.h>
main()
{
	float a,b,x,y;
	printf("Please input x and y:\n");
	scanf("%f,%f",&x,&y);
	a=pow(x,2);
	b=pow(y,2);	
	printf("result=%.2f\n",a+b);
	return 0;
 } 
