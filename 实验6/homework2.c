#include<stdio.h>
int main()
{int i,j,k,sum=0;
	for(i=1;i<=20;i++)
	{for(j=1,k=1;j<=i;j++)
	{k*=j;}
	sum+=k;
	}
	printf("1-20�Ľ׳�֮��Ϊ%d\n",sum);
}