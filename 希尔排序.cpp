#include <stdio.h>
void shell_sort(int arr[], int len); 
int main()
{
    int arr[] = {49,38,65,97,76,13,27,49,55,04};
    int len= (int) sizeof(arr) / sizeof(*arr);//sizeof(arr)整个数组的字节；sizeof（指针）=4个字节；用来计算非字符数组的字符个数 
    shell_sort(arr, len);
    int i;
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
    return 0;
}
void shell_sort(int arr[], int len){
	int i;
	int j;
	int k;
	int gap;	//gap是分组的步长
	int temp;	//希尔排序是在直接插入排序的基础上实现的,所以仍然需要哨兵
	for(gap=len/2; gap>0; gap=gap/2)
	{
		for(i=0; i<gap; i++){
			for(j=i+gap; j<len; j=j+gap){	//单独一次的插入排序
				if(arr[j] < arr[j - gap]){
					temp = arr[j];	//哨兵
					k = j - gap;
					while(k>=0 && arr[k]>temp){
						arr[k + gap] = arr[k];
						k = k - gap;
					}
					arr[k + gap] = temp;
				}
			}
		}
	}
}	

