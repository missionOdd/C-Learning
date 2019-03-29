/*********程序菜单开发***********
		开发人员：陈明新
	开发环境：visual C++6.0		
	本程序只适用于　Windows系统	*/
#include<stdio.h>
#include<math.h>
#include <conio.h>
#include<windows.h>
#include<time.h>
#define N 15//数组容量
#define M 10//数组容量

//函数声明
//界面显示
void desGui();//介绍界面
void loadGui();//加载页面
void menuGui();//菜单界面
void optionGui();//任务结束选项界面
//对opt数据处理
void get1();//菜单选项输入1-9
void menuOptions();//菜单得到数据后的执行函数
void get2();//任务结束选项输入1-9或a-c
void Suboptions();//任务结束选项得到数据后的执行函数

//菜单中的9个程序
void maxComDivisor();//求最大公约数
void counterExchang();//行列交换
void Bisearch();//折半查找
void primeNum();//素数
void Factorial();//n!
void bubbleSort();//冒泡排序
void selectSort();//选择排序
void PointSort();//用指针变量作参数排序
void day();//计算某一日在本年中的第几天

//错输入处理
void checkCode();//模拟验证码

//控制选择的变量
char opt;

//主函数
int main()
{loadGui();
system("color f2");//dos窗口输入命令：color f2；f是背景色：亮白；2是文字色：浅绿
system("title 程序菜单1.0.0 Beta版");//修改dos窗口名
desGui();
printf("按任意键继续...");
getch();//接受一个任意键的输入，不用按回车就返回，用到头文件conio.h
loadGui();
Sleep(100);//延迟执行语句100毫秒
menuGui();
return 0;
}

//介绍界面
void desGui()
{
printf("\t\t++===========================++\n");
printf("\t\t||     C语言实验菜单设计     ||\n");Sleep(50);
printf("\t\t++===========================++\n");Sleep(50);
printf("\t\t|| 开发：陈明新              ||\n");Sleep(50);
printf("\t\t|| 班级：计科1171            ||\n");Sleep(50);
printf("\t\t|| 版权：广东海洋大学        ||\n");Sleep(50);
printf("\t\t||       数学与计算机学院    ||\n");Sleep(50);
printf("\t\t||提示：1.输入后按enter键;   ||\n");Sleep(50);
printf("\t\t||      2.数字的输入请在     ||\n");Sleep(50);
printf("\t\t||       个位到千位数内;     ||\n");Sleep(50);
printf("\t\t||      3.dos窗口要调大;     ||\n");Sleep(50);
printf("\t\t|| *本程序仅供学习交流使用*  ||\n");Sleep(50);
printf("\t\t++===========================++\n");Sleep(50);
}
//加载页面
void loadGui()
{int flag=3;
	while(flag)
	{flag--;system("cls");printf("正在加载：..........");
	printf("\n█▇▆▅▄▃▂▁▂▃▄▅▆▇█▇▆▅▄▃▂▁▂▃▄▅▆▇█▇▆▄▄▃▂▁ ");system("cls");printf("正在加载：......");	
	printf("\n▇▆▅▄▃▂▁▂▃▄▅▆▇█▇▆▅▄▃▂▁▂▃▄▅▆▇█▇▆▅▄▃▂▁▂ ");system("cls");printf("正在加载：...");
	printf("\n▆▅▄▃▂▁▂▃▄▅▆▇█▇▆▅▄▃▂▁▂▃▄▅▆▇█▇▆▄▄▃▂▁▂▃ ");system("cls");printf("正在加载：...");
	printf("\n▅▄▃▂▁▂▃▄▅▆▇█▇▆▅▄▃▂▁▂▃▄▅▆▇█▇▆▄▄▃▂▁▂▃▄ ");system("cls");printf("正在加载：......");
	printf("\n▄▃▂▁▂▃▄▅▆▇█▇▆▅▄▃▂▁▂▃▄▅▆▇█▇▆▄▄▃▂▁▂▃▄▅ ");system("cls");				  ;
	}
printf("加载成功！\n");
}

