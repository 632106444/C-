#include <stdio.h>
int main()
{
	int a, b, c;
	a = 0;

	for (a; a <= 10; a = a++)
	{
		if (a == 0 || a == 10)
		{
			for (b = 0; b <= 10; b++)
			{
				printf("*");
			}
		}
		else if (a > 0 && a < 10)
		{
			for (b = 0; b <= 10; b++)
			{
				if (b == 0 || b == 10)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}


		printf("\n");

	  }
    
	getchar();
	return 0;
}