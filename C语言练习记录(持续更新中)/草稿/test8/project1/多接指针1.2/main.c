// * ��ָ�뵱����ԶΪ������  ���Զ������ݽ����޸�

#include <stdio.h>
#include <stdlib.h>


//��*p1��ֵ  �����д����������ַ�ʽ 1:ֵ����  2:��ַ����
void fun(int **a)  //int *a=p1; ���ս���ȼ���ֵ���� ����ԭ��ͬ   int **a=*p1; �͸�ǰ���(**a)һ�� ������ ��&��ȡ��ַ�����������е�ַ���ݼ�����ַ
{
	*a = (int *)malloc(sizeof(int )*10);
	for (int i = 0; i < 10; i++)
	{
		*(*a + i) = i;
		//*a = i;       //����д���Ļ�Ϊ���  ����ʱ�ķ���λ�÷�����ͻ
	}
	//**a = 100;
	//printf("%d \r\n",**a);
}



int main()
{
	int a;
	int *p1 = NULL;

	// fun(&p1);  //���ŵ��е�ʵ�κ��β����Ͳ�ͬ Ҫ�� & ����
	fun(&p1);

	//ָ��λ��ѭ�����
	for (int i = 0; i < 10; i++)
	{
		printf("%d \r\n", *(p1+i));

	}
	printf("%d \r\n",*p1);
	free(p1);
	getchar();
	getchar();
	return 0;
}

