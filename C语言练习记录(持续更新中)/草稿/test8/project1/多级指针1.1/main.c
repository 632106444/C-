//*p=4  解引用进行内容修改

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//多级指针	
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

