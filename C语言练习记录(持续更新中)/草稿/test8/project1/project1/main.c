/* ָ����ϰ��Ŀ��ϰ 
#include <stdio.h>
int main(void)
{
	//ָ��Ķ��� ����*��ʶ��
	//ָ��ָ��һ����ַ

	int *p;
	int *q=NULL;
	int a=8;
	p=&a;
	printf("a=%d:%d \n",a,&a );
	printf("p=%d:%d:%d\n",p,&p,*p);   //������ַ һ���Ǳ����ĵ�ַ  ��һ����ָ��ĵ�ַҲ���ǿ���Ϊָ���ָ��
	getchar();
	getchar();
	return 0;
}*/

/*
#include <stdio.h>
int main()
{
	int *p=0;//������int *p=NULL  ��ΪNULL=0 
	int a=8;
	p=&a;
	*p=10;      //ȡ��ַ�����ݲ���ֵ10
	int *const p2=NULL;
	const int a=10;
	int arr[10];             //�����������һ��ջ���Ŀռ����ھ�̬�ռ� �����ڲ��ɱ���ڴ�ռ�
	
	printf("a=%d;%d;\n",&a,a);
	printf("p=%d;%d \n",p,*p);
	getchar();
	getchar();
	for(int i=0;i<10;i++)
	{
		printf("%d\n",a);
	}
	return 0;
}

*/

/*
#include <stdio.h>

void function(int ar[])   //int ar[] ���Ƕ�����һ��ָ����Ӻ���ȥ�����ı�һЩ������ֵ
{
	int a;
}

int main()
{
	const int a=10;
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int *p=arr;
	int i;               //for(int i=0;i<10;i++) ����д�Ǵ����Ϊ �ں����ﲻ���Զ�����������
	for(i=0;i<10;i++)
	{
		printf("%d  ",p[i]);
	}
	printf("p.size=%d arr.size=%d",sizeof(p),sizeof(arr));
	


	getchar();
	getchar();
	return 0;
}

*/

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//int  *p=(int *)malloc(sizeof(int)*100);   //����һ���ڴ� 
	int arr[10]={10,9,8,7,6,5,4,3,2,1};
	int *p=arr;   //ָ��p ָ��arr[0]����(0)��ַ
	printf("%d \n",*p+4);   //ָ��"*"��"&"������������ȼ��ܸߵ�������� 
	printf("%d \n",*(p+4));    //*(p+4)ָ����pָ�������Ϊ4 Ҳ�����ƶ���4����ַ(����Ϊ0��Ϊ�׸���ַ) Ҳ����ָ������� 
	p=&arr[4];

	getchar();
	getchar();
	return 0;
}
*/


/*ָ�����ά����*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[3][3]={
		1,2,3,
		4,5,6,
		7,8,9
	};
	
	int *p=arr;         //��Ϊֻ��ָ��  ���Ե�ָ���ά(��ά)����ʱ�ͻᱨ��
	
	printf("%d\n",*(p+8));
	getchar();
	getchar();
	return 0;
}
*/

/*
�ṹ����ָ��

*/


/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//typedef Ϊ���Ͷ���һ������  ��һ���ֲ��Ķ���,����ȫ�ֵĶ���
typedef struct node   //����һ���ṹ�� 
{
	int a;
}NODE;                 // NODEΪ�ṹ�����
//


int main()
{
	NODE *p=(NODE *)malloc(sizeof(NODE)*10);   //����һ���ṹ��ָ��
	//�൱�� int *p=(int *)malloc(sizeof(int)*10);  �൱�� NODE p[10] ������һ������

	//p->a=3;       //�ṹ��ָ��ָ��a����  �ṹ��ָ��ָ��ṹ������ĳ�Ա����
	//ָ��ṹ�������ȫ�ֱ���(����ַ)
	int i;
	for(i=0;i<10;i++)
	{
		(p+i)->a=i+1;   //�൱�� p[i].a=i+1;
	}


	//(*p).a=3;         //����ǵ����Ա����Ҫ�Ƚ�����"*" �������ڵĵ�ַ����һ��ֵ
	                 //'*'������(�����ڴ��ַ�б����ֵ) ���ص�ַ���Ǹ�������ֵ
	for(i=0;i<10;i++)
	{
	printf("%d \n",(p+i)->a);
	}
	free(p);
	getchar();
	getchar();

	return 0;
}

*/


