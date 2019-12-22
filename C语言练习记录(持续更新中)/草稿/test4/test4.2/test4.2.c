#include<stdio.h>
#define M(x) x + x
main()
{
	int n = 0;
		n = 10 * M(20) * 30;
	printf("%d", n);
	getchar();
	getchar();
	return 0;
}