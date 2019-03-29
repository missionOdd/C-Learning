#include<stdio.h>
#include<string.h>
int main()
{char s1[80],s2[80];
int i;
printf("ÊäÈës1×Ö·û´®£º");
scanf("%s",s1);
printf("s1×Ö·û´®Îª£º%s\n",s1);
for(i=0;i<=strlen(s1);i++)
	{
	s2[i]=s1[i];
	}
printf("s2×Ö·û´®Îª£º%s\n",s2);
return 0;
}