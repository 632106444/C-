//编程实现：一年大概有 3.156×107秒，要求输入你的年龄，然后显示该年龄合多少秒


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	long double old=18;
 	long double time=0.000;

	 //输入用户的年龄
	time = old*(3.156*(10 * 10 * 10 * 10 * 10 * 10 * 10));

	printf("%d\n", time);
	getchar();
	getchar();
	return 0;
}