//菜单界面
void menuGui()
{system("cls");//换页
printf("\n");
printf("\t\t++========================================================++\n");
printf("\t\t||                       程序菜单表                       ||\n");Sleep(100);
printf("\t\t++========================================================++\n");Sleep(100);
printf("\t\t||  [1]	求两个正整数的最大公因数                          ||\n");Sleep(100);
printf("\t\t||  [2] 二维数组的行和列的元素互换                        ||\n");Sleep(100);
printf("\t\t||  [3] 折半法查找某数是在数组中的第几个元素的值          ||\n");Sleep(100);
printf("\t\t||  [4] 求m~n间的全部素数                                 ||\n");Sleep(100);
printf("\t\t||  [5] 用递归的方法求n的阶乘                             ||\n");Sleep(100);
printf("\t\t||  [6] 对10个学生成绩用冒泡法进行由低到高的排序          ||\n");Sleep(100);
printf("\t\t||  [7] 对10个学生成绩用选择法进行由低到高的排序          ||\n");Sleep(100);
printf("\t\t||  [8] 用指针变量作为参数函数对两个整数进行大小排序      ||\n");Sleep(100);
printf("\t\t||  [9] 计算某一日在本年中的第几天                        ||\n");Sleep(100);
printf("\t\t++========================================================++\n");Sleep(100);
get1();
}

//任务结束选项界面
void optionGui()
{printf("\n=================================================\n");
Sleep(500);
printf("++=======任务结束========++\n");Sleep(100);
printf("||      a.显示菜单       ||\n");Sleep(100);
printf("||      b.重新任务       ||\n");Sleep(100);
printf("||      c.退出程序       ||\n");Sleep(100);
printf("||      1-9.选择任务     ||\n");Sleep(100);
printf("++=======================++\n");Sleep(100);
printf("请输入(a-c或1-9):\n");
get2();
}

//菜单得到数据后的执行函数
void menuOptions()
{switch(opt)
	{case '1':maxComDivisor();break;
	case '2':counterExchang();break;
	case '3':Bisearch();break;
	case '4':primeNum();;break;
	case '5':Factorial();break;
	case '6':bubbleSort();break;
	case '7':selectSort();break;
	case '8':PointSort();break;
	case '9':day();break;
	}
optionGui();
}

//任务结束选项得到数据后的执行函数
void Suboptions()
{switch(opt)
	{case 'a':menuGui();break;
	case 'c':exit(0);break;
	default:menuOptions();break;
}
optionGui();
}

//菜单选项输入1-9
void get1()
{int flag=1,bottle;//flag判断输入对错，bottle判断输入缓冲区的第一个字符
printf("====================菜单选择=====================\n");
printf("输入菜单选项(1至9)：\n");
while(flag)
	{
	scanf("%c",&opt);
	bottle=(getchar()!='\n');//bottle判断输入缓冲区的第一个字符是否为回车
	if(opt>'0'&&opt<='9'&&bottle==0)
		{menuOptions();
		flag=0;}
	else 
		{if(bottle!=0)
			{while(getchar()!='\n');}//消除输入缓冲区
		switch(flag)
			{case 1:printf("[Message]输入好像有点问题，麻烦重新输入:\n");flag++;break;
			case 2:printf("[Message]看清楚菜单再输入，谢谢配合:\n");flag++;break;
			case 3:printf("[Message]你是想捣蛋吗？再给你次机会，重新输入:\n");flag++;break;
			case 4:printf("[Message]Σ( ￣д￣；) 我现在怀疑你运行环境有问题!\n[Message]启动验证码系统!\n");checkCode();flag=1;printf("\n\n输入菜单选项(0至9)：\n");break;
			}
	
		}
	}
}

//任务结束选项输入1-9或a-c
void get2()
{int flag=1,bottle;//flag判断输入对错，bottle判断输入缓冲区的第一个字符
char last=opt;//记下上一次的opt选择，用于重新任务
while(flag)
	{
	scanf("%c",&opt);
	bottle=(getchar()!='\n');//bottle判断输入缓冲区的第一个字符是否为回车
	if(opt>'0'&&opt<='9'&&bottle==0)
		{menuOptions();
		flag=0;}
	else if(opt>='a'&&opt<='c'&&bottle==0)
			{if(opt=='b')
				{opt=last;}
			Suboptions();
			flag=0;}
		else {if(bottle!=0)
				{while(getchar()!='\n');}
			switch(flag)
			{case 1:printf("[Message]输入好像有点问题，麻烦重新输入:\n");flag++;break;
			case 2:printf("[Message]看清楚菜单再输入，谢谢配合:\n");flag++;break;
			case 3:printf("[Message]你是想捣蛋吗？再给你次机会，重新输入:\n");flag++;break;
			case 4:printf("[Message]Σ( ￣д￣；) 我现在怀疑你运行环境有问题!\n[Message]启动验证码系统!\n");
					checkCode();flag=1;optionGui();break;
			}
	
		}
	}

menuOptions();
} 

