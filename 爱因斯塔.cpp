#include <stdio.h>
main()
{
    int find=0,x=0;  
    while (!find)
    {
            if (x%2==1 && x%3==2 && x%5==4 && x%6==5 && x%7==0)  
                {
                        find=1;
                        break; 
         }
                x++ ;
    } 
	printf("x=%d\n",x);   
}
