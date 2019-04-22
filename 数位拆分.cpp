#include <stdio.h>
main()
{
	int n,a,b,sum,sub,multi,mod;
	float dev;
	printf("please input n:");
	scanf("%d",&n);
	a=n/100;
	b=n%100;
	sum=a+b;
	sub=a-b;
	multi=a*b;
	dev=a/b;
	mod=a%b;
	if(b==0)
	{
	printf("sum=%d,sub=%d,multi=%d\n",sum,sub,multi);
	printf("the second operater is zero!\n");
}
	else
	printf("sum=%d,sub=%d,multi=%d\n",sum,sub,multi);
	printf("dev=%.2f,mod=%d\n",dev,mod);
}
