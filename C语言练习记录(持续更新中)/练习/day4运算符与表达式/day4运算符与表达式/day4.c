#include<stdio.h>
int main()
{
	int a, b ;
	int c;
	scanf("%d,%d", &a,&b);//ÊäÈëaµÄÖµ
	
	getchar();
	printf("%d\n",a);
	printf("%d\n",b);
	getchar();
	c = a%b;
	printf("%d\n",c);
	(c == 1) ? (a++) : (b--);
	printf("%d\n", a);
	printf("%d\n",b);
	getchar();
	printf("%d\n", a&&b);
	getchar();
	return 0;
}