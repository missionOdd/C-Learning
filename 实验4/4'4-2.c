#include<stdio.h>
int main()
{
	int a,b,c,temp,max;
	printf("��������������:");
	scanf("%d,%d,%d",&a,&b,&c);
	temp=(a>b)?a:b;  //��a��b�еĴ��ߴ���temp��
	max=(temp>c)?temp:c;//����ͬ��
	printf("�����������������%d\n",max);
	return 0;
}
