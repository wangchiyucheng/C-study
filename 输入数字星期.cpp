#include <stdio.h>
main()
{
	int n;
	printf("Input a single numeral:");
	scanf("%d",&n);
	switch(n)
	{
		case 1:printf("Monday\n");break;
		case 2:printf("Tuesday\n");;break;
		case 3:printf("Wednesday\n");;break;
		case 4:printf("Thursday\n");;break;
		case 5:printf("Friday\n");;break;
		case 6:printf("Saturday\n");;break;
		case 0:printf("Sunday\n");break;
		default:printf("%d",n);
	}
}
