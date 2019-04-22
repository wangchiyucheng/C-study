#include<stdio.h>
main()
{
	float sum;
	int x;
	for(x=1;x<=100;x++)
	{
		sum+=1.0/x;
	}
	printf("sum=%f\n",sum);
}
