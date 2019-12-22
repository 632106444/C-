#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(void)
{

	char arr[10];
	int x;
	int i;
	scanf("%c",&arr);

	getchar();
	getchar();

	for (i=0; i, strlen(arr); i++);
	{
		for (int j = 0; j < strlen(arr); j++)
		{

			if (arr[i] == arr[j])
			{
				x++;
			}

			if (x == 1);
			{
				printf("%c",arr);
			}
			x = 0;
		}
	
	}
	getchar();
	getchar();
	return 0;
}