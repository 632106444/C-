/*编写程序：输入一串字符串，找到这个字符串中只出现一次的字符，并且输出第一个只出现了一次的字符。如：acdsracedf，程序输出字符s，因为s字符是这个字符串中第一个只出现一次的字符。
附上代码和运行图。*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	char arr[100];
	int x = 0;

	scanf("%s",arr);//scanf();函数定义在string.h的头文件中；调用时必选用；（string.h是涉及字符串处理的头文件）
	

	for (int i = 0; i< strlen(arr); i++)
	{
		for (int j = 0; j < strlen(arr); j++)
		{
			if (arr[i] == arr[j])
			{
				x++;
			}
		}
		if (x == 1)
		{
			printf("%c",arr[i]);
		}

	}

	getchar();
	getchar();

	return 0;
}