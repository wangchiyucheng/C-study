#include <stdio.h>

void hanoi(int n, char pillar1, char pillar2, char pillar3);    // �������� 
void move(int n, char pillar_from, char pillar_to);     // �������� 
int count;                                      // ȫ�ֱ��� 

int main()
{
    int n;

    // ���뺺ŵ������������Ƭ������ 
    printf("Please input the layer number of Hanoi Tower: ");
    scanf("%d",&n);

    // Ŀ�ģ�������B����n����Ƭ��A�ƶ���C 
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
        // ������pillar3���������n-1����Ƭ��pillar1�ƶ���pillar2 
        hanoi(n - 1, pillar1, pillar3, pillar2);

        // ��������ĵ�n����Ƭ��pillar1�ƶ���pillar3 
        move(n, pillar1, pillar3);

        // ������pillar1���������n-1����Ƭ��pillar2�ƶ���pillar3 
        hanoi(n - 1, pillar2, pillar1, pillar3);
    }
}

void move(int n, char pillar_from, char pillar_to)
{
    count++;    // ͳ���ƶ����� 
    printf("step %d: move layer %d, %c --> %c\n", count, n, pillar_from, pillar_to);
}
