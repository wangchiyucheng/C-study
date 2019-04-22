#include<stdio.h>
main()
{
	int a,b,c,e;
	printf("Input x:");
	scanf("%d",&a);
	b=fabs(a%10);
	c=fabs((a/10)%10);
	e=fabs(a/100); 
	printf("y = %d%d%d\n",b,c,e);
	return 0;
	}
	
	
