//��д����ʵ�ֿ������������ַ������Ӻ������е�����һ����������

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
	puts(arr);*/                  //ʵ�ֿ�������

	for (int i = strlen(app),x=0;x<strlen(arr)&& i < strlen(app) + strlen(arr) - 1;x++, i++)//���������±�ѱ��Ԫ�ؽ��и�ֵ
	{
		app[i] = arr[x];
	}
	printf("%s", app);
	puts(app);
	getchar();
	getchar();

	return 0;
}
