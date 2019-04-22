#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n=15,i,j=0;
    int a[100];
    //scanf("%d", &n);
    if(n==0||n==1)
    {
    	a[0]=a[1]=1;
	}
	else
	{
		for(i=2;i<15;i++)
		{
			a[0]=a[1]=1;
		    a[i]=a[i-1]+a[i-2];
		}
		
	}
    	for(j=0;j<5;j++)
		{
			printf("%6d",a[j]);
		}
		printf("\n");
		for(j=5;j<10;j++)
		{
			printf("%6d",a[j]);
		}
        
    return 0;
}

