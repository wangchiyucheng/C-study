#include <stdio.h>
main()
{
	float x,y;
	printf("input x:\n");
	scanf("%f",&x);
	if(x>=-7&&x<=10)
	y=5*x*x-4*x+6;
	else
	y=x/3+32;
	printf("y=%.3f",y);
}
