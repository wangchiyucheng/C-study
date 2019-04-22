#include<stdio.h>
int gcd(int a,int b);
int main()
{
	int a,b,c;
	printf("Input a,b:");
	scanf("%d,%d",&a,&b);
	c=gcd(a,b);
	if(c<0)
	{
		printf("Input error!\n");
	}
	else
	{
		printf("Gcd=%d\n",c);
	}
}
int gcd(int a,int b)
{
	int c;
	if(a<=0||b<=0)
	{
		return -1;
	}
	else if(a>=b)
	{
		while(b>0)
		{
			c=a%b;
			a=b;
			b=c;
		}
		return a;
	}
	else if(a<b)
	{
		while(a>0)
	{
		c=b%a;
		b=a;
		a=c;
	}
	return b;
   }
}
