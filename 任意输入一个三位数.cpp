#include<stdio.h>
#include <math.h>
main()
{
    int a,b,c,d;
    int sum,i;
    printf("input data is:");
    scanf("%d",&i);
    a=i/1000;
    b=(i/10)%10;
    c=(i/100)%10;
    d=i%10;
    sum=a+b+c+d;
    printf("The sum of the total bit is %d\n",sum);  
	return 0;
}
