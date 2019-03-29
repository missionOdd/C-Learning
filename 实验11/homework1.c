#include<stdio.h>
int main()
{int hcf(int,int);
int lcd(int,int);
int a,b,h,l;
scanf("%d,%d",&a,&b);
h=hcf(a,b);
l=lcd(a,b,h);
printf("H.C.F=%d.\nL.C.D=%d.\n",h,l);
return 0;
}
int hcf(int u,int v)
{int temp,r;
if(u>v)
	{temp=u;u=v;v=temp;}
while((r=u%v)!=0)
	{
	u=v;
	v=r;		
	}
return v;
}
int lcd(int u,int v,int h)
{
 return (u*v/h);
}