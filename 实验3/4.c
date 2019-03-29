#include<stdio.h>
int main()
{float h,r,l,s,sq,vq,vz;
float pi =3.1415926;
printf("请输入圆半径人，圆柱高h：");
scanf("%f,%f",&r,&h);
l=2*pi*r;
s=r*r*pi;
sq=4*pi*r*r*r;
vq=3.0/4.0*pi*r*r*r;
vz=pi*r*r*h;
printf("圆周长为：	l=%6.2f\n",l);
printf("圆面积为：	s=%6.2f\n",s);
printf("圆球表面积为：	sq=%6.2f\n",sq);
printf("圆球体积为：	v=%6.2f\n",vq);
printf("圆柱体积为：	vz=%6.2f\n",vz);
return 0;
}