#include<stdio.h>
int main()
{char s1[80],s2[80];
void cyp(char s1[],char s2[]);
printf("输入一个字符串：");
gets(s1);
cyp(s1,s2);
printf("新的字符串为%s\n",s2);
return 0;
}
void cyp(char s1[],char s2[])
{int i,j;
	for(i=0,j=0;s1[i]!='\0';i++)
	{switch(s1[i])
	{case 'a':case 'A':
	case 'e':case 'E':
	case 'i':case 'I':
	case 'o':case 'O':
	case 'u':case 'U':s2[j]=s1[i];j++;
	}
	}
s2[j]='\0';
}