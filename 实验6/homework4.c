#include<stdio.h>
main()
{float x=100,sum=100;int i;
for(i=0;i<10;i++)
{
x=x/2;//��i�η����߶�
sum+=(2*x);//��i�����ʱ������������
}
printf("������%fm,��10�η���%fm\n",sum,x);
}
