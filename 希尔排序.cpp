#include <stdio.h>
void shell_sort(int arr[], int len); 
int main()
{
    int arr[] = {49,38,65,97,76,13,27,49,55,04};
    int len= (int) sizeof(arr) / sizeof(*arr);//sizeof(arr)����������ֽڣ�sizeof��ָ�룩=4���ֽڣ�����������ַ�������ַ����� 
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
	int gap;	//gap�Ƿ���Ĳ���
	int temp;	//ϣ����������ֱ�Ӳ�������Ļ�����ʵ�ֵ�,������Ȼ��Ҫ�ڱ�
	for(gap=len/2; gap>0; gap=gap/2)
	{
		for(i=0; i<gap; i++){
			for(j=i+gap; j<len; j=j+gap){	//����һ�εĲ�������
				if(arr[j] < arr[j - gap]){
					temp = arr[j];	//�ڱ�
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

