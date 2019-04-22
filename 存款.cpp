#include <stdio.h>
#include <math.h>
main()
{
	int m,y;
	double r,s,a;
	printf("Enter money:");
	scanf("%d",&m);	
	printf("Enter year:");
	scanf("%d",&y);	
	printf("Enter rate:");	
	scanf("%lf",&r);
    a=pow(r+1,y);
    s=m*a;
    printf("sum = %.2f\n",s);
    return 0;
}
