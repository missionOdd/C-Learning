#include<stdio.h>
int main()
{char text[80],tran[80],i;
printf("输入一行电文：\n");
gets(text);
for(i=0;i<80&&text[i]!='\0';i++)
	{
	if(text[i]>='A'&&text[i]<='Z')
		{tran[i]=155-text[i];
		}
	else if(text[i]>='a'&&text[i]<='z')
			{tran[i]=219-text[i];
			}
		else tran[i]=text[i];
	}
printf("电文原文：\n");
for(i=0;i<80&&text[i]!='\0';i++)
	{printf("%c",text[i]);
	}
printf("\n电文翻译：\n");
for(i=0;i<80&&text[i]!='\0';i++)
	{printf("%c",tran[i]);
	}
printf("\n");
return 0;
}