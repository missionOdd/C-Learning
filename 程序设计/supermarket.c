/*		程序菜单开发
		开发人员：陈明新
	开发环境：visual C++6.0		
	本程序只适用于　Windows系统	*/
#include<stdio.h>
#include<math.h>
#include <conio.h>
#include<windows.h>
#include<time.h>

//函数声明
void desGui();//介绍界面
void loadGui();//加载界面
void menuGui();//菜单界面
void goodsSysGui();//商品部管理界面
void personGui();//人事部管理界面
void saleGui();//销售部管理界面
void endGui();//任务结束界面
void getOpt();//选项处理函数
void checkCode();//验证码系统

//商品部函数声明
void goodsInfView();//查看信息
void goodsInfCreate();//新建信息
void goodsInfChange();//修改信息
void goodsInfDelete();//删除信息
void goodsInfSearch();//检索信息
//人员部函数声明
void perInfView();//查看信息
void perInfCreate();//新建信息
void perInfChange();//修改信息
void perInfDelete();//删除信息
void perInfSearch();//检索信息

//出售部函数声明
void saleInfView();//查看信息
void saleInfChange();//编辑信息
void saleInfDelete();//删除信息
void saleInfSearch();//检索信息

//控制选择的变量
char opt;//选项变量
int sign;//选项标志

int main()
{
loadGui();
system("color f0");//dos窗口输入命令：color f2；f是背景色：亮白；2是文字色：浅绿
system("title 程序菜单1.0.0 Beta版");//修改dos窗口名
desGui();
printf("按任意键继续...");
getch();//接受一个任意键的输入，不用按回车就返回，用到头文件conio.h
loadGui();
Sleep(100);//延迟执行语句100毫秒
menuGui();
return 0;
}

void desGui()
{
printf("\t\t++===========================++\n");
printf("\t\t|| C语言小型超市管理系统设计 ||\n");
printf("\t\t++===========================++\n");
printf("\t\t|| 开发：陈明新              ||\n");
printf("\t\t|| 班级：计科1171            ||\n");
printf("\t\t|| 版权：广东海洋大学        ||\n");
printf("\t\t||       数学与计算机学院    ||\n");
printf("\t\t|| *本程序仅供学习交流使用*  ||\n");
printf("\t\t++===========================++\n");
}


