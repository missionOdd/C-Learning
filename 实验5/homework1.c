#include<stdio.h>
main()
{int year,leap=0;
restar:printf("����һ�����\n");
scanf("%d",&year);
	if(year%4==0&&year%100!=0||year%400==0)
	{leap=1;}
	else {leap=0;}
	switch(leap)
	{
	case 0:	printf("%d��������\n",year);break;
	case 1:	printf("%d������\n",year);break;
	}
goto restar;
return 0;
}