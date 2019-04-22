#include<stdio.h>
main()
{
	char A; 
	printf("Enter a character:");
	scanf("%c",&A);
	printf("%c %c %c\n",A-1,A,A+1);
	printf("%d %d %d\n",A-1,A,A+1);
	return 0;
}
