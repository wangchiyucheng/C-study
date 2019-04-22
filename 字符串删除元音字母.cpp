#include<stdio.h>
#include<string.h>
main()
{
    printf("Enter a string to delete vowels\n");
	char a[100];
	int i,j;
	gets(a);
	int len=strlen(a);
	for(i=0,j=0;i<len;i++)
	{
		if(a[i]!='A'&&a[i]!='E'&&a[i]!='I'&&a[i]!='U'&&a[i]!='O'&&a[i]!='a'&&a[i]!='e'&&a[i]!='u'&&a[i]!='o'&&a[i]!='i')
		{
			a[j++]=a[i];
		}	
	}
	a[j++]='\0';
	printf("String after deleting vowels: %s\n",a);
}
