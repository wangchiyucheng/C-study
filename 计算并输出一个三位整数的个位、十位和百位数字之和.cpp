#include <stdio.h>
main()
{
	int b,b1,b2,b0,sum;
	printf("请输入一个三位整数：");
	scanf("%d",&b);
	b1=b/100;
	b2=(b%100)/10;
	b0=b%10;
	sum=b0+b1+b2;
	printf("b2=%d, b1=%d, b0=%d, sum=%d\n",b1,b2,b0,sum);
 } 
