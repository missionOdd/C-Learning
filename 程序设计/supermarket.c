/*		����˵�����
		������Ա��������
	����������visual C++6.0		
	������ֻ�����ڡ�Windowsϵͳ	*/
#include<stdio.h>
#include<math.h>
#include <conio.h>
#include<windows.h>
#include<time.h>

//��������
void desGui();//���ܽ���
void loadGui();//���ؽ���
void menuGui();//�˵�����
void goodsSysGui();//��Ʒ���������
void personGui();//���²��������
void saleGui();//���۲��������
void endGui();//�����������
void getOpt();//ѡ�����
void checkCode();//��֤��ϵͳ

//��Ʒ����������
void goodsInfView();//�鿴��Ϣ
void goodsInfCreate();//�½���Ϣ
void goodsInfChange();//�޸���Ϣ
void goodsInfDelete();//ɾ����Ϣ
void goodsInfSearch();//������Ϣ
//��Ա����������
void perInfView();//�鿴��Ϣ
void perInfCreate();//�½���Ϣ
void perInfChange();//�޸���Ϣ
void perInfDelete();//ɾ����Ϣ
void perInfSearch();//������Ϣ

//���۲���������
void saleInfView();//�鿴��Ϣ
void saleInfChange();//�༭��Ϣ
void saleInfDelete();//ɾ����Ϣ
void saleInfSearch();//������Ϣ

//����ѡ��ı���
char opt;//ѡ�����
int sign;//ѡ���־

int main()
{
loadGui();
system("color f0");//dos�����������color f2��f�Ǳ���ɫ�����ף�2������ɫ��ǳ��
system("title ����˵�1.0.0 Beta��");//�޸�dos������
desGui();
printf("�����������...");
getch();//����һ������������룬���ð��س��ͷ��أ��õ�ͷ�ļ�conio.h
loadGui();
Sleep(100);//�ӳ�ִ�����100����
menuGui();
return 0;
}

void desGui()
{
printf("\t\t++===========================++\n");
printf("\t\t|| C����С�ͳ��й���ϵͳ��� ||\n");
printf("\t\t++===========================++\n");
printf("\t\t|| ������������              ||\n");
printf("\t\t|| �༶���ƿ�1171            ||\n");
printf("\t\t|| ��Ȩ���㶫�����ѧ        ||\n");
printf("\t\t||       ��ѧ������ѧԺ    ||\n");
printf("\t\t|| *���������ѧϰ����ʹ��*  ||\n");
printf("\t\t++===========================++\n");
}


