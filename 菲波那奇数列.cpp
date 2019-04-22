#include <stdio.h>
main()
{
	int n,i,a,b;
	printf("Input n=?");
	scanf("%d",&n);	
	for(i=0,a=1,b=0;i<=(n-2);i++)
	{
		a=a+b;
		b=a-b;	
		}
		printf("No. %d is %d\n",n,a);	
}
