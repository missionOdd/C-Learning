#include<stdio.h>
#include<math.h>
int main()
{int num,i,j=0;
puts("100-500间的全部素数：");
for(num=100;num<=500;num++)
	{for(i=2;i<=(int)sqrt(num)+1;i++)
		{if(num%i==0)
			break;
		}
	if(i==((int)sqrt(num)+2))	/*如果循环没有中途break,即有i等于(int)sqrt(num)+1,
								则说明该数是素数*/
		{printf("%d ",num);
		j++;
		if(j%10==0&&j!=0)
			{printf("\n");}
		}
	}	

printf("素数个数为：%d\n",j);	

return 0;
}