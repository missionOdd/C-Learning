#include<stdio.h>
#include<math.h>
int place,a[6];i;		//ȫ�ֱ���
int main()
{void digit();
void StraightBet(); 
void reverse_order();//��������
	int num;
printf("����һ��������5λ��������:");
scanf("%d",&num);
	for(;num>99999||num<=0;)
	{printf("������������������:");
scanf("%d",&num);			//��������Ƿ���ȷ
}
digit(num);    //��������λ�ĺ���
StraightBet(num);//���õõ�ÿλ���ֵĺ���
reverse_order(num);//����ʹ������˳����ת�ĺ���
}
//����λģ��
void digit(int x)  
{
	for(place=1;x>10;place++)
	{x=x/10;}	//ͨ��ѭ������10ȡ����ֱ��ȡ��С��10��ѭ���Ĵ���+1������λ
printf("������%dλ��\n",place);
}
//��ÿλ����ģ��
void StraightBet(int y)
{printf("ÿλ�����ǣ�");
	for(i=1;i<=place;i++)
	{a[i]=y/(int)(pow(10,place-i));//������10��place-i�η���ȡ��
	y=y%(int)(pow(10,place-i));//������10��place-i�η���ȡ��
	printf("%d ",a[i]);
	}
printf("\n");
}
//˳����תģ��
void reverse_order(int z)
{printf("˳��ת");
	for(;i>1;i--)
	{printf("%d ",a[i-1]);}//ͨ����һģ��õ���������д�ӡ
	printf("\n");
}