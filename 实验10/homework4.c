#include<stdio.h>
int main()
{int i,resu;
char s1[80],s2[80];
printf("�����һ���ַ�����\n");
gets(s1);
printf("����ڶ����ַ�����\n");
gets(s2);
for(i=0;i<80&&s1[i]!='\0'&&(s1[i]==s2[i]);)
	{i++;}
if(s1[i]=='\0'&&s2[i]=='\0')
	resu=0;
else  resu=s1[i]-s2[i];
printf("\n���:%d.\n",resu);
return 0;
}