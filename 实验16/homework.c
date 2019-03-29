#include<stdio.h>
struct
	{
	    int year;
		int month;
		int day;
	}date;
int main()
{
	int days;
	printf("输入年，月，日:");
	scanf("%d,%d,%d",&date.year,&date.month,&date.day);
	switch(date.month)
	{
		case 1:days=date.day;
		case 2:days=date.day+31;break;
		case 3:days=date.day+59;break;
		case 4:days=date.day+90;break;
		case 5:days=date.day+120;break;
		case 6:days=date.day+151;break;
		case 7:days=date.day+181;break;
		case 8:days=date.day+212;break;
		case 9:days=date.day+243;break;
		case 10:days=date.day+273;break;
		case 11:days=date.day+304;break;
		case 12:days=date.day+334;break;
	}
	if((date.year%4==0 && date.year%100!=0 || date.year%400==0) && date.month>=3)  
		days+=1;
	printf("%d/%d是第%d天，在%d年中.\n",date.month,date.day,days,date.year);
	return 0;
}