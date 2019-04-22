#include <stdio.h>
main()
{
	int year;
	printf("Input year:\n");
	scanf("%d",&year);
	if(year%4==0&&year%100!=0||year%400==0) 
	printf("Yes");
	else
	printf("No");
	return 0;
}
