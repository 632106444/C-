/*************************************************
����ָ��:����һ��ָ��ָ��һ������
����:����(*����ָ������)(�����б�);
    ����Ĳ����б����������ָ��ָ��ĺ����Ĳ������б�
ʹ��:void add(){}  ���庯��
	void (*p)();���庯��ָ��
	p=add;����ָ��ָ����,����p=&add;Ҳ����,����������
		  �������׵�ַ

ʹ�ú���ָ��͵��ú���һ��,����ֱ�Ӻ���ָ������(�����б�); 
ʹ��,���ǵ��ú��� p();

ָ�뺯��:�����ķ���ֵ����һ��ָ��
char *add(){} ��Ҳ����һ��ָ�뺯��


***************************************************/



//����1  ����ָ��ʹ��
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add()
{
	printf("6");
}

void(*p)();  //������һ������ָ��

int main()
{
	//ʹ��
	p = add;

	p();//����

	return 0;
}
*/




//����2  ����ָ����ص�������ʹ��
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add()
{
	printf("6");
}


int fun(int a,double b)   //�ص�������ʹ��
{
	return 1;
}

int(*q)(int a,double b);

void(*p)();  //������һ������ָ��


int main()
{
	//ʹ��
	p = add;

	p();//����

	q = fun;
	q(1,1.0); //����

	getchar();
	return 0;
}
*/




//����3 ָ�뺯��ʹ��
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add()
{
	printf("6");
}


int *fun(int *a, double b)   //�ص�ָ�뺯����ʹ��
{
	return a;
}

int *(*q)(int *a, double b);  //����ָ��ʹ��


void(*p)();  //������һ������ָ��


int main()
{
	int a;  //һ����ַ
	//ʹ��
	p = add;

	p();//����

	q = fun;//����ָ��ָ��ָ�뺯��
	q(&a, 1.0); //����

	getchar();
	return 0;
}
*/




//����4 �ص�����:���ǰ�һ����������һ��ʵ�������д��ݵ���
//�������ص�ʹ��
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print() //�ص��ĺ���
{
	printf("23456");
}

//����ָ���ȶ�����ʹ��
typedef void(*PRINT)();  //PRINT���Ǻ���ָ�����Լ��ı���
void fun(PRINT print)
{
	print();  //��������
}



int main()
{
	fun(print);
	getchar();
	return 0;
}
*/



//����4.1 �ص�����:���ǰ�һ����������һ��ʵ�������д��ݵ���
//�������ص�ʹ��  
//�ѵ�ʹ��
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print(int a,int b) //�ص��ĺ���
{
	printf("23456\r\n");
	printf("%d ",a+b);
}

//����ָ���ȶ�����ʹ��
typedef void(*PRINT)(int a,int b);  //PRINT���Ǻ���ָ�����Լ��ı���
void fun(PRINT print,int a,int b)
{
	print(a,b);  //��������
}



int main()
{
	fun(print,1,2);
	getchar();
	return 0;
}
*/



//����4.1 �ص�����:���ǰ�һ����������һ��ʵ�������д��ݵ���
//�������ص�ʹ��  
//�ѵ�ʹ��
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print(int a, int b) //�ص��ĺ���
{
	printf("23456\r\n");
	printf("%d ", a + b);
}

//����ָ���ȶ�����ʹ��
void(*PRINT)(int a, int b);  //PRINT���Ǻ���ָ�����Լ��ı���
void fun(void(*PRINT)(int a, int b), int a, int b)
{
	PRINT(a, b);  //����ָ��ʹ��
}



int main()
{
	fun(print, 1, 2);
	getchar();
	return 0;
}
