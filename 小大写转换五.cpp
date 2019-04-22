#include <stdio.h>
main()
{
	char a,b;
	scanf("%c",&a);
	b=a-32;
	printf("please input a lowercase:\n");
	printf("%c %d %d",b,b,sizeof(b));
}
