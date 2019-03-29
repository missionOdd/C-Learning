#include<stdio.h>
#define N 5
struct student
{
    char num[6];
    char name[8];
    int score[4];
}stu[N];

int main()
{
    void input(struct student str[]);
    void print(struct student str[]);
    input(stu);
    print(stu);
    return 0;
}

void input(struct student str[])
{
    int i,j;
    for (i=0;i<N;i++)
	{
        printf("输入学生%d的分数:\n",i+1);
        printf("NO.:");
        scanf("%s",stu[i].num);
        printf("name:");
        scanf("%s",stu[i].name);
        for(j=0;j<3;j++)
		{
	        printf("分数%d:",j+1);
	        scanf("%d",&stu[i].score);
		}
        printf("\n");
	}
}

void print(struct student stu[6])
{
    int i,j;
    printf("\n 序号 名字 分数1 分数2 分数3\n");
    for (i=0;i<N;i++)
	{
        printf("%5s%10s",stu[i].num,stu[i].name);
        for (j=0;j<3;j++)
	    printf("%9d",stu[i].score[j]);
        printf("\n");
	}
}
