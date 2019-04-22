#include <stdio.h>
main()
{
	char n;
	printf("Press a key and then press Enter:");
	scanf("%c",&n);
	if(n>='0'&&n<='9')
	printf("It is a digit character!\n");
	else if(n>='A'&&n<='Z')
	printf("It is an English character!\n");
	else if(n>='a'&&n<='z')
	printf("It is an English character!\n");
	else if(n==32)
	printf("It is a space character!\n");
	else
	printf("It is other character!");
}
