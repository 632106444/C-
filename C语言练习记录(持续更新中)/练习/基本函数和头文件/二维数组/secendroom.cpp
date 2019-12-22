#include<stdio.h>

int main()

{   
	int a, b,c,d;
	int aa[10][10];//定义一个二维数组
	a = 0;
	b = 0;
	c =100;
	d = 0;
	for (a;a<=9;a++)
	{
		for (b=0;b<=9;b++)
		{
			if (c >= 0)
			{
				aa[b][a] = c;
				c = c - 2;
				printf("%d\n", aa[b][a]);
			}
			else
			{
			}
		}
	}
	printf("所有偶数");
	getchar();
	return 0;
}