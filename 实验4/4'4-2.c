#include<stdio.h>
int main()
{
	int a,b,c,temp,max;
	printf("请输入三个整数:");
	scanf("%d,%d,%d",&a,&b,&c);
	temp=(a>b)?a:b;  //将a和b中的大者存入temp中
	max=(temp>c)?temp:c;//上述同理
	printf("三个整数的最大数是%d\n",max);
	return 0;
}
