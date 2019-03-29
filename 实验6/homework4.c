#include<stdio.h>
main()
{float x=100,sum=100;int i;
for(i=0;i<10;i++)
{
x=x/2;//第i次反跳高度
sum+=(2*x);//第i次落地时共经过的米数
}
printf("共经过%fm,第10次反弹%fm\n",sum,x);
}
