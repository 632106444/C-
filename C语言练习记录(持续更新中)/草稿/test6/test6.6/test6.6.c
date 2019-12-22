/*编写程序：计算1---100以内的所有含2的数的和。
附上代码和运行结果
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(void)
{
	int arr, add, acc;
	acc = 0;

	for (arr = 1; arr <= 100; arr++)
	{
		add = arr;
		if (arr % 2 == 0)
		{
			acc= acc+add;//对循环的数进行累加
		}

	}

	printf("%d\n",acc);
	getchar();
	getchar();
	return 0;
}