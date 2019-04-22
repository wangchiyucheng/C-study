#include<stdio.h>
main()
{
	int a,b,c,d,e,f;
	scanf("%d",&a);
	b=a/1000;
	c=(a%1000)/100;
	d=((a%1000)%100)/10;
	e=((a%1000)%100)%10;
	f=e*1000+d*100+c*10+b;
	printf("%d",f);
	return 0;
	}
	
	
