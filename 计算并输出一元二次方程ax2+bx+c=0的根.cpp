#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,p,q,x1,x2;
	printf("Please enter the coefficients a,b,c:");
	scanf("%f,%f,%f",&a,&b,&c);
	p=-b/(2.0*a);
	q=sqrt(b*b-4*a*c)/(2.0*a);
	x1=p-q;
	x2=p+q;
	printf("x1=%7.4f, x2=%7.4f\n",x1,x2); 
}