//加载页面
void loadGui()
{int flag=1;
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
{sign=1;
system("cls");//换页
printf("\n");
printf("\t\t*************************************************\n");
printf("\t\t*              【小型超市管理系统】             *\n");Sleep(100);
printf("\t\t*************************************************\n");Sleep(100);
printf("\n");Sleep(100);
printf("\t\t++=============================================++\n");Sleep(100);
printf("\t\t||              [1]商品部管理系统              ||\n");Sleep(100);
printf("\t\t++=============================================++\n");Sleep(100);
printf("\t\t||              [2]人事部管理系统              ||\n");Sleep(100);
printf("\t\t++=============================================++\n");Sleep(100);
printf("\t\t||              [3]营业部管理系统              ||\n");Sleep(100);
printf("\t\t++=============================================++\n");Sleep(100);
printf("\t\t||              [*]退出系统程序	               ||\n");Sleep(100);
printf("\t\t++=============================================++\n");Sleep(100);
getOpt();
}

void goodsGui()
{sign=2;
system("cls");//换页
printf("\n");
printf("\t\t++===========================++\n");Sleep(100);
printf("\t\t||    [1]商品部管理系统      ||\n");Sleep(100);
printf("\t\t++===========================++\n");Sleep(100);
printf("\t\t||      1.查看商品信息       ||\n");Sleep(100);
printf("\t\t||      2.新建商品信息       ||\n");Sleep(100);
printf("\t\t||      3.修改商品信息       ||\n");Sleep(100);
printf("\t\t||      4.删除商品信息       ||\n");Sleep(100);
printf("\t\t||      5.检索商品信息       ||\n");Sleep(100);
printf("\t\t++===========================++\n");Sleep(100);
printf("\t\t||      *.返回上一级         ||\n");Sleep(100);
printf("\t\t||      -.上一页系统         ||\n");Sleep(100);
printf("\t\t||      +.下一页系统         ||\n");Sleep(100);
printf("\t\t++===========================++\n");Sleep(100);
getOpt();
}



void personGui()
{sign=3;
system("cls");//换页
printf("\n");
printf("\t\t++===========================++\n");Sleep(100);
printf("\t\t||    [2]人事部管理系统      ||\n");Sleep(100);
printf("\t\t++===========================++\n");Sleep(100);
printf("\t\t||      1.查看职员信息       ||\n");Sleep(100);
printf("\t\t||      2.新建职员信息       ||\n");Sleep(100);
printf("\t\t||      3.修改职员信息       ||\n");Sleep(100);
printf("\t\t||      4.删除职员信息       ||\n");Sleep(100);
printf("\t\t||      5.检索职员信息       ||\n");Sleep(100);
printf("\t\t++===========================++\n");Sleep(100);
printf("\t\t||      *.返回上一级         ||\n");Sleep(100);
printf("\t\t||      -.上一页系统         ||\n");Sleep(100);
printf("\t\t||      +.下一页系统         ||\n");Sleep(100);
printf("\t\t++===========================++\n");Sleep(100);
getOpt();
}


void saleGui()
{sign=4;
system("cls");//换页
printf("\n");
printf("\t\t++===========================++\n");Sleep(100);
printf("\t\t||     [3]营业部管理系统     ||\n");Sleep(100);
printf("\t\t++===========================++\n");Sleep(100);
printf("\t\t||      1.统查出售信息       ||\n");Sleep(100);
printf("\t\t||      2.新建出售信息       ||\n");Sleep(100);
printf("\t\t||      3.修改出售信息       ||\n");Sleep(100);
printf("\t\t||      4.删除出售信息       ||\n");Sleep(100);
printf("\t\t||      5.检索出售信息       ||\n");Sleep(100);
printf("\t\t++===========================++\n");Sleep(100);
printf("\t\t||      *.返回上一级         ||\n");Sleep(100);
printf("\t\t||      -.上一页系统         ||\n");Sleep(100);
printf("\t\t||      +.下一页系统         ||\n");Sleep(100);
printf("\t\t++===========================++\n");Sleep(100);
getOpt();
}

void endGui()
{sign=5;
printf("\n====================任务结束=====================\n");
printf("\t\t++===========================++\n");Sleep(100);
printf("\t\t||      *.管理系统           ||\n");Sleep(100);
printf("\t\t||      1.商品部             ||\n");Sleep(100);
printf("\t\t||      2.人事部             ||\n");Sleep(100);
printf("\t\t||      3.营业部             ||\n");Sleep(100);
printf("\t\t++===========================++\n");Sleep(100);
getOpt();
}


void getOpt()
{int flag=1,bottle;//flag判断输入对错，bottle判断输入缓冲区的第一个字符
printf("====================菜单选择=====================\n");
printf("输入菜单选项：\n");
while(flag)
	{
	scanf("%c",&opt);
	bottle=(getchar()!='\n');//bottle判断输入缓冲区的第一个字符是否为回车
	if(bottle==0)
		{switch(sign)
			{case 1:switch(opt)
				{case '1':goodsGui();break;
				case '2':personGui();break;
				case '3':saleGui();break;
				case '*':exit(0);break;
				}
				break;
			case 2:switch(opt)
				{case '1':goodsInfView();break;
				case '2':goodsInfCreate();break;
				case '3':goodsInfChange();break;
				case '4':goodsInfDelete();break;
				case '5':goodsInfSearch();break;
				case '*':menuGui();break;
				case '-':saleGui();break;
				case '+':personGui();break;
				}
				break;
			case 3:switch(opt)
				{case '1':perInfView();break;
				case '2':perInfCreate();break;
				case '3':perInfChange();break;
				case '4':perInfDelete();break;
				case '5':perInfSearch();break;
				case '*':menuGui();break;
				case '-':goodsGui();break;
				case '+':saleGui();break;
				}
				break;
			case 4:switch(opt)
				{case '1':saleInfView();break;
				case '2':saleInfChange();break;
				case '3':saleInfChange();break;
				case '4':saleInfDelete();break;
				case '5':saleInfSearch();break;
				case '*':menuGui();break;
				case '-':personGui();break;
				case '+':goodsGui();break;
				  }break;
			case 5:switch(opt)
				{case '*':menuGui();break;
				case '1':goodsGui();break;
				case '2':personGui();break;
				case '3':saleGui();break;
				}
				break;
			}
		flag=0;sign=0;
		}
	else 
		{while(getchar()!='\n');}//消除输入缓冲区
		switch(flag)
			{case 1:printf("[Message]输入好像有点问题，麻烦重新输入:\n");flag++;break;
			case 2:printf("[Message]看清楚菜单再输入，谢谢配合:\n");flag++;break;
			case 3:printf("[Message]你是想捣蛋吗？再给你次机会，重新输入:\n");flag++;break;
			case 4:printf("[Message]Σ( ￣д￣；) 我现在怀疑你运行环境有问题!\n[Message]启动验证码系统!\n");checkCode();flag++;printf("\n\n输入菜单选项：\n");break;
			}
		
		}

endGui();
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









//定义商品信息结构体
typedef struct Goods
{int num;
char name[20];
char type[20];
char producer[20];
int inNum;
float intPrice;
int outNum;
float outPrice;
struct Goods *next;
}goo;


goo *head=NULL;
goo *p0,*p1,*p2;
int node=0;


void goodsInfView()
{goo *p;
p=head;
printf("=====================查看商品信息=======================\n");Sleep(100);
		printf("|    商品编号    |     名称    |     分类    |     出厂商    |     原价    |     售价    |   入库量/件  |\n");

if(node!=0)
	{while(p!=NULL)
		{printf("      %2d             %s             %s            %s               %3.2f         %3.2f             %2d  \n",p->num,p->name,p->type,p->producer,p->intPrice,p->outPrice,p->inNum);
		p=p->next;
		}
	}
else printf("无任何商品信息\n");
printf("\n\n\n\n");
}


void goodsInfCreate()
{int flag=1;
printf("=====================新建商品信息=======================\n");Sleep(100);
if(node!=0)
	{p1=head;
	while(p1->next!=NULL)
		{p2=p1;
		p1=p1->next;//p1往后移动，p2紧跟p1
		}
	p1=(goo*)malloc(sizeof(goo));
	}
else
{p1=p2=(goo*)malloc(sizeof(goo));}
while(flag)
		{node++;p1->outNum=0;
		printf("输入商品编号：\n");
		scanf("%d",&p1->num);
		while(getchar()!='\n');
		printf("输入商品名称：\n");
		scanf("%s",p1->name);
		while(getchar()!='\n');
		printf("输入商品类别：\n");
		scanf("%s",p1->type);
		while(getchar()!='\n');
		printf("输入商品出厂商：\n");
		scanf("%s",p1->producer);
		while(getchar()!='\n');
		printf("输入商品原价,售价以及入库数量（数字间用空格隔开）：\n");
		scanf("%f %f %d",&p1->intPrice,&p1->outPrice,&p1->inNum);
		while(getchar()!='\n');
		while(p1->intPrice<=0||p1->outPrice<=0||p1->inNum<=0)
			{printf("输入错误，请重新输入\n");
			printf("输入商品原价,售价以及入库数量（数字间用空格隔开）：\n");
			scanf("%f %f %d",&p1->intPrice,&p1->outPrice,&p1->inNum);
			while(getchar()!='\n');
			}
			if(node==1) head=p1;//首字节指向新开辟空间
		else p2->next=p1;//尾字节指向新开辟空间
		p2=p1;
		printf("是否继续输入,是按y或其他,否按n\n");
		if(getchar()=='n'||getchar()=='N') {flag=0;while(getchar()!='\n');}
		p1=(goo*)malloc(sizeof(goo));
		}
p2->next=NULL;
goodsInfView();
}


void goodsInfChange()
{int num,flag;char name[20];
printf("=====================修改商品信息=======================\n");Sleep(100);
printf("选择通过用商品编号（按1）or商品名称（按0）修改商品信息\n");Sleep(100);
scanf("%d",&flag);
while(getchar()!='\n');
if(flag)
	{printf("选择商品编号\n");
	scanf("%d",&num);
	while(getchar()!='\n');
	if(head==NULL)//判断有无建立信息
		{printf("无任何商品信息\n");}
	else
		{p1=head;
		while(num!=p1->num&&p1->next!=NULL)
			{p2=p1;
			p1=p1->next;//p1往后移动，p2紧跟p1
			}
		if(num==p1->num)//如果在p1指向的节点中找到一致的num值 
			{
			printf("找到%d，请修改\n",num);
			printf("以空格间隔\n");
			printf("|    商品编号    |     名称    |     分类    |     出厂商    |     原价    |     售价    |   入库量/件  |\n");
			scanf("%d %s %s %s %f %f %d\n",&p1->num,p1->name,p1->type,p1->producer,&p1->intPrice,&p1->outPrice,&p1->inNum);
			while(getchar()!='\n');
			}
		else printf("找不到%d",num);
		}
	}
else
	{printf("选择商品名称\n");
	scanf("%s",&name);
	while(getchar()!='\n');
	if(head==NULL)//判断有无建立信息
		{printf("无任何商品信息\n");}
	else
		{p1=head;
		while(strcmp(name,p1->name)!=0&&p1->next!=NULL)
			{p2=p1;
			p1=p1->next;
			printf("%S,%s   \n",name,p1->name);//p1往后移动，p2紧跟p1
			}
		if(strcmp(name,p1->name)==0)//如果在p1指向的节点中找到一致的name值 
			{
			printf("找到%s，请修改\n\n",name);
			printf("以空格间隔\n");
			printf("|    商品编号    |     名称    |     分类    |     出厂商    |     原价    |     售价    |   入库量/件  |\n");
			scanf("%d %s %s %s %f %f %d\n",&p1->num,p1->name,p1->type,p1->producer,&p1->intPrice,&p1->outPrice,&p1->inNum);
			while(getchar()!='\n');
			}
		else printf("找不到%s",name);
		}
	}
goodsInfView();
}


void goodsInfDelete()
{int num,flag;char name[20];
printf("=====================删除商品信息=======================\n");Sleep(100);
printf("选择通过用商品编号（按1）or商品名称（按0）删除商品信息\n");Sleep(100);
scanf("%d",&flag);
while(getchar()!='\n');
if(flag)
	{printf("选择商品编号\n");
	scanf("%d",&num);
	while(getchar()!='\n');
	if(head==NULL)//判断有无建立信息
		{printf("无任何商品信息\n");}
	else
		{p1=head;
		while(num!=p1->num&&p1->next!=NULL)
			{p2=p1;
			p1=p1->next;//p1往后移动，p2紧跟p1
			}
		if(num==p1->num)//如果在p1指向的节点中找到一致的num值 
			{if(p1==head){head=head->next;}//如果是首节点，令第1个节点脱链，则第2个节点成为首节点
			else {p2->next=p1->next;}//如果是后面的节点，令p1指向的节点脱链，p2指向的节点与p1->next指向的节点链接
			printf("成功删除%d\n",num);
			node--;
			}
		else printf("找不到%d",num);
		}
	}
else
	{printf("选择商品名称\n");
	scanf("%s",&name);
	while(getchar()!='\n');
	if(head==NULL)//判断有无建立信息
		{printf("无任何商品信息\n");}
	else
		{p1=head;
		while(strcmp(name,p1->name)!=0&&p1->next!=NULL)
			{p2=p1;
			p1=p1->next;//p1往后移动，p2紧跟p1
			}
		if(strcmp(name,p1->name)==0)//如果在p1指向的节点中找到一致的name值 
			{if(p1==head){head=head->next;}//如果是首节点，令第1个节点脱链，则第2个节点成为首节点
			else {p2->next=p1->next;}//如果是后面的节点，令p1指向的节点脱链，p2指向的节点与p1->next指向的节点链接
			printf("成功删除%s\n",name);
			node--;
			}
		else printf("找不到%s",name);
		}
	}
goodsInfView();
}


void goodsInfSearch()
{int num,flag;char name[20];
printf("=====================检索商品信息=======================\n");Sleep(100);
printf("选择通过用商品编号（按1）or商品名称（按0）检索商品信息\n");Sleep(100);
scanf("%d",&flag);
while(getchar()!='\n');
if(flag)
	{printf("选择商品编号\n");
	scanf("%d",&num);
	while(getchar()!='\n');
	if(head==NULL)//判断有无建立信息
		{printf("无任何商品信息\n");}
	else
		{p1=head;
		while(strcmp(name,p1->name)!=0&&p1->next!=NULL)
			{p2=p1;
			p1=p1->next;//p1往后移动，p2紧跟p1
			}
		if(num==p1->num)//如果在p1指向的节点中找到一致的num值 
			{
			printf("成功检索%d\n",num);
			printf("|    商品编号    |     名称    |     分类    |     出厂商    |     原价    |     售价    |   入库量/件  |\n");
			printf("      %2d             %s             %s            %s               %3.2f         %3.2f             %2d  \n",p1->num,p1->name,p1->type,p1->producer,p1->intPrice,p1->outPrice,p1->inNum);
			}
		else printf("找不到%d",num);
		}
	}
else
	{printf("选择商品名称\n");
	scanf("%s",&name);
	while(getchar()!='\n');
	if(head==NULL)//判断有无建立信息
		{printf("无任何商品信息\n");}
	else
		{p1=head;
		while(strcmp(name,p1->name)!=0&&p1->next!=NULL)
			{p2=p1;
			p1=p1->next;//p1往后移动，p2紧跟p1
			}
		if(strcmp(name,p1->name)==0)
			{
			printf("成功检索%s\n",name);
			printf("|    商品编号    |     名称    |     分类    |     出厂商    |     原价    |     售价    |   入库量/件  |\n");
			printf("      %2d             %s             %s            %s               %3.2f         %3.2f             %2d  \n",p1->num,p1->name,p1->type,p1->producer,p1->intPrice,p1->outPrice,p1->inNum);
			}
		else printf("找不到%s",name);
		}
	}
}



/**************************************************/

//出售
void saleInfView()
{float outSum=0,inSum=0;
goo *p;
p=head;
printf("=====================商品出售信息=======================\n");Sleep(100);
		printf("|    商品编号    |    名称    |     原价    |     售价    |   入库量/件  |  出售量/件\n");
			
if(node!=0)
	{while(p!=NULL)
		{printf("      %2d             %s           %3.2f         %3.2f          %2d				%2d    \n",p->num,p->name,p->intPrice,p->outPrice,p->inNum,p->outNum);
		outSum=outSum+((p->outNum)*(p->outPrice));
		inSum=inSum+((p->inNum)*(p->intPrice));
		p=p->next;
		}
	}
else printf("无任何商品信息\n");
printf("\n\n\n\n入货总支出：%6.2f，销售总输入：%f6.2,总利润：%f6.2\n",inSum,outSum,outSum-inSum);

}




void saleInfChange()
{int num,flag;char name[20];
printf("=====================编辑销售信息=======================\n");Sleep(100);
printf("选择通过用商品编号（按1）or商品名称（按0）修改商品信息\n");Sleep(100);
scanf("%d",&flag);
while(getchar()!='\n');
if(flag)
	{printf("选择商品编号\n");
	scanf("%d",&num);
	while(getchar()!='\n');
	if(head==NULL)//判断有无建立信息
		{printf("无任何商品信息\n");}
	else
		{p1=head;
		while(num!=p1->num&&p1->next!=NULL)
			{p2=p1;
			p1=p1->next;//p1往后移动，p2紧跟p1
			}
		if(num==p1->num)//如果在p1指向的节点中找到一致的num值 
			{
			printf("找到%d，请修改\n",num);
			printf("|    输入销售量    |\n");
			scanf("%d",&p1->outNum);
			while(getchar()!='\n');
			}
		else printf("找不到%d",num);
		}
	}
else
	{printf("选择商品名称\n");
	scanf("%s",&name);
	while(getchar()!='\n');
	if(head==NULL)//判断有无建立信息
		{printf("无任何商品信息\n");}
	else
		{p1=head;
		while(strcmp(name,p1->name)!=0&&p1->next!=NULL)
			{p2=p1;
			p1=p1->next;
			printf("%S,%s   \n",name,p1->name);//p1往后移动，p2紧跟p1
			}
		if(strcmp(name,p1->name)==0)//如果在p1指向的节点中找到一致的name值 
			{
			printf("找到%s，请修改\n\n",name);
			printf("|    输入销售量    |\n");
			scanf("%d",&p1->outNum);
			}
		else printf("找不到%s",name);
		}
	}
saleInfView();
}



void saleInfSearch()
{int num,flag;char name[20];
printf("=====================检索商品出售信息=======================\n");Sleep(100);
printf("选择通过用商品编号（按1）or商品名称（按0）检索商品信息\n");Sleep(100);
scanf("%d",&flag);
while(getchar()!='\n');
if(flag)
	{printf("选择商品编号\n");
	scanf("%d",&num);
	while(getchar()!='\n');
	if(head==NULL)//判断有无建立信息
		{printf("无任何商品信息\n");}
	else
		{p1=head;
		while(strcmp(name,p1->name)!=0&&p1->next!=NULL&&p1->outNum>0)
			{p2=p1;
			p1=p1->next;
			//p1往后移动，p2紧跟p1
			}
		if(num==p1->num)//如果在p1指向的节点中找到一致的num值 
			{
			printf("成功检索%d\n",num);
			printf("|    商品编号    |    名称    |     原价    |     售价    |   入库量/件  |  出售量/件\n");
			printf("      %2d             %s           %3.2f         %3.2f          %2d				%2d    \n",p1->num,p1->name,p1->intPrice,p1->outPrice,p1->inNum,p1->outNum);
			}
		else printf("找不到%d",num);
		}
	}
else
	{printf("选择商品名称\n");
	scanf("%s",&name);
	while(getchar()!='\n');
	if(head==NULL)//判断有无建立信息
		{printf("无任何商品信息\n");}
	else
		{p1=head;
		while(strcmp(name,p1->name)!=0&&p1->next!=NULL)
			{p2=p1;
			p1=p1->next;//p1往后移动，p2紧跟p1
			}
		if(strcmp(name,p1->name)==0)
			{
			printf("成功检索%s\n",name);
			printf("|    商品编号    |    名称    |     原价    |     售价    |   入库量/件  |  出售量/件\n");
			printf("      %2d             %s           %3.2f         %3.2f          %2d				%2d    \n",p1->num,p1->name,p1->intPrice,p1->outPrice,p1->inNum,p1->outNum);
			}
		else printf("找不到%s",name);
		}
	}
}






void saleInfDelete()
{int num,flag;char name[20];
printf("=====================删除商品信息=======================\n");Sleep(100);
printf("选择通过用商品编号（按1）or+商品名称（按0）删除商品信息\n");Sleep(100);
scanf("%d",&flag);
while(getchar()!='\n');
if(flag)
	{printf("选择商品编号\n");
	scanf("%d",&num);
	while(getchar()!='\n');
	if(head==NULL)//判断有无建立信息
		{printf("无任何商品信息\n");}
	else
		{p1=head;
		while(num!=p1->num&&p1->next!=NULL)
			{p2=p1;
			p1=p1->next;//p1往后移动，p2紧跟p1
			}
		if(num==p1->num)//如果在p1指向的节点中找到一致的num值 
			{if(p1==head){head=head->next;}//如果是首节点，令第1个节点脱链，则第2个节点成为首节点
			else {p2->next=p1->next;}//如果是后面的节点，令p1指向的节点脱链，p2指向的节点与p1->next指向的节点链接
			printf("成功删除%d\n",num);
			node--;
			}
		else printf("找不到%d",num);
		}
	}
else
	{printf("选择商品名称\n");
	scanf("%s",&name);
	while(getchar()!='\n');
	if(head==NULL)//判断有无建立信息
		{printf("无任何商品信息\n");}
	else
		{p1=head;
		while(strcmp(name,p1->name)!=0&&p1->next!=NULL)
			{p2=p1;
			p1=p1->next;//p1往后移动，p2紧跟p1
			}
		if(strcmp(name,p1->name)==0)//如果在p1指向的节点中找到一致的name值 
			{if(p1==head){head=head->next;}//如果是首节点，令第1个节点脱链，则第2个节点成为首节点
			else {p2->next=p1->next;}//如果是后面的节点，令p1指向的节点脱链，p2指向的节点与p1->next指向的节点链接
			printf("成功删除%s\n",name);
			node--;
			}
		else printf("找不到%s",name);
		}
	}
goodsInfView();
}
























/*********************************************/



//人员结构体
typedef struct Person
{int num;
char name[20];
char job[20];
float pay;
struct Person *next;
}per;


per *head1=NULL;
per *p3,*p4,*p5;
int node1=0;

void perInfView()
{float paySum=0;
per *p;
p=head1;
printf("=====================查看员工信息=======================\n");Sleep(100);
		printf("|    员工编号    |     姓名    |     职位    |     工资    |\n");
if(node1!=0)
	{while(p!=NULL)
		{printf("      %2d             %s             %s            %f     \n",p->num,p->name,p->job,p->pay);
		paySum=paySum+p->pay;
		p=p->next;
		}
	}
else printf("无任何员工信息\n");
printf("\n\n\n\n员工总工资：%6.2f\n",paySum);
}


void perInfCreate()
{int flag=1;
printf("=====================新建员工信息=======================\n");Sleep(100);
if(node1!=0)
	{p4=head1;
	while(p4->next!=NULL)
		{p5=p4;
		p4=p4->next;//p4往后移动，p5紧跟p4
		}
	p4=(per*)malloc(sizeof(per));
	}
else
{p4=p5=(per*)malloc(sizeof(per));}
while(flag)
		{node1++;
		printf("输入员工编号：\n");
		scanf("%d",&p4->num);
		while(getchar()!='\n');
		printf("输入员工姓名：\n");
		scanf("%s",p4->name);
		while(getchar()!='\n');
		printf("输入员工职位：\n");
		scanf("%s",p4->job);
		while(getchar()!='\n');
		printf("输入员工工资：\n");
		scanf("%f",&p4->pay);
		while(getchar()!='\n');
			if(node1==1) head1=p4;
		else p5->next=p4;
		p5=p4;
		printf("是否继续输入,是按y或其他,否按n\n");
		if(getchar()=='n'||getchar()=='N') 
			{flag=0;while(getchar()!='\n');}
		p4=(per*)malloc(sizeof(per));
		}
p5->next=NULL;
perInfView();
}


void perInfChange()
{int num,flag;char name[20];
printf("=====================修改员工信息=======================\n");Sleep(100);
printf("选择通过用员工编号（按1）or员工名称（按0）修改员工信息\n");Sleep(100);
scanf("%d",&flag);
while(getchar()!='\n');
if(flag)
	{printf("选择员工编号\n");
	scanf("%d",&num);
	while(getchar()!='\n');
	if(head1==NULL)//判断有无建立信息
		{printf("无任何员工信息\n");}
	else
		{p4=head1;
		while(num!=p4->num&&p4->next!=NULL)
			{p5=p4;
			p4=p4->next;//p4往后移动，p5紧跟p4
			}
		if(num==p4->num)//如果在p4指向的节点中找到一致的num值 
			{
			printf("找到%d，请修改\n",num);
			printf("以空格间隔\n");
			printf("|    员工编号    |     姓名    |     职位    |     工资    |\n");
			scanf("%d %s %s %d\n",&p4->num,p4->name,p4->job,&p4->pay);
			}
		else printf("找不到%d",num);
		}
	}
else
	{printf("选择员工名称\n");
	scanf("%s",&name);
	while(getchar()!='\n');
	if(head1==NULL)//判断有无建立信息
		{printf("无员工信息\n");}
	else
		{p4=head1;
		while(strcmp(name,p4->name)!=0&&p4->next!=NULL)
			{p5=p4;
			p4=p4->next;//p4往后移动，p5紧跟p4
			}
		if(strcmp(name,p4->name)==0)//如果在p4指向的节点中找到一致的num值 
			{
			printf("找到%s，请修改\n\n",name);
			printf("以空格间隔\n");
		printf("|    员工编号    |     姓名    |     职位    |     工资    |\n");
			scanf("%d %s %s %d\n",&p4->num,p4->name,p4->job,&p4->pay);
			}
		else printf("找不到%s",name);
		}
	}
perInfView();
}

void perInfDelete()
{int num,flag;char name[20];
printf("=====================删除员工信息=======================\n");Sleep(100);
printf("选择通过用员工编号（按1）or员工名称（按0）删除商品信息\n");Sleep(100);
scanf("%d",&flag);
while(getchar()!='\n');
if(flag)
	{printf("选择员工编号\n");
	scanf("%d",&num);
	while(getchar()!='\n');
	if(head1==NULL)//判断有无建立信息
		{printf("无任何员工信息\n");}
	else
		{p4=head1;
		while(num!=p4->num&&p4->next!=NULL)
			{p5=p4;
			p4=p4->next;
			}
		if(num==p4->num)
			{if(p4==head1){head1=head1->next;}//如果是首节点，令第1个节点脱链，则第2个节点成为首节点
			else {p4->next=p4->next;}//如果是后面的节点，令p4指向的节点脱链，p5指向的节点与p4->next指向的节点链接
			printf("成功删除%d\n",num);
			node--;
			}
		else printf("找不到%d",num);
		}
	}
else
	{printf("选择员工名称\n");
	scanf("%s",&name);
	while(getchar()!='\n');
	if(head1==NULL)//判断有无建立信息
		{printf("无任何员工信息\n");}
	else
		{p4=head1;
		while(strcmp(name,p4->name)!=0&&p4->next!=NULL)
			{p5=p4;
			p4=p4->next;//p4往后移动，p5紧跟p4
			}
		if(strcmp(name,p4->name)==0)
			{if(p1==head){head=head->next;}//如果是首节点，令第1个节点脱链，则第2个节点成为首节点
			else {p2->next=p1->next;}
			printf("成功删除%s\n",name);
			node--;
			}
		else printf("找不到%s",name);
		}
	}
perInfView();
}


void perInfSearch()
{int num,flag;char name[20];
printf("=====================检索员工信息=======================\n");Sleep(100);
printf("选择通过用员工编号（按1）or商品名称（按0）检索员工信息\n");Sleep(100);
scanf("%d",&flag);
while(getchar()!='\n');
if(flag)
	{printf("选择商品编号\n");
	scanf("%d",&num);
	while(getchar()!='\n');
	if(head1==NULL)//判断有无建立信息
		{printf("无任何员工信息\n");}
	else
		{p4=head1;
		while(num!=p4->num&&p4->next!=NULL)
			{p5=p4;
			p4=p4->next;
			}
		if(num==p4->num)
			{
			printf("成功检索%d\n",num);
			printf("|    员工编号    |     姓名    |     职位    |     工资    |\n");
			printf("      %2d             %s             %s            %2d \n",p4->num,p4->name,p4->job,p4->pay);
			}
		else printf("找不到%d",num);
		}
	}
else
	{printf("选择员工名称\n");
	scanf("%s",&name);
	while(getchar()!='\n');
	if(head1==NULL)//判断有无建立信息
		{printf("无任何员工信息\n");}
	else
		{p4=head1;
		while(strcmp(name,p1->name)!=0&&p4->next!=NULL)
			{p5=p4;
			p4=p4->next;
			}
		if(strcmp(name,p4->name)==0)
			{
			printf("成功检索%s\n",name);
			printf("|    员工编号    |     姓名    |     职位    |     工资    |\n");
			printf("      %2d             %s             %s            %2d \n",p4->num,p4->name,p4->job,p4->pay);
			}
		else printf("找不到%s",name);
		}
	}

}