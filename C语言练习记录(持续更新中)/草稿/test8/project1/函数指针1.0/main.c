/*************************************************
函数指针:就是一个指针指向一个函数
定义:类型(*函数指针名字)(参数列表);
    这里的参数列表是这个函数指针指向的函数的参数的列表
使用:void add(){}  定义函数
	void (*p)();定义函数指针
	p=add;函数指针指向函数,或者p=&add;也可以,函数名就是
		  函数的首地址

使用函数指针和调用函数一样,就是直接函数指针名字(参数列表); 
使用,就是调用函数 p();

指针函数:函数的返回值就是一个指针
char *add(){} 这也就是一个指针函数


***************************************************/



//案例1  函数指针使用
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add()
{
	printf("6");
}

void(*p)();  //定义了一个函数指针

int main()
{
	//使用
	p = add;

	p();//调用

	return 0;
}
*/




//案例2  函数指针与回调函数的使用
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add()
{
	printf("6");
}


int fun(int a,double b)   //回调函数的使用
{
	return 1;
}

int(*q)(int a,double b);

void(*p)();  //定义了一个函数指针


int main()
{
	//使用
	p = add;

	p();//调用

	q = fun;
	q(1,1.0); //调用

	getchar();
	return 0;
}
*/




//案例3 指针函数使用
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add()
{
	printf("6");
}


int *fun(int *a, double b)   //回调指针函数的使用
{
	return a;
}

int *(*q)(int *a, double b);  //函数指针使用


void(*p)();  //定义了一个函数指针


int main()
{
	int a;  //一个地址
	//使用
	p = add;

	p();//调用

	q = fun;//函数指针指向指针函数
	q(&a, 1.0); //调用

	getchar();
	return 0;
}
*/




//案例4 回调函数:就是把一个函数当作一个实参来进行传递调用
//单链表重点使用
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print() //回调的函数
{
	printf("23456");
}

//函数指针先定义在使用
typedef void(*PRINT)();  //PRINT就是函数指针他自己的别名
void fun(PRINT print)
{
	print();  //函数调用
}



int main()
{
	fun(print);
	getchar();
	return 0;
}
*/



//案例4.1 回调函数:就是把一个函数当作一个实参来进行传递调用
//单链表重点使用  
//难点使用
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print(int a,int b) //回调的函数
{
	printf("23456\r\n");
	printf("%d ",a+b);
}

//函数指针先定义在使用
typedef void(*PRINT)(int a,int b);  //PRINT就是函数指针他自己的别名
void fun(PRINT print,int a,int b)
{
	print(a,b);  //函数调用
}



int main()
{
	fun(print,1,2);
	getchar();
	return 0;
}
*/



//案例4.1 回调函数:就是把一个函数当作一个实参来进行传递调用
//单链表重点使用  
//难点使用
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print(int a, int b) //回调的函数
{
	printf("23456\r\n");
	printf("%d ", a + b);
}

//函数指针先定义在使用
void(*PRINT)(int a, int b);  //PRINT就是函数指针他自己的别名
void fun(void(*PRINT)(int a, int b), int a, int b)
{
	PRINT(a, b);  //函数指针使用
}



int main()
{
	fun(print, 1, 2);
	getchar();
	return 0;
}
