#include<stdio.h>
int main()
{int i,j,k,l;//i�ǿ����б�����j�ǿ��ƿո������k�ǿ���*���
printf("����һ��0-9�ڵ�����");
scanf("%d",&l);
for(i=l;i>0;i--)
{for(j=l;j>i;j--)
	{
	printf(" ");
	}
	for(k=0;k<2*i-1;k++)
		{
		printf("%d",i);
		}
printf("\n");
}
for(i=2;i<=l;i++)
{for(j=0;j<l-i;j++)
	{
	printf(" ");
	}
	for(k=0;k<2*i-1;k++)
		{
		printf("%d",i);
		}
printf("\n");

}
return 0;
}