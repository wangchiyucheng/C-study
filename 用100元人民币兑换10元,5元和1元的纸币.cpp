#include <stdio.h>
main()
{
	int x,y,z,count;
	count=0;
	for(x=0;x<=10;x++)
	{
		for(y=0;y<=20;y++)
		{
		  	for(z=0;z<=100;z++)
		  	{
			  if(x+y+z==50&&10*x+5*y+1*z==100)
			  {
			  	printf("x = %d, y = %d, z = %d\n",x,y,z);
			  	count++;
							}
						}
		}
	}
    printf("count = %d\n",count);
 } 
