#include <stdio.h>
#include <math.h>
main()
{
	int x,y,a,b,result,m,n,i,j;
	printf("Input x:\n");
	scanf("%d",&x);
	m=fabs(((x%1000)%100)%10);
	n=fabs((x%1000)%100)/10;
	i=fabs(x%1000)/100;
	j=fabs(x/1000);
	y=m*1000+n*100+i*10+j;
	a=m*10+n;
	b=i*10+j;
	result=a*a+b*b;
	printf("y=%d\n",y);
	printf("a=%d,b=%d\n",a,b);
	printf("result=%d\n",result);
	return 0;
 } 
