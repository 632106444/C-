//*p=4  �����ý��������޸�

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//�༶ָ��	
	int a=4;
	int *p1 = &a;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;
	printf("%d \r\n",****p4);
	getchar();
	getchar();
	return 0;
}

