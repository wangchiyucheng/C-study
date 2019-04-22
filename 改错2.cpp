#include<stdio.h> 
main()
{
    int i;
    char ch;
    float f;
    printf("Please input:\n");
    scanf("%d%c%f", &i,&ch,&f);
    printf("The input integer is : %d \n",i);
	printf("The input character is : %c\n",ch);
    printf("The input float is : %f",f);
    return 0;
}
