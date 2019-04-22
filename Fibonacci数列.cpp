#include <stdio.h>
int count;
long fib(int n);
int main()
{
    int n,i,x;
    printf("Input n:"); 
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	count=0;
    	x=fib(i);
    	printf("Fib(%d)=%d, count=%d\n",i,x,count);
	}
    return 0;
}
long fib(int n)
{
	count++;
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return (fib(n-1)+fib(n-2));
	}
 } 

