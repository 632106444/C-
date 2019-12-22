#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define  MAX(x, y)  (x) > (y) ? (x) : (y) //对两个参数进行判断。
#define  ADD (A,B,C) (A+B+C)// 设定一个算法
#define APP (E,F,G) (E*F*E+E*F*2) //设定一个固定的算法

int main()
{
	int a= 5;
	int b = 2, c = 3, d = 3, t;
	t =   ADD  (a + b, c + d) * 10;
	printf("%d\n", t);
	getchar();
	getchar();
	return 0;
}