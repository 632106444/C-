#include<stdio.h>

int main()
{
	int a, b;

	for (a = 9; a >= 1;a=--a)
	{
		b = a;
		for (b ; b >= 1; b =--b)
		{
			printf("%d*%d=%d\t",a,b,a*b);
		}
		printf("\n");
	}
	getchar();
		return 0;
}