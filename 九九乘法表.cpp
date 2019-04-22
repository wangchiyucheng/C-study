#include<stdio.h>
main()
{
	int a,b,c;
	for(a=1;a<=9;a++)
	{
		for(b=1;b<=9;b++)
		{
			c=a*b;
			if(a>=b)
			{	
			printf("%4d",c);
		}
		}
		printf("\n");
	}
}
