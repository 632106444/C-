#include <stdio.h>

int main()
{
	int n;
	int a, b, c, d;
	scanf("%d,",&n);
	b = 2;
	c = 2;
	for (a = 1; a < n;a++)
	{
		b = b * 10 + 2;
		c += b;
	}
	printf("%d",c);
	getchar();
	getchar();
	return 0;
}