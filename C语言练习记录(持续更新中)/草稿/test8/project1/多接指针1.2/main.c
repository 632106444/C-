// * 在指针当中永远为解引用  可以对其内容进行修改

#include <stdio.h>
#include <stdlib.h>


//给*p1赋值  函数中传参数有两种方式 1:值传递  2:地址传递
void fun(int **a)  //int *a=p1; 最终结果等价于值传递 但是原理不同   int **a=*p1; 就跟前面的(**a)一样 可以用 　&　取地址的内容来进行地址传递即传地址
{
	*a = (int *)malloc(sizeof(int )*10);
	for (int i = 0; i < 10; i++)
	{
		*(*a + i) = i;
		//*a = i;       //这种写法的话为错的  运行时的访问位置发生冲突
	}
	//**a = 100;
	//printf("%d \r\n",**a);
}



int main()
{
	int a;
	int *p1 = NULL;

	// fun(&p1);  //括号当中的实参和形参类型不同 要加 & 符号
	fun(&p1);

	//指针位移循环输出
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

