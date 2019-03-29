#include<stdio.h>
int main()
{
int c1,c2;	//定义整形变量c1 c2
printf("请输入两个整数c1,c2:");
scanf("%d,%d",&c1,&c2);
printf("按字符输入结果：\n");
printf("%c,%c\n",c1,c2);
printf("按ASCII码输入出结果为：\n");
printf("%d,%d\n",c1,c2);
return 0;
}