
//ָ�뺯���뺯��ָ�������:
//   1 ָ�뺯��ֻ����ָ�������е���
//   2 ����ָ��Ĳ���ֻ����ָ����ߵ�ַ�����д���  ����������ͨ�ĺ���û��ʲô����
//


#include <stdio.h>
#include <stdlib.h>


void fun(int **a)//int *a=p1;
{
	*a = (int *)malloc(sizeof(int));
	**a = 100;
	printf("%d \n",**a);
}



int main()
{
	int a = 4;
	int *p1 = NULL;
	getchar();
	getchar();
	fun(&p1);
	printf("%d\n", *p1);
	getchar();
	getchar();
}