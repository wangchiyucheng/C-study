#include <stdio.h>
int main()
{
	int a,b;
	printf("Please input your age: ");
	scanf("%d",&a);
	b=a*365*24*60*75;
	printf("The heart beats in your life: %d\n",b);
	return 0;
	
}