//模拟验证码
void checkCode()
{int i,bottle,flag=1;
char allCode[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJLMNOPQRSTUVWXYZ";//所有验证码
char getCode[5],writeCode[5];//getCode[5]是获得随机产生的字符，writeCode[5]是写入随机产生的字符
printf("=====================验证码=======================\n");Sleep(100);
while(flag)
	{srand((unsigned)time(NULL));//取随机数种子，指定种子值为时间 
	printf("验证码：\n");
		printf("+--------------------+\n");
		printf("|");
	for (i=0; i<4; i++)
		{getCode[i]=allCode[rand()%(int)strlen(allCode)];//随机数在[0, allCode的有效长度值)中产生，并且产生的随机数作为allCode数组下标
	    printf("%4c ",getCode[i]);
		}
	getCode[i]='\0';
	printf("|\n");
	printf("+--------------------+\n");
	printf("\n请输入验证码（不区分大小写）\n");
	for (i=0; i<4; i++)
		{
		scanf("%c",&writeCode[i]);
		}
	bottle=(getchar()!='\n');//判断输入缓冲区是否溢出
	writeCode[i]='\0';
	strlwr(getCode);//大写变小写
	strlwr(writeCode);//大写变小写
	if(strcmp(getCode,writeCode)==0&&bottle==0)
		{printf("[M1essage]验证成功\n");
		flag=0;}
	else 
		{
		printf("[Message]验证码错误,请重试\n");
		flag++;
		if(bottle!=0)
			{while(getchar()!='\n');}
		if(flag>5)
			{printf("[Message]验证失败，结束程序\n");
			exit(0);
			}
		}	
	}
}


//求最大公约数
void maxComDivisor()
{int u,v,r,temp;//u大的数,v小的数,r是余数，temp中转站
loadGui();system("cls");
printf("===================最大公约数====================\n");Sleep(100);
printf("以半角逗号隔开输入2个数\n");
scanf("%d,%d",&u,&v);
while(!(u>0&&v>0))
	{while(getchar()!='\n');
	printf("[Message]输入错误，请重新输入:\n");
	scanf("%d,%d",&u,&v);
	}
while(getchar()!='\n');
if(v>u) 
	{temp=v;v=u;u=temp;}
while((r=u%v)!=0)//辗转相除法
	{u=v;v=r;}
printf("最大公约数为:%d\n",v);
}

//行列交换
void counterExchang()
{int a[M][M],b[M][M],i,j,n,temp;//i行，j列，n：数组a有n*n个元素
loadGui();system("cls");
printf("====================行列交换=====================\n");Sleep(100);
printf("定义数组a有n*n个元素，输入n(1~6)：");
scanf("%d",&n);
while(!(n>=1&&n<=6))
	{while(getchar()!='\n');
	printf("[Message]输入错误，请重新输入:\n");
	scanf("%d",&n);
	}
while(getchar()!='\n');
for(i=0;i<n;i++)
	{printf("输入第%d行的数组元素%d个(数字间以空格隔开):\n",i+1,n);
	for(j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);
		}
	while(getchar()!='\n');
	}
printf("数组a为：\n");
for(i=0;i<n;i++)
	{for(j=0;j<n;j++)
		{printf("%5d",a[i][j]);
		}
	printf("\n");
	}
for(i=0;i<n;i++)
	{for(j=i;j<n;j++)
		{temp=a[i][j];
		a[i][j]=a[j][i];
		a[j][i]=temp;
		}
	}
for(i=0;i<n;i++)
	{for(j=0;j<n;j++)
		{b[i][j]=a[i][j];
		}
	}
printf("数组b为：\n");
for(i=0;i<n;i++)
	{for(j=0;j<n;j++)
		{printf("%5d",b[i][j]);
		}
	printf("\n");
	}
}

