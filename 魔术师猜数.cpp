#include<stdio.h>
int Magic(int m);
int main(){
    int sum,abc;
    printf("Input a sum:") ;
    scanf("%d",&sum);
    abc=Magic(sum);
    if(abc!=-1)
        printf("The number is %d\n",abc);
    else printf("The sum you calculated is wrong!\n");
}
int Magic(int m)
{
    int a,b,c;
    for(a=1;a<10;a++){
        for(b=0;b<10;b++){
            for(c=0;c<10;c++){
                if(m==100*(a+2*b+2*c)+10*(2*a+b+2*c)+(2*a+2*b+c))
                    return 100*a+10*b+c;
            }
        }
    }
    return -1;
}

