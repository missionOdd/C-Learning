#include<stdio.h>
#define N 3
int a[N][N];
int main()
{//static 
int i,j;
void convert(int a[][3]);
printf("����һ���������飺\n");
for(i=0;i<N;i++)
	{
	for(j=0;j<N;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
printf("ԭ����Ϊ��\n");
for(i=0;i<N;i++)
	{
	for(j=0;j<N;j++)
		{
		printf("%5d",a[i][j]);
		}
	printf("\n");
	}
convert(a);
printf("�û�����Ϊ��\n");
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