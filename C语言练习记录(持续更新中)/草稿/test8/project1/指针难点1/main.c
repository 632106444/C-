
//指针函数与函数指针的区别:
//   1 指针函数只能用指针来进行调用
//   2 函数指针的参数只能用指针或者地址来进行传参  本质上于普通的函数没有什么区别
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