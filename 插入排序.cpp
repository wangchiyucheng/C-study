#include <stdio.h> 
#include <stdlib.h>   
//�������� 
void InsertSort(int *a,int len);   
//��������е�Ԫ�� 
void OutputArray(int *a, int len);   
int main() 
{ 
  int a[] = {2, 1, 5, 4, 8, 9, 6};
  int len= (int) sizeof(a) / sizeof(*a);//sizeof(arr)����������ֽڣ�sizeof��ָ�룩=4���ֽڣ�����������ַ�������ַ����� 
  //��������е�Ԫ�� 
  printf("����ǰ������:"); 
  OutputArray(a,len);  
  //�������� 
  InsertSort(a,len); 
  //��������Ľ�� 
  printf("����������:"); 
  OutputArray(a,len);  
}  
//�������� 
void InsertSort(int *a,int len) 
{ 
  for(int i=1;i<len;i++) 
  { 
    int j=i-1;      
    int temp=a[i];//��Ҫ���������      
    while(temp<a[j] && j>=0)//�����������С��ǰ�������ʱ 
    { 
      a[j+1]=a[j];//����������ݵ�ǰ�����������ƶ�     
      j--; 
    }  
    a[++j]=temp;//�������� 
  } 
}   
//��������е�Ԫ�� 
void OutputArray(int *a, int len) 
{ 
  for(int i=0; i<len; i++) 
  { 
    printf("%d ",a[i]); 
  } 
  
  printf("\n"); 
} 
