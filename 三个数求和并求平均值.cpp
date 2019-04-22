#include <stdio.h>
main()
{
	float a,b,c,d,e;
	printf("请输入三个单精度数：");
	scanf("%f%f%f",&a,&b,&c);
	d=a+b+c;
	e=d/3.0;
	printf("三个数的和为%.3f，均值为%.3f",d,e);
	return 0;
	
 } 
