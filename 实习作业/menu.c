/*********����˵�����***********
		������Ա��������
	����������visual C++6.0		
	������ֻ�����ڡ�Windowsϵͳ	*/
#include<stdio.h>
#include<math.h>
#include <conio.h>
#include<windows.h>
#include<time.h>
#define N 15//��������
#define M 10//��������

//��������
//������ʾ
void desGui();//���ܽ���
void loadGui();//����ҳ��
void menuGui();//�˵�����
void optionGui();//�������ѡ�����
//��opt���ݴ���
void get1();//�˵�ѡ������1-9
void menuOptions();//�˵��õ����ݺ��ִ�к���
void get2();//�������ѡ������1-9��a-c
void Suboptions();//�������ѡ��õ����ݺ��ִ�к���

//�˵��е�9������
void maxComDivisor();//�����Լ��
void counterExchang();//���н���
void Bisearch();//�۰����
void primeNum();//����
void Factorial();//n!
void bubbleSort();//ð������
void selectSort();//ѡ������
void PointSort();//��ָ���������������
void day();//����ĳһ���ڱ����еĵڼ���

//�����봦��
void checkCode();//ģ����֤��

//����ѡ��ı���
char opt;

//������
int main()
{loadGui();
system("color f2");//dos�����������color f2��f�Ǳ���ɫ�����ף�2������ɫ��ǳ��
system("title ����˵�1.0.0 Beta��");//�޸�dos������
desGui();
printf("�����������...");
getch();//����һ������������룬���ð��س��ͷ��أ��õ�ͷ�ļ�conio.h
loadGui();
Sleep(100);//�ӳ�ִ�����100����
menuGui();
return 0;
}

//���ܽ���
void desGui()
{
printf("\t\t++===========================++\n");
printf("\t\t||     C����ʵ��˵����     ||\n");Sleep(50);
printf("\t\t++===========================++\n");Sleep(50);
printf("\t\t|| ������������              ||\n");Sleep(50);
printf("\t\t|| �༶���ƿ�1171            ||\n");Sleep(50);
printf("\t\t|| ��Ȩ���㶫�����ѧ        ||\n");Sleep(50);
printf("\t\t||       ��ѧ������ѧԺ    ||\n");Sleep(50);
printf("\t\t||��ʾ��1.�����enter��;   ||\n");Sleep(50);
printf("\t\t||      2.���ֵ���������     ||\n");Sleep(50);
printf("\t\t||       ��λ��ǧλ����;     ||\n");Sleep(50);
printf("\t\t||      3.dos����Ҫ����;     ||\n");Sleep(50);
printf("\t\t|| *���������ѧϰ����ʹ��*  ||\n");Sleep(50);
printf("\t\t++===========================++\n");Sleep(50);
}
//����ҳ��
void loadGui()
{int flag=3;
	while(flag)
	{flag--;system("cls");printf("���ڼ��أ�..........");
	printf("\n���~�}�|�{�z�y�x�y�z�{�|�}�~���~�}�|�{�z�y�x�y�z�{�|�}�~���~�}�{�{�z�y�x ");system("cls");printf("���ڼ��أ�......");	
	printf("\n�~�}�|�{�z�y�x�y�z�{�|�}�~���~�}�|�{�z�y�x�y�z�{�|�}�~���~�}�|�{�z�y�x�y ");system("cls");printf("���ڼ��أ�...");
	printf("\n�}�|�{�z�y�x�y�z�{�|�}�~���~�}�|�{�z�y�x�y�z�{�|�}�~���~�}�{�{�z�y�x�y�z ");system("cls");printf("���ڼ��أ�...");
	printf("\n�|�{�z�y�x�y�z�{�|�}�~���~�}�|�{�z�y�x�y�z�{�|�}�~���~�}�{�{�z�y�x�y�z�{ ");system("cls");printf("���ڼ��أ�......");
	printf("\n�{�z�y�x�y�z�{�|�}�~���~�}�|�{�z�y�x�y�z�{�|�}�~���~�}�{�{�z�y�x�y�z�{�| ");system("cls");				  ;
	}
printf("���سɹ���\n");
}