//折半查找数组中数字
void Bisearch()
{int a[N]={105,45,30,15,14,13,12,10,9,8,5,4,3,2,1},i,num,flag=1,top,low,mid,find;
char c;
//i下标,num查找的数,flag判断输入内容,top查找范围最大值,low查找范围最小值,mid中间值,find判断是否找到，c选择是否继续
loadGui();system("cls");
printf("===================折半查找=====================\n");Sleep(100);
printf("[Message]是否手动输入(由大到小的)数组？(是按Y或其他，否按N)\n");
c=getchar();
while(getchar()!='\n');
if(c!='N'&&c!='n')
	{printf("[Message]:输入15个元素，由大到小			(提示：首元素稍大)\n");
	for(i=0;i<N;i++)
		{printf("第%d个元素：",i+1);
		scanf("%d",&a[i]);
		while(getchar()!='\n');
		if(i>0&&a[i]>a[i-1])
			{printf("[Message]输入错误，请重新输入:        (提示：由大到小)\n");
			i--;flag++;
			if(flag>5)
				{checkCode();flag=1;}
			}
		}
	}
printf("\n数组为：\n");
for(i=0;i<N;i++)
	{printf("%6d",a[i]);}
Sleep(500);
flag=1;
while(flag)
	{top=N-1;low=0;mid=0;find=0;
	printf("\n输入想查找的元素：");
	scanf("%d",&num);while(getchar()!='\n');
	if(num<=a[0]&&num>=a[N-1])
		{while((find==0)&&(low<=top))
			{
			mid=(top+low)/2;
			printf("扫描位置范围:(%2d~%2d)\t中间值:%2d\n",low+1,top+1,mid+1);Sleep(300);//扫描查找范围输出
			if(num==a[mid])
				{find=1;}//表示找到了
			else if(num>a[mid])//缩小扫描区间
					{top=mid-1;}
				else {low=mid+1;}
			}
		}
if(find==1)
	{printf("[Message]找到数字:%d,于第%d个位置\n",num,mid+1);
	}
else {printf("[Message]无此数数字%d\n",num);}
printf("[Message]是否重新查找？(是按Y或其他，否按N)\n");
c=getchar();while(getchar()!='\n');
if(c=='N'||c=='n')
	flag=0;
	}
}
//找素数
void primeNum()
{int m=0,n=0,i,num,count=0;
//m,n是搜索范围，i数组下标，num是范围内数字，count控制素数的数量
loadGui();system("cls");
printf("===================找出素数=====================\n");Sleep(100);
while(1)
	{printf("输入起始值（正整数）m：\n");
	scanf("%d",&m);
	while(getchar()!='\n');
	printf("输入终止值（正整数）n：\n");
		scanf("%d",&n);
	while(getchar()!='\n');
	if(m>=n||m<=0)
		{printf("输入错误，请重新输入\n");}
	else break;
	}
printf("素数有：\n");
for(num=m;num<=n;num++)
	{for(i=2;i<=(int)sqrt(num);i++)
		{if(num%i==0)//判断数素
			{break;}
		}
	if(i>=(int)sqrt(num)+1&&num!=1)//判断并输出素数
		{printf("%5d",num);
		count++;
		if(count%10==0&&count>=10)
			{printf("\n");}
		}	
	}
printf("\n在%d~%d内共有%d个素数.\n",m,n,count);
}

//算n!
void Factorial()
{int n,resu;
int FactorialFunction(int);
loadGui();system("cls");
printf("===================n的阶乘=====================\n");Sleep(100);
printf("输入(正整数)n:         （提示:n不要太大）\n");
scanf("%d",&n);
while(getchar()!='\n');
while(n<=0)
	{
	printf("[Message]输入错误，请重新输入:\n");
	scanf("%d",&n);
	while(getchar()!='\n');
	}
resu=FactorialFunction(n);
printf("%d!=%d\n",n,resu);
}
//n!功能模块
int FactorialFunction(int n)
{int f;
if(n==1||n==0)
 f=1;
else
f=FactorialFunction(n-1)*n;//递归
return f;
}




//对成绩用冒泡法进行由低到高的排序

