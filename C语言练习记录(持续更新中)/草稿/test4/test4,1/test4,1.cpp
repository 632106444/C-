#include <stdio.h>
#define ADD(a,b,c,d) a##b##c##d//�ַ�ƴ�� ֻ�����ڵ����ַ� ֻ��int���͵�



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