//�˵�����
void menuGui()
{system("cls");//��ҳ
printf("\n");
printf("\t\t++========================================================++\n");
printf("\t\t||                       ����˵���                       ||\n");Sleep(100);
printf("\t\t++========================================================++\n");Sleep(100);
printf("\t\t||  [1]	���������������������                          ||\n");Sleep(100);
printf("\t\t||  [2] ��ά������к��е�Ԫ�ػ���                        ||\n");Sleep(100);
printf("\t\t||  [3] �۰뷨����ĳ�����������еĵڼ���Ԫ�ص�ֵ          ||\n");Sleep(100);
printf("\t\t||  [4] ��m~n���ȫ������                                 ||\n");Sleep(100);
printf("\t\t||  [5] �õݹ�ķ�����n�Ľ׳�                             ||\n");Sleep(100);
printf("\t\t||  [6] ��10��ѧ���ɼ���ð�ݷ������ɵ͵��ߵ�����          ||\n");Sleep(100);
printf("\t\t||  [7] ��10��ѧ���ɼ���ѡ�񷨽����ɵ͵��ߵ�����          ||\n");Sleep(100);
printf("\t\t||  [8] ��ָ�������Ϊ���������������������д�С����      ||\n");Sleep(100);
printf("\t\t||  [9] ����ĳһ���ڱ����еĵڼ���                        ||\n");Sleep(100);
printf("\t\t++========================================================++\n");Sleep(100);
get1();
}

//�������ѡ�����
void optionGui()
{printf("\n=================================================\n");
Sleep(500);
printf("++=======�������========++\n");Sleep(100);
printf("||      a.��ʾ�˵�       ||\n");Sleep(100);
printf("||      b.��������       ||\n");Sleep(100);
printf("||      c.�˳�����       ||\n");Sleep(100);
printf("||      1-9.ѡ������     ||\n");Sleep(100);
printf("++=======================++\n");Sleep(100);
printf("������(a-c��1-9):\n");
get2();
}

//�˵��õ����ݺ��ִ�к���
void menuOptions()
{switch(opt)
	{case '1':maxComDivisor();break;
	case '2':counterExchang();break;
	case '3':Bisearch();break;
	case '4':primeNum();;break;
	case '5':Factorial();break;
	case '6':bubbleSort();break;
	case '7':selectSort();break;
	case '8':PointSort();break;
	case '9':day();break;
	}
optionGui();
}

//�������ѡ��õ����ݺ��ִ�к���
void Suboptions()
{switch(opt)
	{case 'a':menuGui();break;
	case 'c':exit(0);break;
	default:menuOptions();break;
}
optionGui();
}

//�˵�ѡ������1-9
void get1()
{int flag=1,bottle;//flag�ж�����Դ�bottle�ж����뻺�����ĵ�һ���ַ�
printf("====================�˵�ѡ��=====================\n");
printf("����˵�ѡ��(1��9)��\n");
while(flag)
	{
	scanf("%c",&opt);
	bottle=(getchar()!='\n');//bottle�ж����뻺�����ĵ�һ���ַ��Ƿ�Ϊ�س�
	if(opt>'0'&&opt<='9'&&bottle==0)
		{menuOptions();
		flag=0;}
	else 
		{if(bottle!=0)
			{while(getchar()!='\n');}//�������뻺����
		switch(flag)
			{case 1:printf("[Message]��������е����⣬�鷳��������:\n");flag++;break;
			case 2:printf("[Message]������˵������룬лл���:\n");flag++;break;
			case 3:printf("[Message]�����뵷�����ٸ���λ��ᣬ��������:\n");flag++;break;
			case 4:printf("[Message]��( ���գ���) �����ڻ��������л���������!\n[Message]������֤��ϵͳ!\n");checkCode();flag=1;printf("\n\n����˵�ѡ��(0��9)��\n");break;
			}
	
		}
	}
}

//�������ѡ������1-9��a-c
void get2()
{int flag=1,bottle;//flag�ж�����Դ�bottle�ж����뻺�����ĵ�һ���ַ�
char last=opt;//������һ�ε�optѡ��������������
while(flag)
	{
	scanf("%c",&opt);
	bottle=(getchar()!='\n');//bottle�ж����뻺�����ĵ�һ���ַ��Ƿ�Ϊ�س�
	if(opt>'0'&&opt<='9'&&bottle==0)
		{menuOptions();
		flag=0;}
	else if(opt>='a'&&opt<='c'&&bottle==0)
			{if(opt=='b')
				{opt=last;}
			Suboptions();
			flag=0;}
		else {if(bottle!=0)
				{while(getchar()!='\n');}
			switch(flag)
			{case 1:printf("[Message]��������е����⣬�鷳��������:\n");flag++;break;
			case 2:printf("[Message]������˵������룬лл���:\n");flag++;break;
			case 3:printf("[Message]�����뵷�����ٸ���λ��ᣬ��������:\n");flag++;break;
			case 4:printf("[Message]��( ���գ���) �����ڻ��������л���������!\n[Message]������֤��ϵͳ!\n");
					checkCode();flag=1;optionGui();break;
			}
	
		}
	}

menuOptions();
} 

