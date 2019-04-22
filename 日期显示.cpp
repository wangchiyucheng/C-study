#include <stdio.h>
main()
{
	int a,b,c;
	printf("Enter a date(year month day):\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("You entered the date: %02d/%02d/%d",b,c,a);
	return 0;
}
