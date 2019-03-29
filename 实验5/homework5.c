#include<stdio.h>
#include<math.h>
int place,a[6];i;		//全局变量
int main()
{void digit();
void StraightBet(); 
void reverse_order();//声明函数
	int num;
printf("输入一个不多于5位的正整数:");
scanf("%d",&num);
	for(;num>99999||num<=0;)
	{printf("输入有误，请重新输入:");
scanf("%d",&num);			//检查输入是否正确
}
digit(num);    //调用求数位的函数
StraightBet(num);//调用得到每位数字的函数
reverse_order(num);//调用使得数字顺序逆转的函数
}
//求数位模块
void digit(int x)  
{
	for(place=1;x>10;place++)
	{x=x/10;}	//通过循环除以10取整，直到取整小于10，循环的次数+1等于数位
printf("该数是%d位数\n",place);
}
//求每位数字模块
void StraightBet(int y)
{printf("每位数字是：");
	for(i=1;i<=place;i++)
	{a[i]=y/(int)(pow(10,place-i));//数除以10的place-i次方，取整
	y=y%(int)(pow(10,place-i));//数除以10的place-i次方，取余
	printf("%d ",a[i]);
	}
printf("\n");
}
//顺序逆转模块
void reverse_order(int z)
{printf("顺序倒转");
	for(;i>1;i--)
	{printf("%d ",a[i-1]);}//通过上一模块得到的数组进行打印
	printf("\n");
}