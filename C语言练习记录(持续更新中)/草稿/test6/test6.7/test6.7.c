/*��д�����ֶ�����һ���ַ������ж�����ַ��������м�����д��ĸ������Сд��ĸ���������֣������ո�ͼ��������ַ��������������ⶼ�������ַ�����
  ���Ŀ����ǿ���ASC||�����Ϥ�̶Ȼ��ж��������ַ�����Ϥ�̶�
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	char arr[100];
	gets(arr);
	int a=0,b=0,c=0,d=0,e=0;

	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] >= 'A'&&arr[i] <= 'Z')//��д��ĸ�ķ�Χ
		{
			a++;
		}
		else if (arr[i] >= 'a'&&arr[i] <= 'z')//Сд��ĸ�ķ�Χ
		{
			b++;
		}
		else if (arr[i] >= '0'&&arr[i] <= '9')//���ֵķ�Χ
		{
			c++;
		}
		else if (arr[i] == ' ')//      �ո�ķ�Χ
		{
			d++;
		}
		else//           �����ķ��ŵķ�Χ
		{
			e++;
		}
	}
	printf("��д��ĸ%d,Сд��ĸ%d,����%d,�ո�%d,��������%d\n",a,b,c,d,e);
	getchar();
	getchar();
	return 0;
}