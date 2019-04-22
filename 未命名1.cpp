#include  <stdio.h>
#define N 10
void ReadData(int a[], int n);
void PrintData(int a[], int n);
void Swap(int *x, int *y);
main()
{
    int  a[N], b[N], i, n;
    printf("Input array size(n<=10):");
    scanf("%d",&n);
    printf("Input array a:");
    ReadData(a,n);
    printf("Input array b:");
    ReadData(b,n);
    Swap(a,b);
    printf("Output array a:");
    PrintData(a,n);
    printf("\n");
    printf("Output array b:");
    PrintData(b,n);
}
/* 函数功能：输入数组a的n个元素值 */
void ReadData(int a[], int n)
{
     int i;
     for(i=0;i<n;i++)
     {
     	scanf("%d",&a[i]);
	 }
}
/* 函数功能：输出数组a的n个元素值 */
void PrintData(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    	printf("%5d",a[i]);
	}
}
/* 函数功能：两整数值互换 */
void  Swap(int *x, int *y)
{
    int temp,i;
    for(i=0;i<10;i++)
    {
    	temp=x[i];
    	x[i]=y[i];
    	y[i]=temp;
	}
}
