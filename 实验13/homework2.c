#include<stdio.h>
int Hcf,Lcd;
int main()
{
	void hcf(int,int);
	void lcd(int,int);
	int u,v;
	printf("输入两个正整数，以逗号隔开\n");
	scanf("%d,%d",&u,&v);
	hcf(u,v);
	lcd(u,v);
	printf("最大公约数H.C.F=%d\n",Hcf);
	printf("最小公倍数L.C.D=%d\n",Lcd);
	return 0;
}
void hcf(int u,int v)
{
	int t,r;
	if(v>u)
	{t=u;u=v;v=t;}
	while((r=u%v)!=0)
	{u=v;v=r;}
	Hcf=v;
}
void lcd(int u,int v)
{
	Lcd=u*v/Hcf;
}
