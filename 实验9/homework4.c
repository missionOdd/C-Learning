#include<stdio.h>
#define N 15
int main()
{int a[N][N],i,j,num,n,flag=1;
char p;
while(flag)
{printf("����n��n����1-15֮���������");
scanf("%d",&n);
while(1)
	{if(n%2==0||n<1||n>15)
		{printf("������������������:");
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
printf("�Ƿ���������n(�Ǿ�����y���������n)��");
scanf(" %c",&p);
if(p=='n'||p=='N')
	flag=0;
}
return 0;
}