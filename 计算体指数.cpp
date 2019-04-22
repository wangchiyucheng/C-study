#include <stdio.h>
main()
{
	float t,b;
	int w,a,h;
	printf("Input weight, height:\n");
	scanf("%d,%d",&w,&h);
	a=w*2;
	b=h/100.0;
	t=(float)w/(b*b);
	printf("weight=%d\n",a);
	printf("height=%.2f\n",b);
	printf("t=%.2f\n",t);
 } 
