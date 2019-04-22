#include<stdio.h>
int main()
{
	double F,C;
	printf("Please input cels: ");
	scanf("%lf",&C);
	F = C*9.0/5.0+32.0;
	printf("The fahr is: %.2f\n",F);
	return 0;
}
