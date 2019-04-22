#include <stdio.h>
main()
{
	int a,b,c,sum,r;
	float aver;
	printf("Enter three integer: ");
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
	aver=sum/3.0;
	r=sum%3;
	printf("SUM = %4d\nAVERAGE = %.2f  REMAINDER = %3d\n",sum,aver,r);
	return 0;
}
