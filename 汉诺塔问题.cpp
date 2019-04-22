#include <stdio.h>

void hanoi(int n, char pillar1, char pillar2, char pillar3);    // 函数声明 
void move(int n, char pillar_from, char pillar_to);     // 函数声明 
int count;                                      // 全局变量 

int main()
{
    int n;

    // 输入汉诺塔层数（即金片数量） 
    printf("Please input the layer number of Hanoi Tower: ");
    scanf("%d",&n);

    // 目的：借助于B，把n个金片从A移动到C 
    hanoi(n, 'A', 'B', 'C');

    return 0;
}

void hanoi(int n, char pillar1, char pillar2, char pillar3)
{
    if (n == 1)
    {
        move(n, pillar1, pillar3);
    }
    else
    {
        // 借助于pillar3，把上面的n-1个金片从pillar1移动到pillar2 
        hanoi(n - 1, pillar1, pillar3, pillar2);

        // 把最下面的第n个金片从pillar1移动到pillar3 
        move(n, pillar1, pillar3);

        // 借助于pillar1，把上面的n-1个金片从pillar2移动到pillar3 
        hanoi(n - 1, pillar2, pillar1, pillar3);
    }
}

void move(int n, char pillar_from, char pillar_to)
{
    count++;    // 统计移动次数 
    printf("step %d: move layer %d, %c --> %c\n", count, n, pillar_from, pillar_to);
}
