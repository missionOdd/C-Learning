#include<stdio.h>
int Hcf,Lcd;
int main()
{
	void hcf(int,int);
	void lcd(int,int);
	int u,v;
	printf("�����������������Զ��Ÿ���\n");
	scanf("%d,%d",&u,&v);
	hcf(u,v);
	lcd(u,v);
	printf("���Լ��H.C.F=%d\n",Hcf);
	printf("��С������L.C.D=%d\n",Lcd);
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
