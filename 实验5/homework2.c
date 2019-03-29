#include<stdio.h>
main()
{int a,b,c,d;
restar:printf("请输入三个整数:");
scanf("%d,%d,%d",&a,&b,&c);
if(a<b)
{d=a;a=b;b=d;};
if (a<c)
{d=a;a=c;c=d;};
if(b<c)
{d=b;b=c;c=d;};
printf("%d>%d>%d\n",a,b,c);
goto restar;
}