#include<stdio.h>
int main()
{int a[2],i;
printf("输入4个不同的整数:");
for(i=0;i<4;i++)
{scanf("%d",&a[i]);
a[i]=a[i+1];
}
}
