#include<stdio.h>
#define N 15
int main()
{int a[N][N],i,j,num,n,flag=1;
char p;
while(flag)
{printf("输入n，n是在1-15之间的奇数：");
scanf("%d",&n);
while(1)
	{if(n%2==0||n<1||n>15)
		{printf("输入有误，请重新输入:");
		scanf("%d",&n);
		}
	else
		break;
	}
for(i=0;i<n;i++)
	{for(j=0;j<n;j++)
		{a[i][j]=0;}
	}
i=0;
j=(n-1)/2;
a[i][j]=1;
for(num=2;num<=n*n;num++)
{	i--;
	j++;	
	if(i<0)
	{i=n-1;}
	if(j>=n)
	{j=0;}
	if(a[i][j]!=0)
	{if(i==(n-1))
	{i=1;}
	else i=i+2;
	if(j==0)
	{j=n-1;}
	else j--;

	}
	a[i][j]=num;
}
for(i=0;i<n;i++)
	{for(j=0;j<n;j++)
		{printf("%5d",a[i][j]);}
	printf("\n");
	}
printf("是否重新输入n(是就输入y，否就输入n)：");
scanf(" %c",&p);
if(p=='n'||p=='N')
	flag=0;
}
return 0;
}