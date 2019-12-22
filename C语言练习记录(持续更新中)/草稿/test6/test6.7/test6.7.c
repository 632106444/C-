/*编写程序：手动输入一段字符串，判断这个字符串里面有几个大写字母，几个小写字母，几个数字，几个空格和几个其他字符（除以上四种外都是其他字符）。
  核心考点是考对ASC||表的熟悉程度还有对其他的字符的熟悉程度
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
		if (arr[i] >= 'A'&&arr[i] <= 'Z')//大写字母的范围
		{
			a++;
		}
		else if (arr[i] >= 'a'&&arr[i] <= 'z')//小写字母的范围
		{
			b++;
		}
		else if (arr[i] >= '0'&&arr[i] <= '9')//数字的范围
		{
			c++;
		}
		else if (arr[i] == ' ')//      空格的范围
		{
			d++;
		}
		else//           其他的符号的范围
		{
			e++;
		}
	}
	printf("大写字母%d,小写字母%d,数字%d,空格%d,其他符号%d\n",a,b,c,d,e);
	getchar();
	getchar();
	return 0;
}