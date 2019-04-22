#include <stdio.h>
main()
{
	int X,Y;
	printf("Enter integer X and Y:");
	scanf("%d%d",&X,&Y);
	if(X>Y)
	printf("X>Y\n");
	if(X<Y)
	printf("X<Y\n");
	if(X==Y)
    printf("X=Y\n");
	return 0;
}
