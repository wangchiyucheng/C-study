#include<stdio.h>

int main()
{
    int i, j, total, n;
    i = 1;
    while(1)
        {
            total = i;
            for(j = 0; j < 5; j++)
            {
                total = total * 5;
                if(total % 4 != 0)
                {
                    break;
                }
                total = total / 4;
                total += 1;
            }
            if(j ==5)
            {
                break;
            }
            i++;
        }
        printf("y = %d\n", total);
    return 0;
}
