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
		b = b / 10;//��������ֻ��ȡʣ�µ��������֣�
	}
	if (c == a)
	{
		printf("�����Ϊ������\n");
	}
	else
	{
		printf("��Ϊ������\n");
	}
	getchar();
	getchar();
	return 0;
}