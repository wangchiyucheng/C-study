#include<stdio.h>
main()
{
	int a,b;
	float c;
	printf("请输入两个整数：");
	scanf("%d%d",&a,&b);
	c=(float)a/b*100;
	printf("%d is %.1f percent of %d",a,c,b);
	return 0;
}
