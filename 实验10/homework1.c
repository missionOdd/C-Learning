#include<stdio.h>
int main()
{
char text[3][80];
int i,j,upp=0,low=0,dig=0,spa=0,oth=0;
for(i=0;i<3;i++)
	{printf("输入第%d行文字\n",i+1);
	gets(text[i]);
	for(j=0;j<80&&text[i][j]!='\0';j++)
		{if(text[i][j]>='A'&&text[i][j]<='Z')
			upp++;
		else if(text[i][j]>='a'&&text[i][j]<='z')
				low++;
			else if(text[i][j]>='0'&&text[i][j]<='9')
					dig++;
				else if(text[i][j]==' ')
						spa++;
					else oth++;
		}			
	}
printf("大写字母：%d\n小写字母：%d\n数字：%d\n空格：%d\n其他字符：%d\n",upp,low,dig,spa,oth);
return 0;
}
