#include<stdio.h>
#include<string.h>
int main()
{void inverse(char str[]);
char str[80];
printf("����һ���ַ�����");
gets(str);
inverse(str);
printf("���������%s\n",str);
return 0;
}
void inverse(char str[])
{int i,j;
char temp;
for(i=0,j=strlen(str);i<(strlen(str)/2);i++,j--)
	{
	temp=str[i];
	str[i]=str[j-1];
	str[j-1]=temp;
	}
}