//����ָ��  �༶ָ��
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a = 4;
	int *p1 = &a;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4;     //�Ƕ��ټ���ָ��ͽ���ٴε����� "&"
	p4 = p2;         //�߼�ָ��ֻ����ָ����һ��ָ��ĵ�ַ  �����Կ缶  �����ڴ����
	printf("%d ",****p4);

	getchar();
	getchar();
	return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a = 4;
	int *p1 = &a;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;     //�Ƕ��ټ���ָ��ͽ���ٴε����� "&"


	printf("%d ", ****p4);

	getchar();
	getchar();
	return 0;
}
*/


/*   �༶ָ��ɹ�����

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fun(int **a)   //int *a=p1;  һ��ָ��ֻ���Խ���ֵ����
{
	*a = (int *)malloc(sizeof(int));
	**a = 100;
	printf("%d \n",**a);
}


int main()
{
	int a = 4;
	int *p1 = NULL;
	fun(&p1);           //���Ϊֵ����   �������ĵ�ʱ�����ͱ��뱣��һ��  ���ü�"&" ô������
	printf("%d \n",*p1);
	free(p1);
	getchar();
	getchar();
	return 0;
}

*/


/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fun(int **a)   //int *a=p1;  һ��ָ��ֻ���Խ���ֵ����
{
	*a = (int *)malloc(sizeof(int)*10);
	for (int i; i < 10; i++)
	{
		*(*a+i) = i;
	}
}


int main()
{
	int a = 4;
	int *p1 = NULL;
	fun(&p1);           //���Ϊֵ����   �������ĵ�ʱ�����ͱ��뱣��һ��  ���ü�"&" ô������
	for (int i = 0; i < 10; i++)
	{
		printf("%d \n", *(p1+i));
	}
	free(p1);
	getchar();
	getchar();
	return 0;
}
*/


/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
	char *arr[4] = { "hello", "world", "TZ", "EDU" };
	//char *arr[0]="hello"
	//char *arr[1]="world"


	printf("%s %s %s %s ",arr[0],arr[1],arr[2],arr[3]);


	getchar();
	getchar();
	return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a=4;
	int *arr[3];
	arr[0] = &a;
	*arr[0] = 666;
	printf("%d" ,a);
	getchar();
	getchar();
	return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a = 4;
	int *arr[3];  
	//ָ�������ʾ:������[�����±�]  arr[0]  arr[1] arr[2];  arr[3]-Խ��
	
	arr[0] = (int *)malloc(sizeof(int)* 10);
	for (int i = 0; i < 10; i++)
	{
		*(arr[0] + i) = i + 1;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(arr[0] + i));
	}
	getchar();
	return 0;
}
*/

/*
ָ������  ����: char *arr[4]={"hello", "world", "TZ", "EDU"};
		 ʹ��: ����ʹ��ָ������������ָ���������ڴ���������,
		 arr[0] = (int *)malloc(sizeof(int)* 10);
		 Ȼ��ֵ,��һ��ָ�������ڴ��������ʹ��

����ָ��  ����: int (*p)[3];
			   ������һ������ָ��,ָ��һ����3�е�����
		 ʹ��:int arr[2][5]={0};   //������һ������
			  int (*p)[5];//��������ָ��
			  p=arr;//�������ָ��ָ��������׵�ַ

*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int arr[3][3] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int *p = arr;
	printf("%d ",*(p+8));
	getchar();
	return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//int(*p)[3];       //������Ƕ�����һ������ָ��,ָ��һ����3�е�����

	int arr[2][3] = { 6,5,4,3,2,1 };  //��������

	int(*p)[3];        //��������ָ�� *p->y�ĵ�ַ 

	p = arr;          //�������ָ��ָ��������׵�ַ
	
	printf("%d ",**p);   //��̫��������ʹ��
	getchar();
	getchar();
	return 0;
}
*/

/*
//��ʾ  ��ά������ͽ����ü���"**" Ȼ��ͽ����Ϊ�׵�ַ��Ԫ��  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//int(*p)[3];       //������Ƕ�����һ������ָ��,ָ��һ����3�е�����

	int arr[2][3] = { 6, 5, 4, 3, 2, 1 };  //��������

	int(*p)[3];        //��������ָ�� *p->y�ĵ�ַ 

	p = arr;          //�������ָ��ָ��������׵�ַ

	printf("%d ", p[1][2]);   //��������ʹ��
	getchar();
	getchar();
	return 0;
}

*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//int(*p)[3];       //������Ƕ�����һ������ָ��,ָ��һ����3�е�����

	int arr[2][3] = { 6, 5, 4, 
					  3, 2, 1 };  //��������

	int(*p)[3];        //��������ָ�� *p->y�ĵ�ַ 

	p = arr;          //�������ָ��ָ��������׵�ַ

	printf("%d ", p[1][2]);   //��̫��������ʹ��
	getchar();
	getchar();
	return 0;
}
*/


