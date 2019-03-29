#include<stdio.h>
#define N 15
int main()
{
int i,num,top,bott,mid,loca,a[N],flag=1,sign;
char c;
printf("enter data:\n");
scanf("%d",&a[0]);	//输出第一个数
i=1;
while(i<N)			//检查数是否已输入完毕
{scanf("%d",&a[i]);	//输入下一个数
if(a[i]>=a[i-1])	//如果输入的数不小于前一个数
	i++;			//数的序号+1
else
	printf("enter this data again:\n"); //要求重新输入此数
}
printf("\n");
for(i=0;i<N;i++)
	printf("%5d",a[i]);		//输出全部15个数
printf("\n");
while(flag)
	{printf("input number to look for:");   //问你要找查哪个数
	scanf("%d",&num);						//输入要查找的数
	sign=0;			//sign为0表示尚未找到
	top=0;			//top是查找区间的起始位置
	bott=N-1;		//bott是查找区间的最末位置
	if((num<a[0])||(num>a[N-1]))		//要查的数不在查找区间内
		loca=-1;		//表示找不到
	while((!sign)&&(top<=bott))
		{	mid=(bott+top)/2;		//找出中间元素的下标
			if(num==a[mid])			//如果要找查的数整好等于中间元素
			{loca=mid;				//记下该下标
			printf("Has found %d,its position is %d\n",num,loca+1);
			//由于下标从0算起，而人们习惯从1算起，因此输出数的位置要加1
			sign=1;		//表示找到了
			}
			else if(num<a[mid])		//如果要查找的数小于中间元素的值
				bott=mid-1;			//只需从下标为mid+1~bott的范围中找
			else					//如果要查找的数不小于中间元素的值
				top=mid+1;			//只需从下标为mid+1~bott的范围中找
		}
	if(!sign||loca==-1)				//sign为0或loca等于-1，意味着找不到
		printf("cannot find %d.\n",num);//输出“找不到”
	printf("continue or not(Y/N)?");	//问你是否继续查找输入'N'或'n'
	scanf(" %c",&c);
	if(c=='N'||c=='n')
		flag=0;							//flag为开关变量，控制程序是否结束运行
}
return 0;
}
