#include<stdio.h>
#include<string.h>
main()
{
	char a[100],daxie[26],xiaoxie[26];
	int i,j,k,len;
	printf("�������ַ���\n");
	gets(a);
	len=strlen(a);
	printf("�����ǣ�%s\n",a);
	for(i=0, j='A', k='a'; i<26; daxie[i]=j++, xiaoxie[i]=k++, i++);
	for (i=0; i<len; i++)
        for (j=0; j<26; j++){
            if (a[i]==daxie[j]){
                a[i]=daxie[25-j]; break;
            }
            if (a[i]==xiaoxie[j]){
                a[i]=xiaoxie[25-j]; break;
            }
        }
	a[i++]='\0';
	printf("ԭ���ǣ�%s",a);
 } 