/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//int(*p)[3];       //������Ƕ�����һ������ָ��,ָ��һ����3�е�����

	int arr[2][3] = { 6, 5, 4, 3, 2, 1 };  //��������

	int(*p)[3];        //��������ָ�� *p->y�ĵ�ַ 

	p = arr;          //�������ָ��ָ��������׵�ַ

	printf("%d ", p[1][2]);   //�ȽϽ�������ʹ��
	// *(p[i]+j), *(*(p+i)+j),(*(p+i))[j],p[i][j] 
	// (*(*(p+i)+j) 
	getchar();
	getchar();
	return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{


	int arr[2][3] = { 6, 5, 4, 3, 2, 1 };  //��������

	int *p[2];        //��������ָ�� ֻҪÿ�е��׵�ַ������

	p[0] = &arr[0];
	p[1] = &arr[1];

	printf("%d ", p[1][2]);

	getchar();

	return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{


	int arr[2][3] = { 6, 5, 4, 3, 2, 1 };  //��������

	int *p[2];        //����ָ������ ֻҪÿ�е��׵�ַ������

	for (int i=0;i<2;i++)
	{
		p[i] = arr[i];
	}

	printf("%d ", p[1][2]);

	//int (*p)[3];  ��������ָ��
	//p=arr;  �������ָ��ָ��������׵�ַ
	//printf("%d ", p[1][2]);   //�ȽϽ�������ʹ��
	// *(p[i]+j), *(*(p+i)+j),(*(p+i))[j],p[i][j] 
	// (*(*(p+i)+j) 



	getchar();

	return 0;
}
*/



//����ָ��:����һ��ָ��ָ��һ������
//����: ����(*����ָ����)(�����б�);  ����Ĳ����б����������ָ��ָ��ĺ����Ĳ����б�
//ʹ��: void add(){} ���庯��
//      void (*p)(); ���庯��ָ��
//		p=add; ����ָ��ָ����,����p=&add;Ҳ����,���������Ǻ������׵�ַ
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add()
{
	printf("6");
}

void fun(int a, double b)
{
	return 1;
}

void(*q)(int a, double b);
void(*p)(); //������һ������ָ��

int main()
{
	q = fun;
	p = add;
	p();       //ֻ������������������ָ����
	q(1,1.2);
	getchar();
	return 0;
}
*/






//ָ�뺯��:�����ķ���ֵ����һ��ָ��
// char *add(){}  �����һ��ָ�뺯�����ص�ֵ�ǵ�ַ
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add()
{
	printf("6");
}

int *fun(int *a, double b)  //����һ��ָ�뺯��
{
	return *a;
}

int(*q)(int a, double b);
void(*p)();   //������һ������ָ��

int main()
{
	p = add;
	q = fun;
	
	int a = 3;

	q(&a, 1.2);
	p();
	return 0;
}*/






//�ص�����:���ǰ�һ����������һ��ʵ��������һ�����ݵ���
//
//
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void print()
{
	printf("2345");
}

typedef void(*PRINT)();  //��д��"PRINT"������������ı���

void fun(PRINT print)
{
	print();
}

int main()
{
	fun(print);
	
	getchar();

	return 0;
}
*/




//�ص�����
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void print(int a,int b)
{
	printf("%d ",a+b);
}

typedef void(*PRINT)(int a,int b);  //��д��"PRINT"������������ı���

void fun(PRINT print,int a,int b)
{
	print(a,b);
}

int main()
{
	fun(print,1,2);

	getchar();

	return 0;
}
*/






//�ص�����

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void print(int a,int b)
{
printf("%d ",a+b);
}

//typedef void(*PRINT)(int a,int b);  //��д��"PRINT"������������ı���
void(*PRINT)(int a, int b);             //����ָ��
void fun(void(*PRINT)(int a, int b), int a, int b)
{
	PRINT(a,b);
}

int main()
{
	fun(print,1,2);

	getchar();

	return 0;
}

