#include<stdio.h>
#include<string.h>
int main()
{char s1[80],s2[80],s[80];
void concatenate(char s1[],char s2[],char s3[]);
printf("�����ַ���1��");
scanf("%s",s1);
printf("�����ַ���2��");
scanf("%s",s2);
printf("����µ��ַ�����");
concatenate(s1,s2,s);
printf("%s\n",s);
return 0;
}
void concatenate(char s1[],char s2[],char s3[])
{int i,j;
for(i=0;i<strlen(s1);i++)
	{
	s3[i]=s1[i];
	}
for(j=0;j<=strlen(s2);j++)
	{
	s3[i+j]=s2[j];
	}

}