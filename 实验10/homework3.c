#include<stdio.h>
int main()
{char s1[80],s2[80],i,j;
puts("�����һ���ַ�����");
gets(s1);
puts("����ڶ����ַ�����");
gets(s2);
for(i=0;i<80;i++)
	{if(s1[i]=='\0')
	break;
	}
for(j=0;j<80&&s2[j]!='\0';i++,j++)
	{s1[i]=s2[j];
	}
s1[i]='\0';
printf("%s\n",s1);
return 0;
}