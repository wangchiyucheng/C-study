#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,d,s,area;
	printf("Input a,b,c:");
	scanf("%f,%f,%f",&a,&b,&c);
	if(a+b<c || a+c<b || b+c<a)
	{
	printf("It is not a triangle\n");
}
	else{
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area=%.4f\n",area);}
	return 0;
 } 
