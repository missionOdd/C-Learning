#include<stdio.h>
#include<string.h>
int main()
{char a[80];
void insert(char str[]);
printf("����һ��4λ��:");
gets(a);
insert(a);
printf("�����%s\n",a);
return 0;
}
void insert(char str[])
{int i;
for(i=strlen(str);i>0;i--)
	{str[2*i]=str[i];
	str[2*i-1]=' ';
	}
}