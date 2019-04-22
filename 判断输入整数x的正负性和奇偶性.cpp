#include <stdio.h>
main()
{
	int x;
	printf("Enter a integer:");
	scanf("%d",&x);
	if(x%2==0&&x>0)
	{
	    printf("The integer is a plus even number\n");	
	}
	if(x%2==0&&x<0)
	{
		printf("This integer is a minus even number\n");
	}
	if(x%2!=0&&x>0)
	{
		printf("This integer is a plus odd number\n");
	}
	if(x%2!=0&&x<0)
	printf("This integer is a minus odd number\n");
	if(x==0)
	printf("This integer is zero.\n");
}
