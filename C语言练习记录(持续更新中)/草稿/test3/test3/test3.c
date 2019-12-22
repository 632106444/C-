#include<stdio.h>
int main()
{
	int a, b;
	for (a = 0; a <= 9; a++)//十位上的数值
	{
		for (b = 0; b <= 9; b++)//个位上的数值
		{
			if (((a * 10 + b) - 27) == (b * 10 + a))//判断是否符合
			{
				printf("%d%d,%d%d\n",a,b,b,a);//显示所有的组合
				printf("");
			}
		}

	}
	getchar();
	getchar();
	return 0;
}