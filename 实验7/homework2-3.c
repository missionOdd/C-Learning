#include<stdio.h>
int main()
{int i,j,k;
for(i=0;i<8;i++)
{for(j=1;j<8-i;j++)
	{
	printf(" ");
	}
	for(k=0;k<=2*i;k++)
		{
		printf("*");
		}	
printf("\n");

}
return 0;
}