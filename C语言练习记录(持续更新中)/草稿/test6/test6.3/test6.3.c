#include<stdio.h>


int main(void)
{
	char arr[100];
	
	int i;
    gets(arr[100]);
	int a, b, c, d,e;
	for (i = 0; strlen(arr); i++)
	{
		if ( arr[i] >= 'A'&&arr[i] = 'Z')
		{
			a++;
		}
		else if (arr[i] >= 'a'&&arr[i] <= 'z')
		{
			b++;
		}
		else if (arr[i] >= '0'&&arr[i] <= '9')
		{
			c++;
		}
		else if (arr[i] = ' ')
		{
			d++;
		}
		else
		{
			e++;
		}

	}


	printf("%d,%d,%d,%d,%d\n",a,b,c,d);
	getchar();
	getchar();

	return 0;
}