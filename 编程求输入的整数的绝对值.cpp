#include <stdio.h>
main()
{
	int x;
	printf("input the value of x:");
	scanf("%d",&x);
	if(x<0)
	{
	x=-x;
	printf("|x|=%d\n",x);
}
	else
	printf("|x|=%d\n",x);
 } 
