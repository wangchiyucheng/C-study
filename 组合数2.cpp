#include<stdio.h> 
main()
{
	int m,k,i,j,fenzi=1,fenmu=1;
	long p;
	printf("Input m,k (m>=k>0):");
	scanf("%d,%d",&m,&k);
	while(m<k||m<0||k<0)
	{
		printf("Input m,k (m>=k>0):");
	    scanf("%d,%d",&m,&k);
	}
	for(i=1;i<=k;i++)
	{
		fenzi=fenzi*m;
		m--;
	}
	for(j=1;j<=k;j++)
	{
		fenmu=fenmu*j;
	}
	p=(float)(fenzi/fenmu);
	printf("The combination is %ld\n",p);
}
