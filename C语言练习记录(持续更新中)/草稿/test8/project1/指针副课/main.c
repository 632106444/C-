//指针拓展知识
#include <stdio.h>
#include <stdlib.h>
#include <typeinfo>            //c++的头文件

void fun()
{

}

int main()
{
	char *p = "hello world";
	printf("%s \n", typeid(p).name());
	const char *a;

	printf("%s \n",p);
	getchar();
	return 0;
}



