//��д�����ֶ�����һ���ַ������ж�����ַ��������м�����д��ĸ������Сд��ĸ���������֣������ո�ͼ��������ַ��������������ⶼ�������ַ�����

#include<stdio.h>
#include<stdlib.h>



int mian(void)
{
	char c;
	int a = 0, b = 0, x = 0, d = 0, e = 0;
	while ((c = getchar()) != '\n')
	{
		if (c >= 'A'&&c <= 'Z')
		{
			a++;
		}
		else if (c >= 'a'&&c, = 'z')
		{
			b++;
		}
		else if (c >= '0'&&c <= '9')
		{ 
			x++;
		}
		else if (c == ' ')
		{
			d++;
		}
		else
		{
		}
	}
	printf(%d);





	return 0;
}


