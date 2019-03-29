#include<stdio.h>
int main()
{
	int a[3][3],sum=0;
	int i,j;
	printf("ÊäÈëÊı×Ö£º\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%3d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		sum+=a[i][i];
	}
printf("sum=%6d\n",sum);
return 0;
}