#include<stdio.h>
#include<math.h>
int main()
{int prime(int);
int n;
printf("����һ��������");
scanf("%d",&n);
if(prime(n))
	{printf("%d��������",n);}
else 
	{printf("%d����������",n);}
return 0;
}
int prime(int n)
{int i,flag=1;
for(i=2;i<=(int)sqrt(n)&&flag==1;i++)
	{if(n%i==0)
		flag=0;
	}
return (flag);
}