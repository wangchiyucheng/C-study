#include <stdio.h>
main()
{
	int h,m,a,b;
	printf("������h:m\n");
	scanf("%d:%d",&h,&m);
	if(m+45>60)
	{
	a=h+(m+45)/60-1;
	b=m-15;
	printf("ʱ��Ϊ��%d:%d",a,b);
}
	else
{	
	a=h-1;
	b=45+m;
	printf("ʱ��Ϊ��%d:%d",a,b);
}
	return 0;
}
