#include <stdio.h>
#include <math.h> 
int main()
{
	int n,a,b,sum,sub,multi;
	float dev;
	printf("please input n:\n");
	scanf("%d",&n);
	a=n/100;
	b=n%100;
	sum=a+b;
	sub=a-b;
	multi=a*b;
	printf("%d,%d\n",a,b);
	printf("sum=%d,sub=%d,multi=%d\n",sum,sub,multi);
	if(b==0)
	{
	printf("the second operater is zero!\n");
}
	else
	dev=(float)a/b;
	printf("dev=%.2f,mod=%d\n",dev,a%b);
	return 0; 
}
