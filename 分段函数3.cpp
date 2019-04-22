#include <stdio.h>
#include <math.h>
main()
{
	float x,y;
	printf("Please input x:\n");
	scanf("%f",&x);
	if(x<0)
	y=3*x-1;
	if(x>=10)
	y=x;
	if(x>=0&&x<10)
	y=exp(x);
	printf("y = %.2f\n",y);
}