//����ҳ��
void loadGui()
{int flag=1;
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
{sign=1;
system("cls");//��ҳ
printf("\n");
printf("\t\t*************************************************\n");
printf("\t\t*              ��С�ͳ��й���ϵͳ��             *\n");Sleep(100);
printf("\t\t*************************************************\n");Sleep(100);
printf("\n");Sleep(100);
printf("\t\t++=============================================++\n");Sleep(100);
printf("\t\t||              [1]��Ʒ������ϵͳ              ||\n");Sleep(100);
printf("\t\t++=============================================++\n");Sleep(100);
printf("\t\t||              [2]���²�����ϵͳ              ||\n");Sleep(100);
printf("\t\t++=============================================++\n");Sleep(100);
printf("\t\t||              [3]Ӫҵ������ϵͳ              ||\n");Sleep(100);
printf("\t\t++=============================================++\n");Sleep(100);
printf("\t\t||              [*]�˳�ϵͳ����	               ||\n");Sleep(100);
printf("\t\t++=============================================++\n");Sleep(100);
getOpt();
}

void goodsGui()
{sign=2;
system("cls");//��ҳ
printf("\n");
printf("\t\t++===========================++\n");Sleep(100);
printf("\t\t||    [1]��Ʒ������ϵͳ      ||\n");Sleep(100);
printf("\t\t++===========================++\n");Sleep(100);
printf("\t\t||      1.�鿴��Ʒ��Ϣ       ||\n");Sleep(100);
printf("\t\t||      2.�½���Ʒ��Ϣ       ||\n");Sleep(100);
printf("\t\t||      3.�޸���Ʒ��Ϣ       ||\n");Sleep(100);
printf("\t\t||      4.ɾ����Ʒ��Ϣ       ||\n");Sleep(100);
printf("\t\t||      5.������Ʒ��Ϣ       ||\n");Sleep(100);
printf("\t\t++===========================++\n");Sleep(100);
printf("\t\t||      *.������һ��         ||\n");Sleep(100);
printf("\t\t||      -.��һҳϵͳ         ||\n");Sleep(100);
printf("\t\t||      +.��һҳϵͳ         ||\n");Sleep(100);
printf("\t\t++===========================++\n");Sleep(100);
getOpt();
}



void personGui()
{sign=3;
system("cls");//��ҳ
printf("\n");
printf("\t\t++===========================++\n");Sleep(100);
printf("\t\t||    [2]���²�����ϵͳ      ||\n");Sleep(100);
printf("\t\t++===========================++\n");Sleep(100);
printf("\t\t||      1.�鿴ְԱ��Ϣ       ||\n");Sleep(100);
printf("\t\t||      2.�½�ְԱ��Ϣ       ||\n");Sleep(100);
printf("\t\t||      3.�޸�ְԱ��Ϣ       ||\n");Sleep(100);
printf("\t\t||      4.ɾ��ְԱ��Ϣ       ||\n");Sleep(100);
printf("\t\t||      5.����ְԱ��Ϣ       ||\n");Sleep(100);
printf("\t\t++===========================++\n");Sleep(100);
printf("\t\t||      *.������һ��         ||\n");Sleep(100);
printf("\t\t||      -.��һҳϵͳ         ||\n");Sleep(100);
printf("\t\t||      +.��һҳϵͳ         ||\n");Sleep(100);
printf("\t\t++===========================++\n");Sleep(100);
getOpt();
}


void saleGui()
{sign=4;
system("cls");//��ҳ
printf("\n");
printf("\t\t++===========================++\n");Sleep(100);
printf("\t\t||     [3]Ӫҵ������ϵͳ     ||\n");Sleep(100);
printf("\t\t++===========================++\n");Sleep(100);
printf("\t\t||      1.ͳ�������Ϣ       ||\n");Sleep(100);
printf("\t\t||      2.�½�������Ϣ       ||\n");Sleep(100);
printf("\t\t||      3.�޸ĳ�����Ϣ       ||\n");Sleep(100);
printf("\t\t||      4.ɾ��������Ϣ       ||\n");Sleep(100);
printf("\t\t||      5.����������Ϣ       ||\n");Sleep(100);
printf("\t\t++===========================++\n");Sleep(100);
printf("\t\t||      *.������һ��         ||\n");Sleep(100);
printf("\t\t||      -.��һҳϵͳ         ||\n");Sleep(100);
printf("\t\t||      +.��һҳϵͳ         ||\n");Sleep(100);
printf("\t\t++===========================++\n");Sleep(100);
getOpt();
}

void endGui()
{sign=5;
printf("\n====================�������=====================\n");
printf("\t\t++===========================++\n");Sleep(100);
printf("\t\t||      *.����ϵͳ           ||\n");Sleep(100);
printf("\t\t||      1.��Ʒ��             ||\n");Sleep(100);
printf("\t\t||      2.���²�             ||\n");Sleep(100);
printf("\t\t||      3.Ӫҵ��             ||\n");Sleep(100);
printf("\t\t++===========================++\n");Sleep(100);
getOpt();
}


void getOpt()
{int flag=1,bottle;//flag�ж�����Դ�bottle�ж����뻺�����ĵ�һ���ַ�
printf("====================�˵�ѡ��=====================\n");
printf("����˵�ѡ�\n");
while(flag)
	{
	scanf("%c",&opt);
	bottle=(getchar()!='\n');//bottle�ж����뻺�����ĵ�һ���ַ��Ƿ�Ϊ�س�
	if(bottle==0)
		{switch(sign)
			{case 1:switch(opt)
				{case '1':goodsGui();break;
				case '2':personGui();break;
				case '3':saleGui();break;
				case '*':exit(0);break;
				}
				break;
			case 2:switch(opt)
				{case '1':goodsInfView();break;
				case '2':goodsInfCreate();break;
				case '3':goodsInfChange();break;
				case '4':goodsInfDelete();break;
				case '5':goodsInfSearch();break;
				case '*':menuGui();break;
				case '-':saleGui();break;
				case '+':personGui();break;
				}
				break;
			case 3:switch(opt)
				{case '1':perInfView();break;
				case '2':perInfCreate();break;
				case '3':perInfChange();break;
				case '4':perInfDelete();break;
				case '5':perInfSearch();break;
				case '*':menuGui();break;
				case '-':goodsGui();break;
				case '+':saleGui();break;
				}
				break;
			case 4:switch(opt)
				{case '1':saleInfView();break;
				case '2':saleInfChange();break;
				case '3':saleInfChange();break;
				case '4':saleInfDelete();break;
				case '5':saleInfSearch();break;
				case '*':menuGui();break;
				case '-':personGui();break;
				case '+':goodsGui();break;
				  }break;
			case 5:switch(opt)
				{case '*':menuGui();break;
				case '1':goodsGui();break;
				case '2':personGui();break;
				case '3':saleGui();break;
				}
				break;
			}
		flag=0;sign=0;
		}
	else 
		{while(getchar()!='\n');}//�������뻺����
		switch(flag)
			{case 1:printf("[Message]��������е����⣬�鷳��������:\n");flag++;break;
			case 2:printf("[Message]������˵������룬лл���:\n");flag++;break;
			case 3:printf("[Message]�����뵷�����ٸ���λ��ᣬ��������:\n");flag++;break;
			case 4:printf("[Message]��( ���գ���) �����ڻ��������л���������!\n[Message]������֤��ϵͳ!\n");checkCode();flag++;printf("\n\n����˵�ѡ�\n");break;
			}
		
		}

endGui();
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









//������Ʒ��Ϣ�ṹ��
typedef struct Goods
{int num;
char name[20];
char type[20];
char producer[20];
int inNum;
float intPrice;
int outNum;
float outPrice;
struct Goods *next;
}goo;


goo *head=NULL;
goo *p0,*p1,*p2;
int node=0;


void goodsInfView()
{goo *p;
p=head;
printf("=====================�鿴��Ʒ��Ϣ=======================\n");Sleep(100);
		printf("|    ��Ʒ���    |     ����    |     ����    |     ������    |     ԭ��    |     �ۼ�    |   �����/��  |\n");

if(node!=0)
	{while(p!=NULL)
		{printf("      %2d             %s             %s            %s               %3.2f         %3.2f             %2d  \n",p->num,p->name,p->type,p->producer,p->intPrice,p->outPrice,p->inNum);
		p=p->next;
		}
	}
else printf("���κ���Ʒ��Ϣ\n");
printf("\n\n\n\n");
}


void goodsInfCreate()
{int flag=1;
printf("=====================�½���Ʒ��Ϣ=======================\n");Sleep(100);
if(node!=0)
	{p1=head;
	while(p1->next!=NULL)
		{p2=p1;
		p1=p1->next;//p1�����ƶ���p2����p1
		}
	p1=(goo*)malloc(sizeof(goo));
	}
else
{p1=p2=(goo*)malloc(sizeof(goo));}
while(flag)
		{node++;p1->outNum=0;
		printf("������Ʒ��ţ�\n");
		scanf("%d",&p1->num);
		while(getchar()!='\n');
		printf("������Ʒ���ƣ�\n");
		scanf("%s",p1->name);
		while(getchar()!='\n');
		printf("������Ʒ���\n");
		scanf("%s",p1->type);
		while(getchar()!='\n');
		printf("������Ʒ�����̣�\n");
		scanf("%s",p1->producer);
		while(getchar()!='\n');
		printf("������Ʒԭ��,�ۼ��Լ�������������ּ��ÿո��������\n");
		scanf("%f %f %d",&p1->intPrice,&p1->outPrice,&p1->inNum);
		while(getchar()!='\n');
		while(p1->intPrice<=0||p1->outPrice<=0||p1->inNum<=0)
			{printf("�����������������\n");
			printf("������Ʒԭ��,�ۼ��Լ�������������ּ��ÿո��������\n");
			scanf("%f %f %d",&p1->intPrice,&p1->outPrice,&p1->inNum);
			while(getchar()!='\n');
			}
			if(node==1) head=p1;//���ֽ�ָ���¿��ٿռ�
		else p2->next=p1;//β�ֽ�ָ���¿��ٿռ�
		p2=p1;
		printf("�Ƿ��������,�ǰ�y������,��n\n");
		if(getchar()=='n'||getchar()=='N') {flag=0;while(getchar()!='\n');}
		p1=(goo*)malloc(sizeof(goo));
		}
p2->next=NULL;
goodsInfView();
}


void goodsInfChange()
{int num,flag;char name[20];
printf("=====================�޸���Ʒ��Ϣ=======================\n");Sleep(100);
printf("ѡ��ͨ������Ʒ��ţ���1��or��Ʒ���ƣ���0���޸���Ʒ��Ϣ\n");Sleep(100);
scanf("%d",&flag);
while(getchar()!='\n');
if(flag)
	{printf("ѡ����Ʒ���\n");
	scanf("%d",&num);
	while(getchar()!='\n');
	if(head==NULL)//�ж����޽�����Ϣ
		{printf("���κ���Ʒ��Ϣ\n");}
	else
		{p1=head;
		while(num!=p1->num&&p1->next!=NULL)
			{p2=p1;
			p1=p1->next;//p1�����ƶ���p2����p1
			}
		if(num==p1->num)//�����p1ָ��Ľڵ����ҵ�һ�µ�numֵ 
			{
			printf("�ҵ�%d�����޸�\n",num);
			printf("�Կո���\n");
			printf("|    ��Ʒ���    |     ����    |     ����    |     ������    |     ԭ��    |     �ۼ�    |   �����/��  |\n");
			scanf("%d %s %s %s %f %f %d\n",&p1->num,p1->name,p1->type,p1->producer,&p1->intPrice,&p1->outPrice,&p1->inNum);
			while(getchar()!='\n');
			}
		else printf("�Ҳ���%d",num);
		}
	}
else
	{printf("ѡ����Ʒ����\n");
	scanf("%s",&name);
	while(getchar()!='\n');
	if(head==NULL)//�ж����޽�����Ϣ
		{printf("���κ���Ʒ��Ϣ\n");}
	else
		{p1=head;
		while(strcmp(name,p1->name)!=0&&p1->next!=NULL)
			{p2=p1;
			p1=p1->next;
			printf("%S,%s   \n",name,p1->name);//p1�����ƶ���p2����p1
			}
		if(strcmp(name,p1->name)==0)//�����p1ָ��Ľڵ����ҵ�һ�µ�nameֵ 
			{
			printf("�ҵ�%s�����޸�\n\n",name);
			printf("�Կո���\n");
			printf("|    ��Ʒ���    |     ����    |     ����    |     ������    |     ԭ��    |     �ۼ�    |   �����/��  |\n");
			scanf("%d %s %s %s %f %f %d\n",&p1->num,p1->name,p1->type,p1->producer,&p1->intPrice,&p1->outPrice,&p1->inNum);
			while(getchar()!='\n');
			}
		else printf("�Ҳ���%s",name);
		}
	}
goodsInfView();
}


void goodsInfDelete()
{int num,flag;char name[20];
printf("=====================ɾ����Ʒ��Ϣ=======================\n");Sleep(100);
printf("ѡ��ͨ������Ʒ��ţ���1��or��Ʒ���ƣ���0��ɾ����Ʒ��Ϣ\n");Sleep(100);
scanf("%d",&flag);
while(getchar()!='\n');
if(flag)
	{printf("ѡ����Ʒ���\n");
	scanf("%d",&num);
	while(getchar()!='\n');
	if(head==NULL)//�ж����޽�����Ϣ
		{printf("���κ���Ʒ��Ϣ\n");}
	else
		{p1=head;
		while(num!=p1->num&&p1->next!=NULL)
			{p2=p1;
			p1=p1->next;//p1�����ƶ���p2����p1
			}
		if(num==p1->num)//�����p1ָ��Ľڵ����ҵ�һ�µ�numֵ 
			{if(p1==head){head=head->next;}//������׽ڵ㣬���1���ڵ����������2���ڵ��Ϊ�׽ڵ�
			else {p2->next=p1->next;}//����Ǻ���Ľڵ㣬��p1ָ��Ľڵ�������p2ָ��Ľڵ���p1->nextָ��Ľڵ�����
			printf("�ɹ�ɾ��%d\n",num);
			node--;
			}
		else printf("�Ҳ���%d",num);
		}
	}
else
	{printf("ѡ����Ʒ����\n");
	scanf("%s",&name);
	while(getchar()!='\n');
	if(head==NULL)//�ж����޽�����Ϣ
		{printf("���κ���Ʒ��Ϣ\n");}
	else
		{p1=head;
		while(strcmp(name,p1->name)!=0&&p1->next!=NULL)
			{p2=p1;
			p1=p1->next;//p1�����ƶ���p2����p1
			}
		if(strcmp(name,p1->name)==0)//�����p1ָ��Ľڵ����ҵ�һ�µ�nameֵ 
			{if(p1==head){head=head->next;}//������׽ڵ㣬���1���ڵ����������2���ڵ��Ϊ�׽ڵ�
			else {p2->next=p1->next;}//����Ǻ���Ľڵ㣬��p1ָ��Ľڵ�������p2ָ��Ľڵ���p1->nextָ��Ľڵ�����
			printf("�ɹ�ɾ��%s\n",name);
			node--;
			}
		else printf("�Ҳ���%s",name);
		}
	}
goodsInfView();
}


void goodsInfSearch()
{int num,flag;char name[20];
printf("=====================������Ʒ��Ϣ=======================\n");Sleep(100);
printf("ѡ��ͨ������Ʒ��ţ���1��or��Ʒ���ƣ���0��������Ʒ��Ϣ\n");Sleep(100);
scanf("%d",&flag);
while(getchar()!='\n');
if(flag)
	{printf("ѡ����Ʒ���\n");
	scanf("%d",&num);
	while(getchar()!='\n');
	if(head==NULL)//�ж����޽�����Ϣ
		{printf("���κ���Ʒ��Ϣ\n");}
	else
		{p1=head;
		while(strcmp(name,p1->name)!=0&&p1->next!=NULL)
			{p2=p1;
			p1=p1->next;//p1�����ƶ���p2����p1
			}
		if(num==p1->num)//�����p1ָ��Ľڵ����ҵ�һ�µ�numֵ 
			{
			printf("�ɹ�����%d\n",num);
			printf("|    ��Ʒ���    |     ����    |     ����    |     ������    |     ԭ��    |     �ۼ�    |   �����/��  |\n");
			printf("      %2d             %s             %s            %s               %3.2f         %3.2f             %2d  \n",p1->num,p1->name,p1->type,p1->producer,p1->intPrice,p1->outPrice,p1->inNum);
			}
		else printf("�Ҳ���%d",num);
		}
	}
else
	{printf("ѡ����Ʒ����\n");
	scanf("%s",&name);
	while(getchar()!='\n');
	if(head==NULL)//�ж����޽�����Ϣ
		{printf("���κ���Ʒ��Ϣ\n");}
	else
		{p1=head;
		while(strcmp(name,p1->name)!=0&&p1->next!=NULL)
			{p2=p1;
			p1=p1->next;//p1�����ƶ���p2����p1
			}
		if(strcmp(name,p1->name)==0)
			{
			printf("�ɹ�����%s\n",name);
			printf("|    ��Ʒ���    |     ����    |     ����    |     ������    |     ԭ��    |     �ۼ�    |   �����/��  |\n");
			printf("      %2d             %s             %s            %s               %3.2f         %3.2f             %2d  \n",p1->num,p1->name,p1->type,p1->producer,p1->intPrice,p1->outPrice,p1->inNum);
			}
		else printf("�Ҳ���%s",name);
		}
	}
}



/**************************************************/

//����
void saleInfView()
{float outSum=0,inSum=0;
goo *p;
p=head;
printf("=====================��Ʒ������Ϣ=======================\n");Sleep(100);
		printf("|    ��Ʒ���    |    ����    |     ԭ��    |     �ۼ�    |   �����/��  |  ������/��\n");
			
if(node!=0)
	{while(p!=NULL)
		{printf("      %2d             %s           %3.2f         %3.2f          %2d				%2d    \n",p->num,p->name,p->intPrice,p->outPrice,p->inNum,p->outNum);
		outSum=outSum+((p->outNum)*(p->outPrice));
		inSum=inSum+((p->inNum)*(p->intPrice));
		p=p->next;
		}
	}
else printf("���κ���Ʒ��Ϣ\n");
printf("\n\n\n\n�����֧����%6.2f�����������룺%f6.2,������%f6.2\n",inSum,outSum,outSum-inSum);

}




void saleInfChange()
{int num,flag;char name[20];
printf("=====================�༭������Ϣ=======================\n");Sleep(100);
printf("ѡ��ͨ������Ʒ��ţ���1��or��Ʒ���ƣ���0���޸���Ʒ��Ϣ\n");Sleep(100);
scanf("%d",&flag);
while(getchar()!='\n');
if(flag)
	{printf("ѡ����Ʒ���\n");
	scanf("%d",&num);
	while(getchar()!='\n');
	if(head==NULL)//�ж����޽�����Ϣ
		{printf("���κ���Ʒ��Ϣ\n");}
	else
		{p1=head;
		while(num!=p1->num&&p1->next!=NULL)
			{p2=p1;
			p1=p1->next;//p1�����ƶ���p2����p1
			}
		if(num==p1->num)//�����p1ָ��Ľڵ����ҵ�һ�µ�numֵ 
			{
			printf("�ҵ�%d�����޸�\n",num);
			printf("|    ����������    |\n");
			scanf("%d",&p1->outNum);
			while(getchar()!='\n');
			}
		else printf("�Ҳ���%d",num);
		}
	}
else
	{printf("ѡ����Ʒ����\n");
	scanf("%s",&name);
	while(getchar()!='\n');
	if(head==NULL)//�ж����޽�����Ϣ
		{printf("���κ���Ʒ��Ϣ\n");}
	else
		{p1=head;
		while(strcmp(name,p1->name)!=0&&p1->next!=NULL)
			{p2=p1;
			p1=p1->next;
			printf("%S,%s   \n",name,p1->name);//p1�����ƶ���p2����p1
			}
		if(strcmp(name,p1->name)==0)//�����p1ָ��Ľڵ����ҵ�һ�µ�nameֵ 
			{
			printf("�ҵ�%s�����޸�\n\n",name);
			printf("|    ����������    |\n");
			scanf("%d",&p1->outNum);
			}
		else printf("�Ҳ���%s",name);
		}
	}
saleInfView();
}



void saleInfSearch()
{int num,flag;char name[20];
printf("=====================������Ʒ������Ϣ=======================\n");Sleep(100);
printf("ѡ��ͨ������Ʒ��ţ���1��or��Ʒ���ƣ���0��������Ʒ��Ϣ\n");Sleep(100);
scanf("%d",&flag);
while(getchar()!='\n');
if(flag)
	{printf("ѡ����Ʒ���\n");
	scanf("%d",&num);
	while(getchar()!='\n');
	if(head==NULL)//�ж����޽�����Ϣ
		{printf("���κ���Ʒ��Ϣ\n");}
	else
		{p1=head;
		while(strcmp(name,p1->name)!=0&&p1->next!=NULL&&p1->outNum>0)
			{p2=p1;
			p1=p1->next;
			//p1�����ƶ���p2����p1
			}
		if(num==p1->num)//�����p1ָ��Ľڵ����ҵ�һ�µ�numֵ 
			{
			printf("�ɹ�����%d\n",num);
			printf("|    ��Ʒ���    |    ����    |     ԭ��    |     �ۼ�    |   �����/��  |  ������/��\n");
			printf("      %2d             %s           %3.2f         %3.2f          %2d				%2d    \n",p1->num,p1->name,p1->intPrice,p1->outPrice,p1->inNum,p1->outNum);
			}
		else printf("�Ҳ���%d",num);
		}
	}
else
	{printf("ѡ����Ʒ����\n");
	scanf("%s",&name);
	while(getchar()!='\n');
	if(head==NULL)//�ж����޽�����Ϣ
		{printf("���κ���Ʒ��Ϣ\n");}
	else
		{p1=head;
		while(strcmp(name,p1->name)!=0&&p1->next!=NULL)
			{p2=p1;
			p1=p1->next;//p1�����ƶ���p2����p1
			}
		if(strcmp(name,p1->name)==0)
			{
			printf("�ɹ�����%s\n",name);
			printf("|    ��Ʒ���    |    ����    |     ԭ��    |     �ۼ�    |   �����/��  |  ������/��\n");
			printf("      %2d             %s           %3.2f         %3.2f          %2d				%2d    \n",p1->num,p1->name,p1->intPrice,p1->outPrice,p1->inNum,p1->outNum);
			}
		else printf("�Ҳ���%s",name);
		}
	}
}






void saleInfDelete()
{int num,flag;char name[20];
printf("=====================ɾ����Ʒ��Ϣ=======================\n");Sleep(100);
printf("ѡ��ͨ������Ʒ��ţ���1��or+��Ʒ���ƣ���0��ɾ����Ʒ��Ϣ\n");Sleep(100);
scanf("%d",&flag);
while(getchar()!='\n');
if(flag)
	{printf("ѡ����Ʒ���\n");
	scanf("%d",&num);
	while(getchar()!='\n');
	if(head==NULL)//�ж����޽�����Ϣ
		{printf("���κ���Ʒ��Ϣ\n");}
	else
		{p1=head;
		while(num!=p1->num&&p1->next!=NULL)
			{p2=p1;
			p1=p1->next;//p1�����ƶ���p2����p1
			}
		if(num==p1->num)//�����p1ָ��Ľڵ����ҵ�һ�µ�numֵ 
			{if(p1==head){head=head->next;}//������׽ڵ㣬���1���ڵ����������2���ڵ��Ϊ�׽ڵ�
			else {p2->next=p1->next;}//����Ǻ���Ľڵ㣬��p1ָ��Ľڵ�������p2ָ��Ľڵ���p1->nextָ��Ľڵ�����
			printf("�ɹ�ɾ��%d\n",num);
			node--;
			}
		else printf("�Ҳ���%d",num);
		}
	}
else
	{printf("ѡ����Ʒ����\n");
	scanf("%s",&name);
	while(getchar()!='\n');
	if(head==NULL)//�ж����޽�����Ϣ
		{printf("���κ���Ʒ��Ϣ\n");}
	else
		{p1=head;
		while(strcmp(name,p1->name)!=0&&p1->next!=NULL)
			{p2=p1;
			p1=p1->next;//p1�����ƶ���p2����p1
			}
		if(strcmp(name,p1->name)==0)//�����p1ָ��Ľڵ����ҵ�һ�µ�nameֵ 
			{if(p1==head){head=head->next;}//������׽ڵ㣬���1���ڵ����������2���ڵ��Ϊ�׽ڵ�
			else {p2->next=p1->next;}//����Ǻ���Ľڵ㣬��p1ָ��Ľڵ�������p2ָ��Ľڵ���p1->nextָ��Ľڵ�����
			printf("�ɹ�ɾ��%s\n",name);
			node--;
			}
		else printf("�Ҳ���%s",name);
		}
	}
goodsInfView();
}
























/*********************************************/



//��Ա�ṹ��
typedef struct Person
{int num;
char name[20];
char job[20];
float pay;
struct Person *next;
}per;


per *head1=NULL;
per *p3,*p4,*p5;
int node1=0;

void perInfView()
{float paySum=0;
per *p;
p=head1;
printf("=====================�鿴Ա����Ϣ=======================\n");Sleep(100);
		printf("|    Ա�����    |     ����    |     ְλ    |     ����    |\n");
if(node1!=0)
	{while(p!=NULL)
		{printf("      %2d             %s             %s            %f     \n",p->num,p->name,p->job,p->pay);
		paySum=paySum+p->pay;
		p=p->next;
		}
	}
else printf("���κ�Ա����Ϣ\n");
printf("\n\n\n\nԱ���ܹ��ʣ�%6.2f\n",paySum);
}


void perInfCreate()
{int flag=1;
printf("=====================�½�Ա����Ϣ=======================\n");Sleep(100);
if(node1!=0)
	{p4=head1;
	while(p4->next!=NULL)
		{p5=p4;
		p4=p4->next;//p4�����ƶ���p5����p4
		}
	p4=(per*)malloc(sizeof(per));
	}
else
{p4=p5=(per*)malloc(sizeof(per));}
while(flag)
		{node1++;
		printf("����Ա����ţ�\n");
		scanf("%d",&p4->num);
		while(getchar()!='\n');
		printf("����Ա��������\n");
		scanf("%s",p4->name);
		while(getchar()!='\n');
		printf("����Ա��ְλ��\n");
		scanf("%s",p4->job);
		while(getchar()!='\n');
		printf("����Ա�����ʣ�\n");
		scanf("%f",&p4->pay);
		while(getchar()!='\n');
			if(node1==1) head1=p4;
		else p5->next=p4;
		p5=p4;
		printf("�Ƿ��������,�ǰ�y������,��n\n");
		if(getchar()=='n'||getchar()=='N') 
			{flag=0;while(getchar()!='\n');}
		p4=(per*)malloc(sizeof(per));
		}
p5->next=NULL;
perInfView();
}


void perInfChange()
{int num,flag;char name[20];
printf("=====================�޸�Ա����Ϣ=======================\n");Sleep(100);
printf("ѡ��ͨ����Ա����ţ���1��orԱ�����ƣ���0���޸�Ա����Ϣ\n");Sleep(100);
scanf("%d",&flag);
while(getchar()!='\n');
if(flag)
	{printf("ѡ��Ա�����\n");
	scanf("%d",&num);
	while(getchar()!='\n');
	if(head1==NULL)//�ж����޽�����Ϣ
		{printf("���κ�Ա����Ϣ\n");}
	else
		{p4=head1;
		while(num!=p4->num&&p4->next!=NULL)
			{p5=p4;
			p4=p4->next;//p4�����ƶ���p5����p4
			}
		if(num==p4->num)//�����p4ָ��Ľڵ����ҵ�һ�µ�numֵ 
			{
			printf("�ҵ�%d�����޸�\n",num);
			printf("�Կո���\n");
			printf("|    Ա�����    |     ����    |     ְλ    |     ����    |\n");
			scanf("%d %s %s %d\n",&p4->num,p4->name,p4->job,&p4->pay);
			}
		else printf("�Ҳ���%d",num);
		}
	}
else
	{printf("ѡ��Ա������\n");
	scanf("%s",&name);
	while(getchar()!='\n');
	if(head1==NULL)//�ж����޽�����Ϣ
		{printf("��Ա����Ϣ\n");}
	else
		{p4=head1;
		while(strcmp(name,p4->name)!=0&&p4->next!=NULL)
			{p5=p4;
			p4=p4->next;//p4�����ƶ���p5����p4
			}
		if(strcmp(name,p4->name)==0)//�����p4ָ��Ľڵ����ҵ�һ�µ�numֵ 
			{
			printf("�ҵ�%s�����޸�\n\n",name);
			printf("�Կո���\n");
		printf("|    Ա�����    |     ����    |     ְλ    |     ����    |\n");
			scanf("%d %s %s %d\n",&p4->num,p4->name,p4->job,&p4->pay);
			}
		else printf("�Ҳ���%s",name);
		}
	}
perInfView();
}

void perInfDelete()
{int num,flag;char name[20];
printf("=====================ɾ��Ա����Ϣ=======================\n");Sleep(100);
printf("ѡ��ͨ����Ա����ţ���1��orԱ�����ƣ���0��ɾ����Ʒ��Ϣ\n");Sleep(100);
scanf("%d",&flag);
while(getchar()!='\n');
if(flag)
	{printf("ѡ��Ա�����\n");
	scanf("%d",&num);
	while(getchar()!='\n');
	if(head1==NULL)//�ж����޽�����Ϣ
		{printf("���κ�Ա����Ϣ\n");}
	else
		{p4=head1;
		while(num!=p4->num&&p4->next!=NULL)
			{p5=p4;
			p4=p4->next;
			}
		if(num==p4->num)
			{if(p4==head1){head1=head1->next;}//������׽ڵ㣬���1���ڵ����������2���ڵ��Ϊ�׽ڵ�
			else {p4->next=p4->next;}//����Ǻ���Ľڵ㣬��p4ָ��Ľڵ�������p5ָ��Ľڵ���p4->nextָ��Ľڵ�����
			printf("�ɹ�ɾ��%d\n",num);
			node--;
			}
		else printf("�Ҳ���%d",num);
		}
	}
else
	{printf("ѡ��Ա������\n");
	scanf("%s",&name);
	while(getchar()!='\n');
	if(head1==NULL)//�ж����޽�����Ϣ
		{printf("���κ�Ա����Ϣ\n");}
	else
		{p4=head1;
		while(strcmp(name,p4->name)!=0&&p4->next!=NULL)
			{p5=p4;
			p4=p4->next;//p4�����ƶ���p5����p4
			}
		if(strcmp(name,p4->name)==0)
			{if(p1==head){head=head->next;}//������׽ڵ㣬���1���ڵ����������2���ڵ��Ϊ�׽ڵ�
			else {p2->next=p1->next;}
			printf("�ɹ�ɾ��%s\n",name);
			node--;
			}
		else printf("�Ҳ���%s",name);
		}
	}
perInfView();
}


void perInfSearch()
{int num,flag;char name[20];
printf("=====================����Ա����Ϣ=======================\n");Sleep(100);
printf("ѡ��ͨ����Ա����ţ���1��or��Ʒ���ƣ���0������Ա����Ϣ\n");Sleep(100);
scanf("%d",&flag);
while(getchar()!='\n');
if(flag)
	{printf("ѡ����Ʒ���\n");
	scanf("%d",&num);
	while(getchar()!='\n');
	if(head1==NULL)//�ж����޽�����Ϣ
		{printf("���κ�Ա����Ϣ\n");}
	else
		{p4=head1;
		while(num!=p4->num&&p4->next!=NULL)
			{p5=p4;
			p4=p4->next;
			}
		if(num==p4->num)
			{
			printf("�ɹ�����%d\n",num);
			printf("|    Ա�����    |     ����    |     ְλ    |     ����    |\n");
			printf("      %2d             %s             %s            %2d \n",p4->num,p4->name,p4->job,p4->pay);
			}
		else printf("�Ҳ���%d",num);
		}
	}
else
	{printf("ѡ��Ա������\n");
	scanf("%s",&name);
	while(getchar()!='\n');
	if(head1==NULL)//�ж����޽�����Ϣ
		{printf("���κ�Ա����Ϣ\n");}
	else
		{p4=head1;
		while(strcmp(name,p1->name)!=0&&p4->next!=NULL)
			{p5=p4;
			p4=p4->next;
			}
		if(strcmp(name,p4->name)==0)
			{
			printf("�ɹ�����%s\n",name);
			printf("|    Ա�����    |     ����    |     ְλ    |     ����    |\n");
			printf("      %2d             %s             %s            %2d \n",p4->num,p4->name,p4->job,p4->pay);
			}
		else printf("�Ҳ���%s",name);
		}
	}

}