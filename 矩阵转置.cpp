#include <stdio.h>
main()
{
    int  a[5][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21}, i, j;
    int b[5][5];
    printf("before transposition\n");
    for (i=0; i<=4; i++)
       for (j=0; j<=4; j++)
            printf("%4d%c", a[i][j],j-4?' ':'\n' ); 
    for (i=0; i<=4; i++)
    {
       for (j=0; j<=4; j++)
       {
            b[j][i]=a[i][j];
       }
   }
    printf("after transposition\n");
    for (i=0; i<=4; i++)
       for (j=0; j<=4; j++)
            printf("%4d%c", b[i][j],j-4?' ':'\n' );
}
