/*��д��������һ���ַ������ҵ�����ַ�����ֻ����һ�ε��ַ������������һ��ֻ������һ�ε��ַ����磺acdsracedf����������ַ�s����Ϊs�ַ�������ַ����е�һ��ֻ����һ�ε��ַ���
���ϴ��������ͼ��*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	char arr[100];
	int x = 0;

	scanf("%s",arr);//scanf();����������string.h��ͷ�ļ��У�����ʱ��ѡ�ã���string.h���漰�ַ��������ͷ�ļ���
	

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