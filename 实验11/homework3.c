#include<stdio.h>
#define N 3
int a[N][N];
int main()
{//static 
int i,j;
void convert(int a[][3]);
printf("输入一个整数数组：\n");
for(i=0;i<N;i++)
	{
	for(j=0;j<N;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
printf("原数组为：\n");
for(i=0;i<N;i++)
	{
	for(j=0;j<N;j++)
		{
		printf("%5d",a[i][j]);
		}
	printf("\n");
	}
convert(a);
printf("置换数组为：\n");
for(i=0;i<N;i++)
	{
	for(j=0;j<N;j++)
		{
		printf("%5d",a[i][j]);
		}
	printf("\n");
	}
return 0;
}

void convert(int a[][3])
{int i,j,temp;
	for(i=0;i<N;i++)
	{for(j=i+1;j<N;j++)
		{temp=a[i][j];
		a[i][j]=a[j][i];
		a[j][i]=temp;
		}
	}
}