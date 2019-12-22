//编写程序：手动输入一段字符串，判断这个字符串里面有几个大写字母，几个小写字母，几个数字，几个空格和几个其他字符（除以上四种外都是其他字符）。

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


