#include <stdio.h>
#define ADD(a,b,c,d) a##b##c##d//字符拼接 只能用于单个字符 只有int类型的



int main()
{ 

	char* a = "hello";
	char* b = "wellcom";
	char* c = "meet";
	char*d = "me";
	char* e = ADD(1,2,3,4);
	printf("%s\n",e);
	getchar();

	return 0;
}