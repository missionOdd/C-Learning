#include<stdio.h>
void main()
{
	float numerator[20]={2,3},denominator[20]={1,2},sum=0;
	int i;	//numerator表示每一项的分子，denominator表示每一项的分母
	for(i=0;i<20;i++)
	{sum+=numerator[i]/denominator[i];
	if(i!=0&&i!=1&&i!=20)
		{
		numerator[i]=numerator[i-1]+numerator[i-2];
		denominator[i]=denominator[i-1]+denominator[i-2];
		}
	
	}
	printf("2/1，3/2，5/3，8/5，13/8，21/13. ……，\n这个数列的前20项之和为：%f\n",sum);
}