//ָ����չ֪ʶ
#include <stdio.h>
#include <stdlib.h>
#include <typeinfo>            //c++��ͷ�ļ�

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



