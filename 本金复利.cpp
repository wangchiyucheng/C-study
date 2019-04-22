#include <stdio.h>
#include <math.h>
main()
{
	int m,y;
	double r;
	float s;
	printf("Enter money:");
	scanf("%d",&m);
	printf("Enter year:");
	scanf("%d",&y);
	printf("Enter rate:");
	scanf("%lf",&r);
	s=m*pow(1+r,y);
	printf("sum = %.2f\n",s);
}