//ģ����֤��
void checkCode()
{int i,bottle,flag=1;
char allCode[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJLMNOPQRSTUVWXYZ";//������֤��
char getCode[5],writeCode[5];//getCode[5]�ǻ������������ַ���writeCode[5]��д������������ַ�
printf("=====================��֤��=======================\n");Sleep(100);
while(flag)
	{srand((unsigned)time(NULL));//ȡ��������ӣ�ָ������ֵΪʱ�� 
	printf("��֤�룺\n");
		printf("+--------------------+\n");
		printf("|");
	for (i=0; i<4; i++)
		{getCode[i]=allCode[rand()%(int)strlen(allCode)];//�������[0, allCode����Ч����ֵ)�в��������Ҳ������������ΪallCode�����±�
	    printf("%4c ",getCode[i]);
		}
	getCode[i]='\0';
	printf("|\n");
	printf("+--------------------+\n");
	printf("\n��������֤�루�����ִ�Сд��\n");
	for (i=0; i<4; i++)
		{
		scanf("%c",&writeCode[i]);
		}
	bottle=(getchar()!='\n');//�ж����뻺�����Ƿ����
	writeCode[i]='\0';
	strlwr(getCode);//��д��Сд
	strlwr(writeCode);//��д��Сд
	if(strcmp(getCode,writeCode)==0&&bottle==0)
		{printf("[M1essage]��֤�ɹ�\n");
		flag=0;}
	else 
		{
		printf("[Message]��֤�����,������\n");
		flag++;
		if(bottle!=0)
			{while(getchar()!='\n');}
		if(flag>5)
			{printf("[Message]��֤ʧ�ܣ���������\n");
			exit(0);
			}
		}	
	}
}


//�����Լ��
void maxComDivisor()
{int u,v,r,temp;//u�����,vС����,r��������temp��תվ
loadGui();system("cls");
printf("===================���Լ��====================\n");Sleep(100);
printf("�԰�Ƕ��Ÿ�������2����\n");
scanf("%d,%d",&u,&v);
while(!(u>0&&v>0))
	{while(getchar()!='\n');
	printf("[Message]�����������������:\n");
	scanf("%d,%d",&u,&v);
	}
while(getchar()!='\n');
if(v>u) 
	{temp=v;v=u;u=temp;}
while((r=u%v)!=0)//շת�����
	{u=v;v=r;}
printf("���Լ��Ϊ:%d\n",v);
}

//���н���
void counterExchang()
{int a[M][M],b[M][M],i,j,n,temp;//i�У�j�У�n������a��n*n��Ԫ��
loadGui();system("cls");
printf("====================���н���=====================\n");Sleep(100);
printf("��������a��n*n��Ԫ�أ�����n(1~6)��");
scanf("%d",&n);
while(!(n>=1&&n<=6))
	{while(getchar()!='\n');
	printf("[Message]�����������������:\n");
	scanf("%d",&n);
	}
while(getchar()!='\n');
for(i=0;i<n;i++)
	{printf("�����%d�е�����Ԫ��%d��(���ּ��Կո����):\n",i+1,n);
	for(j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);
		}
	while(getchar()!='\n');
	}
printf("����aΪ��\n");
for(i=0;i<n;i++)
	{for(j=0;j<n;j++)
		{printf("%5d",a[i][j]);
		}
	printf("\n");
	}
for(i=0;i<n;i++)
	{for(j=i;j<n;j++)
		{temp=a[i][j];
		a[i][j]=a[j][i];
		a[j][i]=temp;
		}
	}
for(i=0;i<n;i++)
	{for(j=0;j<n;j++)
		{b[i][j]=a[i][j];
		}
	}
printf("����bΪ��\n");
for(i=0;i<n;i++)
	{for(j=0;j<n;j++)
		{printf("%5d",b[i][j]);
		}
	printf("\n");
	}
}

