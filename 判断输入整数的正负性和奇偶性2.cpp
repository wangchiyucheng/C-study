#include <stdio.h>
main()
{
	int x;
	printf("Input m:");
	scanf("%d",&x);
	if(x%2==0&&x>0)
	{
	    printf("%d is a positive even\n",x);	
	}
	if(x%2==0&&x<0)
	{
		printf("%d is a negative even\n",x);
	}
	if(x%2!=0&&x>0)
	{
		printf("%d is a positive odd\n",x);
	}
	if(x%2!=0&&x<0)
	printf("%d is a negative odd\n",x);
	if(x==0)
	printf("%d is zero. It is an even\n",x);
}
