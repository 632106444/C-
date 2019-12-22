#include<stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	int b, c;
	b = a;
	c = 0;
	while (b > 0)
	{
		c = c * 10 + b % 10;
		b = b / 10;//整数类型只会取剩下的整数部分；
	}
	if (c == a)
	{
		printf("输入的为回文数\n");
	}
	else
	{
		printf("不为回文数\n");
	}
	getchar();
	getchar();
	return 0;
}