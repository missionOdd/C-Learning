#include<stdio.h>
int let;dig;spa;oth;
int main()
{void count(char []);
char text[80];
let=0;dig=0;spa=0;oth=0;
printf("����һ���ַ�����");
gets(text);
printf("�ַ���Ϊ��");
puts(text);
count(text);
printf("\n��ĸ��%d\n���֣�%d\n�ո�%d\n�����ַ�%d\n",let,dig,spa,oth);
return 0;
}
void count(char str[])
{int i;
for(i=0;str[i]!='\0';i++)
{if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
	{let++;}
else if(str[i]>='0'&&str[i]<='9')
	{dig++;}
	else if(str[i]==' ')
	{spa++;}
		else oth++;
}
}