#include<stdio.h>
#define N 5
int main()
{int a[5],i,temp;
puts("����5������");
for(i=0;i<5;i++)
	{
	scanf("%d",&a[i]);
	}
puts("\n����˳��Ϊ");
for(i=0;i<N;i++)
	{
	printf("%4d",a[i]);
	}
puts("\n��������Ϊ");
for(i=0;i<=N/2;i++)
	{temp=a[i];
	a[i]=a[N-i-1];
	a[N-i-1]=temp;
	}//ǰһ��������������һ������������û�
for(i=0;i<N;i++)
	{
	printf("%4d",a[i]);
	}
printf("\n");
return 0;
}
