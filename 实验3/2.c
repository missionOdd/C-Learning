#include<stdio.h>
int main()
{int a,b;
float x,y;
char c1,c2;
scanf("a=%d b=%d",&a,&b);
scanf("%f%e",&x,&y);
scanf("%c%c",&c1,&c2);
printf("a=%d,b=%d,x=%f,y=%f,c1=%c,c2=%c\n",a,b,x,y,c1,c2);
return 0;
}