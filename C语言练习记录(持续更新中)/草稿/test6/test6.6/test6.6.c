/*��д���򣺼���1---100���ڵ����к�2�����ĺ͡�
���ϴ�������н��
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
			acc= acc+add;//��ѭ�����������ۼ�
		}

	}

	printf("%d\n",acc);
	getchar();
	getchar();
	return 0;
}