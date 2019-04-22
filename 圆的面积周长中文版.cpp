#include <stdio.h>
#define pi 3.14
main()
{
	float r,c,s;
	printf("请输入半径的值：");
	scanf("%f",&r);
	c=pi*2*r;
	s=pi*r*r;
	printf("半径为%5.2f的圆的面积为%5.1f,圆的周长为%5.1f\n",r,s,c);
	return 0;
}
