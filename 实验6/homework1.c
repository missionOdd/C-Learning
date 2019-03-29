#include<stdio.h>
main()
{int year,i=0;
	for(year=2000;year<=3000;year++)
	{	if(year%4==0&&year%100!=0||year%400==0)
		{printf("%d ",year);
		i++;
		if(i%10==0)
			{printf("\n");}
		}
	}
printf("ÓĞ%d¸öÈòÄê\n",i);
return 0;
}