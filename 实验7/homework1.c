#include<stdio.h>
#include<math.h>
int main()
{int num,i,j=0;
puts("100-500���ȫ��������");
for(num=100;num<=500;num++)
	{for(i=2;i<=(int)sqrt(num)+1;i++)
		{if(num%i==0)
			break;
		}
	if(i==((int)sqrt(num)+2))	/*���ѭ��û����;break,����i����(int)sqrt(num)+1,
								��˵������������*/
		{printf("%d ",num);
		j++;
		if(j%10==0&&j!=0)
			{printf("\n");}
		}
	}	

printf("��������Ϊ��%d\n",j);	

return 0;
}