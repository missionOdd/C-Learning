#include<stdio.h>
#include<math.h>
int main()
{
	int num[101],i,j,n,null=0;
for(i=1;i<=100;i++)
	{
	num[i]=i;
	}
num[1]=null;
for(i=2;i<sqrt(100);i++)
	{
	for(j=i+1;j<=100;j++)
		{
		if(num[i]!=null&&num[j]!=null)
			{
			if(num[j]%num[i]==0)
				{
				num[j]=null;
				}
			
			}
		}
	}
puts("筛选出100内的素数:");
for(i=2,n=0;i<=100;i++)
	{
	if(num[i]!=null)
		{
		printf("%5d",num[i]);
		n++;
		}
	if(n==10)
		{
		printf("\n");
		n=0;
		}
	}
printf("\n");
return 0;
}