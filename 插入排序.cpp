#include <stdio.h> 
#include <stdlib.h>   
//插入排序 
void InsertSort(int *a,int len);   
//输出数组中的元素 
void OutputArray(int *a, int len);   
int main() 
{ 
  int a[] = {2, 1, 5, 4, 8, 9, 6};
  int len= (int) sizeof(a) / sizeof(*a);//sizeof(arr)整个数组的字节；sizeof（指针）=4个字节；用来计算非字符数组的字符个数 
  //输出数组中的元素 
  printf("排序前的数据:"); 
  OutputArray(a,len);  
  //插入排序 
  InsertSort(a,len); 
  //输出排序后的结果 
  printf("排序后的数据:"); 
  OutputArray(a,len);  
}  
//插入排序 
void InsertSort(int *a,int len) 
{ 
  for(int i=1;i<len;i++) 
  { 
    int j=i-1;      
    int temp=a[i];//需要插入的数据      
    while(temp<a[j] && j>=0)//当插入的数据小于前面的数据时 
    { 
      a[j+1]=a[j];//将插入的数据的前面的数据向后移动     
      j--; 
    }  
    a[++j]=temp;//插入数据 
  } 
}   
//输出数组中的元素 
void OutputArray(int *a, int len) 
{ 
  for(int i=0; i<len; i++) 
  { 
    printf("%d ",a[i]); 
  } 
  
  printf("\n"); 
} 
