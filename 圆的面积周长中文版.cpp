#include <stdio.h>
#define pi 3.14
main()
{
	float r,c,s;
	printf("������뾶��ֵ��");
	scanf("%f",&r);
	c=pi*2*r;
	s=pi*r*r;
	printf("�뾶Ϊ%5.2f��Բ�����Ϊ%5.1f,Բ���ܳ�Ϊ%5.1f\n",r,s,c);
	return 0;
}
