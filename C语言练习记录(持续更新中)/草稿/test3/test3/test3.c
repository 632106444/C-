#include<stdio.h>
int main()
{
	int a, b;
	for (a = 0; a <= 9; a++)//ʮλ�ϵ���ֵ
	{
		for (b = 0; b <= 9; b++)//��λ�ϵ���ֵ
		{
			if (((a * 10 + b) - 27) == (b * 10 + a))//�ж��Ƿ����
			{
				printf("%d%d,%d%d\n",a,b,b,a);//��ʾ���е����
				printf("");
			}
		}

	}
	getchar();
	getchar();
	return 0;
}