//�۰��������������
void Bisearch()
{int a[N]={105,45,30,15,14,13,12,10,9,8,5,4,3,2,1},i,num,flag=1,top,low,mid,find;
char c;
//i�±�,num���ҵ���,flag�ж���������,top���ҷ�Χ���ֵ,low���ҷ�Χ��Сֵ,mid�м�ֵ,find�ж��Ƿ��ҵ���cѡ���Ƿ����
loadGui();system("cls");
printf("===================�۰����=====================\n");Sleep(100);
printf("[Message]�Ƿ��ֶ�����(�ɴ�С��)���飿(�ǰ�Y����������N)\n");
c=getchar();
while(getchar()!='\n');
if(c!='N'&&c!='n')
	{printf("[Message]:����15��Ԫ�أ��ɴ�С			(��ʾ����Ԫ���Դ�)\n");
	for(i=0;i<N;i++)
		{printf("��%d��Ԫ�أ�",i+1);
		scanf("%d",&a[i]);
		while(getchar()!='\n');
		if(i>0&&a[i]>a[i-1])
			{printf("[Message]�����������������:        (��ʾ���ɴ�С)\n");
			i--;flag++;
			if(flag>5)
				{checkCode();flag=1;}
			}
		}
	}
printf("\n����Ϊ��\n");
for(i=0;i<N;i++)
	{printf("%6d",a[i]);}
Sleep(500);
flag=1;
while(flag)
	{top=N-1;low=0;mid=0;find=0;
	printf("\n��������ҵ�Ԫ�أ�");
	scanf("%d",&num);while(getchar()!='\n');
	if(num<=a[0]&&num>=a[N-1])
		{while((find==0)&&(low<=top))
			{
			mid=(top+low)/2;
			printf("ɨ��λ�÷�Χ:(%2d~%2d)\t�м�ֵ:%2d\n",low+1,top+1,mid+1);Sleep(300);//ɨ����ҷ�Χ���
			if(num==a[mid])
				{find=1;}//��ʾ�ҵ���
			else if(num>a[mid])//��Сɨ������
					{top=mid-1;}
				else {low=mid+1;}
			}
		}
if(find==1)
	{printf("[Message]�ҵ�����:%d,�ڵ�%d��λ��\n",num,mid+1);
	}
else {printf("[Message]�޴�������%d\n",num);}
printf("[Message]�Ƿ����²��ң�(�ǰ�Y����������N)\n");
c=getchar();while(getchar()!='\n');
if(c=='N'||c=='n')
	flag=0;
	}
}
//������
void primeNum()
{int m=0,n=0,i,num,count=0;
//m,n��������Χ��i�����±꣬num�Ƿ�Χ�����֣�count��������������
loadGui();system("cls");
printf("===================�ҳ�����=====================\n");Sleep(100);
while(1)
	{printf("������ʼֵ����������m��\n");
	scanf("%d",&m);
	while(getchar()!='\n');
	printf("������ֵֹ����������n��\n");
		scanf("%d",&n);
	while(getchar()!='\n');
	if(m>=n||m<=0)
		{printf("�����������������\n");}
	else break;
	}
printf("�����У�\n");
for(num=m;num<=n;num++)
	{for(i=2;i<=(int)sqrt(num);i++)
		{if(num%i==0)//�ж�����
			{break;}
		}
	if(i>=(int)sqrt(num)+1&&num!=1)//�жϲ��������
		{printf("%5d",num);
		count++;
		if(count%10==0&&count>=10)
			{printf("\n");}
		}	
	}
printf("\n��%d~%d�ڹ���%d������.\n",m,n,count);
}

//��n!
void Factorial()
{int n,resu;
int FactorialFunction(int);
loadGui();system("cls");
printf("===================n�Ľ׳�=====================\n");Sleep(100);
printf("����(������)n:         ����ʾ:n��Ҫ̫��\n");
scanf("%d",&n);
while(getchar()!='\n');
while(n<=0)
	{
	printf("[Message]�����������������:\n");
	scanf("%d",&n);
	while(getchar()!='\n');
	}
resu=FactorialFunction(n);
printf("%d!=%d\n",n,resu);
}
//n!����ģ��
int FactorialFunction(int n)
{int f;
if(n==1||n==0)
 f=1;
else
f=FactorialFunction(n-1)*n;//�ݹ�
return f;
}




//�Գɼ���ð�ݷ������ɵ͵��ߵ�����

