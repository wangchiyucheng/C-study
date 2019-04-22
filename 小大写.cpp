#include<stdio.h>
main()
{
	char c1,c2;
	c1=getchar();
	c2=c1-32;
	printf("please input a lowercase:\n");
	printf("%c %d %d",c2,c2,sizeof(c2));
	return 0;
}

