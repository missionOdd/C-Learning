#include<stdio.h>
#include<string.h>
int main()
{char s1[80],s2[80];
int i;
printf("����s1�ַ�����");
scanf("%s",s1);
printf("s1�ַ���Ϊ��%s\n",s1);
for(i=0;i<=strlen(s1);i++)
	{
	s2[i]=s1[i];
	}
printf("s2�ַ���Ϊ��%s\n",s2);
return 0;
}