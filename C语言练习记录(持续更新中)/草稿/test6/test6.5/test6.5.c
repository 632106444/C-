//编写程序：实现拷贝函数或者字符串连接函数其中的任意一个函数功能

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char arr[30] = "asd";
	char  app[20] = "qweasd";
	/*for (int i = 0; i < strlen(app) + 1; i++)
	{
		app[i] = arr[i];
	}
	
	printf("%s\n",app);
	puts(arr);*/                  //实现拷贝函数

	for (int i = strlen(app),x=0;x<strlen(arr)&& i < strlen(app) + strlen(arr) - 1;x++, i++)//利用数组下标把别的元素进行赋值
	{
		app[i] = arr[x];
	}
	printf("%s", app);
	puts(app);
	getchar();
	getchar();

	return 0;
}
