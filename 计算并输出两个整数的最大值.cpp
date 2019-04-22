#include <stdio.h>
main()
{
	int a,b;
	printf("Input a, b:");
	scanf("%d,%d",&a,&b);
	if(a<b)
	printf("max = %d\n",b);
	else
	printf("max = %d\n",a); 
}