/*ð�ݷ��Ż���
�Ż�1.��ӱ�־λ����¼���һ�ν���λ�õĵط���
֤�����һ�ν���λ��֮��ĵط�ʱ���ź���ģ�
��һ��ֻ��Ҫ�����һ��֮ǰ����֮�󣩵ĵط�ɨ��ͺ���,
�Ż�2.˫��ð�ݣ�ÿ���������һ���ҵ�һ�����ֵ������Сֵ��
��ʵ���������һ�ν���λ�õĵط����ٴ����ֵ������Сֵ֮��ɨ������
ʹ������һ�����������  */
void bubbleSort()
{int a[M],i,j,k,temp,posit=0,high=M-1,low=0;
//i,j,k�����±꣬temp��תվ��poist�Ǽ��½���λ�ã�high��ɨ�跶Χ���ֵ��low��ɨ�跶Χ��Сֵ
loadGui();system("cls");
printf("===================ð������=====================\n");Sleep(100);
for(i=0;i<M;i++)
	{printf("��%d��ѧ���ɼ���",i+1);
	scanf("%d",&a[i]);
	while(getchar()!='\n');
	}
printf("\nѧ���ɼ�����Ϊ��\n");
for(k=0;k<10;k++)
	{printf("%5d",a[k]);}
printf("\n");
while(low<high)
	{for(i=low;i<high;i++)//����ð��
		{if(a[i]>a[i+1])
			{temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			posit=i;
			printf("\nmax����:%2d��λ [%3d]<-->[%3d]   ",i+2,a[i],a[i+1]);printf("����ð�ݽ��Ϊ��");
			for(k=0;k<10;k++)//���ÿ��������
				{
				if(k==i+1)	printf(" ��%d��",a[k]);
				else		printf("   %d  ",a[k]);
				}
			Sleep(200);
			}
		}
		high=posit;
	for(j=high;j>low;j--)//����ð��
		{if(a[j]<a[j-1])
			{temp=a[j];
			a[j]=a[j-1];
			a[j-1]=temp;
			posit=j;
			printf("\nmin����:%2d��λ [%3d]<-->[%3d]   ",j,a[j-1],a[j]);printf("����ð�ݽ��Ϊ��");
			for(k=0;k<10;k++)//���ÿ��������
				{
				if(k==j-1)	printf(" ��%d��",a[k]);
				else		printf("   %d  ",a[k]);
				}
			Sleep(200);
			}
		}
		low=posit;
	}
printf("\n[Message]ð���������ս����\n");
for(k=0;k<10;k++)
	{printf("%5d",a[k]);}
printf("\n");
}



/*�����Ĵ��룺ѡ���Ż��㷨һ

void selectSort()
{int a[M],i,j,k,temp,posit=0,high=M-1,low=0;
loadGui();system("cls");
printf("===================ѡ������=====================\n");Sleep(100);
for(i=0;i<M;i++)
	{printf("��%d��ѧ���ɼ���",i+1);
	scanf("%d",&a[i]);
	while(getchar()!='\n');
	}
printf("\nѧ���ɼ�����Ϊ��\n");
for(k=0;k<10;k++)
	{printf("%5d",a[k]);}
printf("\n");
for(i=0;i<M/2;i++)
	{
	for(j=low;j<M-i;j++)
		{if(a[i]>a[j])
			{temp=a[j];
			a[j]=a[i];
			a[i]=temp;
			low=j;posit=1;
			}
		}
	if(a[low]!=a[i+1]&&posit==1)
		{temp=a[low];
		a[low]=a[i+1];
		a[i+1]=temp;
		posit=0;
		}
	else low=i+1;
	for(j=high;j>i;j--)
		{if(a[M-i-1]<a[j])
			{temp=a[M-i-1];
			a[M-i-1]=a[j];
			a[j]=temp;
			temp=high;
			high=j;posit=1;
			}	
		}
	if(a[high]!=a[M-i-2]&&posit==1)
		{temp=a[high];
		a[high]=a[M-i-2];
		a[M-i-2]=temp;
		posit=0;
		}
	else high=M-i-2;
	}
printf("\n[Message]ѡ���������ս����\n");
for(k=0;k<10;k++)
	{printf("%5d",a[k]);}
printf("\n");
}*/






//�Գɼ���ѡ�񷨽����ɵ͵��ߵ�����

/*ѡ���Ż���1.��ӱ�־λ����¼���һ�ν���λ�õĵط���
			   2.˫��ѡ��*/