/*冒泡法优化，
优化1.添加标志位，记录最后一次交换位置的地方，
证明最后一次交换位置之后的地方时是排好序的，
下一次只需要排最后一次之前（或之后）的地方扫描就好了,
优化2.双向冒泡，每趟排序遍历一次找到一个最大值和者最小值，
其实都就是最后一次交换位置的地方，再从最大值和者最小值之间扫描排序，
使减少了一半的排序趟数  */
void bubbleSort()
{int a[M],i,j,k,temp,posit=0,high=M-1,low=0;
//i,j,k数组下标，temp中转站，poist是记下交换位置，high是扫描范围最大值，low是扫描范围最小值
loadGui();system("cls");
printf("===================冒泡排序=====================\n");Sleep(100);
for(i=0;i<M;i++)
	{printf("第%d个学生成绩：",i+1);
	scanf("%d",&a[i]);
	while(getchar()!='\n');
	}
printf("\n学生成绩数组为：\n");
for(k=0;k<10;k++)
	{printf("%5d",a[k]);}
printf("\n");
while(low<high)
	{for(i=low;i<high;i++)//正向冒泡
		{if(a[i]>a[i+1])
			{temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			posit=i;
			printf("\nmax移至:%2d号位 [%3d]<-->[%3d]   ",i+2,a[i],a[i+1]);printf("正向冒泡结果为：");
			for(k=0;k<10;k++)//输出每趟排序结果
				{
				if(k==i+1)	printf(" 【%d】",a[k]);
				else		printf("   %d  ",a[k]);
				}
			Sleep(200);
			}
		}
		high=posit;
	for(j=high;j>low;j--)//逆向冒泡
		{if(a[j]<a[j-1])
			{temp=a[j];
			a[j]=a[j-1];
			a[j-1]=temp;
			posit=j;
			printf("\nmin移至:%2d号位 [%3d]<-->[%3d]   ",j,a[j-1],a[j]);printf("逆向冒泡结果为：");
			for(k=0;k<10;k++)//输出每趟排序结果
				{
				if(k==j-1)	printf(" 【%d】",a[k]);
				else		printf("   %d  ",a[k]);
				}
			Sleep(200);
			}
		}
		low=posit;
	}
printf("\n[Message]冒泡排序最终结果：\n");
for(k=0;k<10;k++)
	{printf("%5d",a[k]);}
printf("\n");
}



/*舍弃的代码：选择法优化算法一

void selectSort()
{int a[M],i,j,k,temp,posit=0,high=M-1,low=0;
loadGui();system("cls");
printf("===================选择排序=====================\n");Sleep(100);
for(i=0;i<M;i++)
	{printf("第%d个学生成绩：",i+1);
	scanf("%d",&a[i]);
	while(getchar()!='\n');
	}
printf("\n学生成绩数组为：\n");
for(k=0;k<10;k++)
	{printf("%5d",a[k]);}
printf("\n");
for(i=0;i<M/2;i++)
	{
	for(j=low;j<M-i;j++)
		{if(a[i]>a[j])
			{temp=a[j];
			a[j]=a[i];
			a[i]=temp;
			low=j;posit=1;
			}
		}
	if(a[low]!=a[i+1]&&posit==1)
		{temp=a[low];
		a[low]=a[i+1];
		a[i+1]=temp;
		posit=0;
		}
	else low=i+1;
	for(j=high;j>i;j--)
		{if(a[M-i-1]<a[j])
			{temp=a[M-i-1];
			a[M-i-1]=a[j];
			a[j]=temp;
			temp=high;
			high=j;posit=1;
			}	
		}
	if(a[high]!=a[M-i-2]&&posit==1)
		{temp=a[high];
		a[high]=a[M-i-2];
		a[M-i-2]=temp;
		posit=0;
		}
	else high=M-i-2;
	}
printf("\n[Message]选择排序最终结果：\n");
for(k=0;k<10;k++)
	{printf("%5d",a[k]);}
printf("\n");
}*/






//对成绩用选择法进行由低到高的排序

/*选择法优化：1.添加标志位，记录最后一次交换位置的地方；
			   2.双向选择法*/

