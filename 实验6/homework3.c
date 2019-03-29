#include<stdio.h>
int main()
{int a,b,c,num;
printf("水仙花数有:");
for(num=100;num<1000;num++)
{a=num/100;
b=num/10%10;
c=num%10;
if(num==a*a*a+b*b*b+c*c*c)
printf("%d ",num);
}
return 0;
}