#include <stdio.h>
#define pi 3.14
main()
{
	float r,s,c;
	printf("请输入半径的值：");
	scanf("%f",&r);
	s=pi*r*r;
	c=pi*r*2;
	printf("半径为%5.2f的圆的面积为%5.1f,圆的周长为%5.1f\n",r,s,c);
}
