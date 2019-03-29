#include<stdio.h>
int main()
{
	int num[11]={1,2,3,10,15,20,24,40,53,100};
	int i,j,k;
	
for(i=0;i<10;i++)
	{
	printf("%5d",num[i]);
	}
printf("\n新增数据：");
scanf("%d",&num[10]);
for(i=0;i<11;i++)
	{for(j=1;i+j<11;j++)
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
for(i=0;i<11;i++)
	{
printf("%5d",num[i]);
	}
printf("\n");
}