void selectSort()
{int a[M],i,j,k,temp,high,low;
//i,j,k�����±꣬temp��תվ��high��ɨ�跶Χ���ֵ��low��ɨ�跶Χ��Сֵ
loadGui();system("cls");
printf("===================ѡ������=====================\n");Sleep(100);
for(i=0;i<M;i++)
	{printf("��%d��ѧ���ɼ���",i+1);
	scanf("%d",&a[i]);
	while(getchar()!='\n');
	}
printf("\nѧ���ɼ�����Ϊ��\n");
for(k=0;k<10;k++)
	{printf("%5d",a[k]);}
printf("\n");
for(i=0;i<M/2;i++)
	{high=M-i-1;low=i;
//����ѡ��
	for(j=low;j<M-i;j++)
		{if(a[low]>a[j])
			{
			low=j;//����Ҫ������λ��
			}
		}
	temp=a[low];a[low]=a[i];a[i]=temp;
			printf("\nlow ����:%2d��λ [%3d]<-->[%3d]   ",i+1,a[i],a[low]);printf("����ѡ����Ϊ��");
			for(k=0;k<10;k++)//���ÿ��������
				{
				if(k==i)	printf(" ��%d��",a[k]);
				else		printf("   %d  ",a[k]);
				}
			Sleep(200);
//����ѡ��
	for(j=high;j>i;j--)
		{if(a[high]<a[j])
			{
			high=j;//����Ҫ������λ��
			}	
		}
	temp=a[high];a[high]=a[M-i-1];a[M-i-1]=temp;
			printf("\nhigh����:%2d��λ [%3d]<-->[%3d]   ",M-i-1,a[i],a[low]);printf("����ѡ����Ϊ��");
			for(k=0;k<10;k++)//���ÿ��������
				{
				if(k==M-i-1)	printf(" ��%d��",a[k]);
				else		printf("   %d  ",a[k]);
				}
			Sleep(200);
	}
printf("\n[Message]ѡ���������ս����\n");
for(k=0;k<10;k++)
	{printf("%5d",a[k]);}
printf("\n");
}

//��ָ�������������������������
void PointSort()
{int *p,*q;
int a,b;
void maxSort(int *p,int *q);
loadGui();system("cls");
printf("================��ָ���������===================\n");Sleep(100);
printf("�����������������ּ��ð�Ƕ��Ÿ�������\n");
scanf("%d,%d",&a,&b);
while(getchar()!='\n');//�������뻺����
p=&a;q=&b;
maxSort(p,q);
printf("�ɴ�С��%d,%d\n",a,b);
}
//����������ģ��
void maxSort(int *p,int *q)
{int temp;
if(*p<*q)
	{temp=*p;
	*p=*q;
	*q=temp;
	}
}


//�����սṹ��
struct ymd
{int year;
int mon;
int day;
};
//��ָ���������������
void day()
{struct ymd date;int sum=0,flag=1,leap=0;//sum��õڼ��죬flag�ж�����Դ�leap�ж�����
loadGui();system("cls");
printf("==================������������===================\n");Sleep(100);
while(flag)
	{
	printf("������/��/�գ����ּ���/����,����2018/1/1��\n");
	scanf("%d/%d/%d",&date.year,&date.mon,&date.day);
	while(getchar()!='\n');//�������뻺����
	if((date.year%4==0&&date.year%100!=0)||date.year%400==0)//�ж�����
	{leap=1;
	}
	switch(date.mon)
		{case 1:if(date.day<=31)sum=date.day;break;
		case 2:if((date.day<=29&&leap==1)||(date.day<29))sum=date.day+31;else flag++;break;
		case 3:if(date.day<=31)sum=date.day+59;else flag++;break;
		case 4:if(date.day<31)sum=date.day+99;else flag++;break;
		case 5:if(date.day<=31)sum=date.day+120;else flag++;break;
		case 6:if(date.day<31)sum=date.day+151;else flag++;break;
		case 7:if(date.day<=31)sum=date.day+181;else flag++;break;
		case 8:if(date.day<=31)sum=date.day+212;else flag++;break;
		case 9:if(date.day<31)sum=date.day+243;else flag++;break;
		case 10:if(date.day<=31)sum=date.day+273;else flag++;break;
		case 11:if(date.day<31)sum=date.day+304;else flag++;break;	
		case 12:if(date.day<=31)sum=date.day+334;else flag++;break;
		default:flag++;break;
		}
	flag--;
	if(flag) printf("�����������������\n");
	if(date.mon>=3&&leap==1) sum++;
	}
printf("%d��%d����%d���ǵ�%d��.\n",date.mon,date.day,date.year,sum);
}