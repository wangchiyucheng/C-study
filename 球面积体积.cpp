#include<stdio.h>
main()
{
	double r,s,v;
	printf("Input r:");
	scanf("%lf",&r);
	s=4*r*r*3.14159;
	v=4/3.0*r*r*r*3.14159;
	printf("surface = %lf\n",s);
	printf("volume = %lf\n",v);
 } 
