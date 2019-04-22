#include<stdio.h>
int main()
{
	float F,C;
	printf("Please input fahr: ");
	scanf("%f",&F);
	C = (F-32)*5.0/9.0;
	printf("The cels is: %.2f\n",C);
	return 0;
}
