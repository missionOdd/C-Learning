#include<stdio.h>
int main()
{
	char c1,c2; //c1，c2定义为字符型变量
	int i1,i2;	//定义整形变量
	printf("请输入两个字符c1,c2:");
	scanf("%c,%c",&c1,&c2);
	i1=c1;		//赋值给整形变量
	i2=c2;
	printf("按字符输入结果：\n");
	printf("%c,%c\n",i1,i2);
	printf("按整数输入出结果：\n");
	printf("%d,%d\n",c1,c2);
	return 0;
}