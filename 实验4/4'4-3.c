#include<stdio.h>
#include<math.h>
#define M 1000
int main()
{
	int i,k;
	printf("请输入一个小于%d的整数i：",M);
	scanf("%d",&i);
	while(i>M)
	{printf("输入的数据不符合要求，请重新输入一个小于%d的整数i：",M);
	scanf("%d",&i);
	
	k=sqrt(i);  //把i开方赋值给k
	}
	printf("%d的平方根的整数部分是%d\n",i,k);
	return 0;
}
