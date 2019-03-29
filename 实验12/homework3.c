#include<stdio.h>
#include<string.h>
int main()
{char a[80];
void insert(char str[]);
printf("输入一个4位数:");
gets(a);
insert(a);
printf("输出：%s\n",a);
return 0;
}
void insert(char str[])
{int i;
for(i=strlen(str);i>0;i--)
	{str[2*i]=str[i];
	str[2*i-1]=' ';
	}
}