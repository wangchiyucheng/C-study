#include <stdio.h>
int MinCommonMultiple(int a,int b);
int main()
{
    int a, b, x;
    printf("Input a,b:");
    scanf("%d,%d",&a,&b); 
    x=MinCommonMultiple(a,b);
    if(x<0)
    printf("Input error!\n");
    else
    printf("Least Common Multiple of %d and %d is %d\n",a,b,x);
    return 0;
}
    int MinCommonMultiple(int a, int b)
{	
    int i;
    if(a<b&&a>0&&b>0)
    {
    	for(i=1;i<=1000000000;i++)
    	{
    		if(i%a==0&&i%b==0)
    		{
    			return i;
			}
		}
	}
	else if(a>b&&a>0&&b>0)
	{
		for(i=1;i<=10000000000;i++)
    	{
    		if(i%a==0&&i%b==0)
    		{
    			return i;
			}
		}
	}
	else if(a<=0||b<=0)
	{
		return -1;
	}
	
}


