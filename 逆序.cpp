#include<stdio.h>
main()
{
	int a,b,c,e;
	printf("Please enter a positive integer: ");
	scanf("%d",&a);
	b=fabs(a%10);
	c=fabs((a/10)%10);
	e=fabs(a/100);
	if(a>0) 
	printf("%d-->%d%d%d\n",a,b,c,e);
	else
	printf("%d-->-%d%d%d\n",a,b,c,e);
	return 0;
	}
	
	
