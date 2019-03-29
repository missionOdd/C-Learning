#include<stdio.h>
int main()
{
int i,j,k,num[10];
for(i=0;i<10;i++)
	{
	printf("num[%d]=",i);
	scanf("%d",&num[i]);
	}
for(i=0;i<10;i++)
	{for(j=1;i+j<10;j++)
		{
		if(num[i]>num[i+j])
			{
			k=num[i];
			num[i]=num[i+j];
			num[i+j]=k;
			}
		}
	}
puts("\nThe sorted numbers:");
for(i=0;i<10;i++)
	{
printf("%5d",num[i]);
	}
printf("\n");
}