void selectSort()
{int a[M],i,j,k,temp,high,low;
//i,j,k数组下标，temp中转站，high是扫描范围最大值，low是扫描范围最小值
loadGui();system("cls");
printf("===================选择排序=====================\n");Sleep(100);
for(i=0;i<M;i++)
	{printf("第%d个学生成绩：",i+1);
	scanf("%d",&a[i]);
	while(getchar()!='\n');
	}
printf("\n学生成绩数组为：\n");
for(k=0;k<10;k++)
	{printf("%5d",a[k]);}
printf("\n");
for(i=0;i<M/2;i++)
	{high=M-i-1;low=i;
//正向选择
	for(j=low;j<M-i;j++)
		{if(a[low]>a[j])
			{
			low=j;//记下要交换的位置
			}
		}
	temp=a[low];a[low]=a[i];a[i]=temp;
			printf("\nlow 移至:%2d号位 [%3d]<-->[%3d]   ",i+1,a[i],a[low]);printf("逆向选择结果为：");
			for(k=0;k<10;k++)//输出每趟排序结果
				{
				if(k==i)	printf(" 【%d】",a[k]);
				else		printf("   %d  ",a[k]);
				}
			Sleep(200);
//逆向选择
	for(j=high;j>i;j--)
		{if(a[high]<a[j])
			{
			high=j;//记下要交换的位置
			}	
		}
	temp=a[high];a[high]=a[M-i-1];a[M-i-1]=temp;
			printf("\nhigh移至:%2d号位 [%3d]<-->[%3d]   ",M-i-1,a[i],a[low]);printf("逆向选择结果为：");
			for(k=0;k<10;k++)//输出每趟排序结果
				{
				if(k==M-i-1)	printf(" 【%d】",a[k]);
				else		printf("   %d  ",a[k]);
				}
			Sleep(200);
	}
printf("\n[Message]选择排序最终结果：\n");
for(k=0;k<10;k++)
	{printf("%5d",a[k]);}
printf("\n");
}

//用指针变量作参数对两个整数排序
void PointSort()
{int *p,*q;
int a,b;
void maxSort(int *p,int *q);
loadGui();system("cls");
printf("================用指针参数排序===================\n");Sleep(100);
printf("输入两个整数（数字间用半角逗号隔开）：\n");
scanf("%d,%d",&a,&b);
while(getchar()!='\n');//消除输入缓冲区
p=&a;q=&b;
maxSort(p,q);
printf("由大到小：%d,%d\n",a,b);
}
//整数排序功能模块
void maxSort(int *p,int *q)
{int temp;
if(*p<*q)
	{temp=*p;
	*p=*q;
	*q=temp;
	}
}


//年月日结构体
struct ymd
{int year;
int mon;
int day;
};
//用指针变量作参数排序
void day()
{struct ymd date;int sum=0,flag=1,leap=0;//sum求得第几天，flag判断输入对错，leap判断闰年
loadGui();system("cls");
printf("==================年月日求天数===================\n");Sleep(100);
while(flag)
	{
	printf("输入年/月/日（数字间用/隔开,例如2018/1/1）\n");
	scanf("%d/%d/%d",&date.year,&date.mon,&date.day);
	while(getchar()!='\n');//消除输入缓冲区
	if((date.year%4==0&&date.year%100!=0)||date.year%400==0)//判断闰年
	{leap=1;
	}
	switch(date.mon)
		{case 1:if(date.day<=31)sum=date.day;break;
		case 2:if((date.day<=29&&leap==1)||(date.day<29))sum=date.day+31;else flag++;break;
		case 3:if(date.day<=31)sum=date.day+59;else flag++;break;
		case 4:if(date.day<31)sum=date.day+99;else flag++;break;
		case 5:if(date.day<=31)sum=date.day+120;else flag++;break;
		case 6:if(date.day<31)sum=date.day+151;else flag++;break;
		case 7:if(date.day<=31)sum=date.day+181;else flag++;break;
		case 8:if(date.day<=31)sum=date.day+212;else flag++;break;
		case 9:if(date.day<31)sum=date.day+243;else flag++;break;
		case 10:if(date.day<=31)sum=date.day+273;else flag++;break;
		case 11:if(date.day<31)sum=date.day+304;else flag++;break;	
		case 12:if(date.day<=31)sum=date.day+334;else flag++;break;
		default:flag++;break;
		}
	flag--;
	if(flag) printf("输入错误，请重新输入\n");
	if(date.mon>=3&&leap==1) sum++;
	}
printf("%d月%d日在%d年是第%d天.\n",date.mon,date.day,date.year,sum);
}