#include <stdio.h>
int MinCommonMultiple(int a,int b);
main()
{
    int a, b, x;
    printf("Input a,b:");
    scanf("%d,%d",&a,&b); 
    x=MinCommonMultiple(a,b);
    printf("MinCommonMultiple = %d\n",x);
    return 0;
}
int MinCommonMultiple(int a, int b)
{	
    int i;
    for (i=1; i<a*b; i++)
    {
        if (i%a==0 || i%b==0)
            return a*b;
    }}


