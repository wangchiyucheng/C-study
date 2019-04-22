#include<stdio.h>
int a[14]={0};
main()
{
	int i,n,j=1;
	printf("The original order of cards is:"); 
	for(i=1;i<=13;i++)
	{
		n=0;
		while(n!=i)
		{
			if(a[j]==0)
			{
				n++;
				if(n==i)
				{
					a[j]=i;
				}
			}
			j=j==13?1:j+1;
			}
		}
		for(i=1;i<=13;i++)
		{
			printf("%d ",a[i]);	
		}
}
