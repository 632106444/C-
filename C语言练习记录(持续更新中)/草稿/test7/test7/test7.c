/*
编程实现：已知int x=10,y=12;写出将x和y的值互相交换的表达式。
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int x = 10,y = 12;
	int z;

	printf("x=%d,y=%d\n",x,y);
	z = x;
	x = y;
	y = z;

	printf("x=%d,y=%d\n",x,y);

	getchar();
	getchar();

	return 0;
}