#include <stdio.h>
main()
{
	char a,b;
	printf("Please input a low-case letter from keyboard:");
	scanf("%c",&a);
	b=a-32;
	printf("The capital letter and its ASCII value are:%c and %d.",b,b);
	return 0;
}
