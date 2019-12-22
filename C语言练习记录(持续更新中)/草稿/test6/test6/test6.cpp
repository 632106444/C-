#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*#define PI 3.14
#define ADD(a,b) ((a)+(b))
#define CAT (a,b)   (a##b)

int main()
{
	float f = PI;

	 



	return 0;
}*/

int main(void)
{
	const int a = 10;
	const int b = 10;

	char str[20] = "hello\0";
	char str2[20] = " world!\0";
	char str3[30];

	strcat(str,str2);
	strcpy(str3,str);

	printf("%s\n",str);
	printf("%s\n",str3);

	getchar();
	return 0;
}