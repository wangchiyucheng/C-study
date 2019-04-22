#include<stdio.h>
main()
{
	float x;
	printf("Please input x:");
	scanf("%f",&x);
	if(x<1.0)
    printf("y = %.2f\n",x);
	if(x>=10.0)
	{
	printf("y = %.2f\n",3*x-11);
	}
	if(x>=1.0&&x<10.0)
	{
	printf("y = %.2f\n",2*x-1);
}
}
