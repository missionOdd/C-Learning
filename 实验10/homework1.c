#include<stdio.h>
int main()
{
char text[3][80];
int i,j,upp=0,low=0,dig=0,spa=0,oth=0;
for(i=0;i<3;i++)
	{printf("�����%d������\n",i+1);
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
printf("��д��ĸ��%d\nСд��ĸ��%d\n���֣�%d\n�ո�%d\n�����ַ���%d\n",upp,low,dig,spa,oth);
return 0;
}
