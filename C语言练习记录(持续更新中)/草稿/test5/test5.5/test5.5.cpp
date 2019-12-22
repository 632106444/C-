#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main()
{
	
	const int N = 10;
	int arr[N];
	srand(time(NULL));//防止每次的随机数相同
	for (int i = 0; i < N;i++)
	{
		//rand()循环来进行数组的随机数赋值

		arr[i] = rand()%30+1;//取模使随机数处于1到30的范围之内
		printf("%d    ",arr[i]);
	}
	printf("/n");
	for (int i = 0; i < N;i++)
	{
		for (int j = i; j <N;j++)
		{
			if (arr[i] < arr[j])//进行比较来交换元素
			{
				int t = arr[i]; 
				arr[i] = arr[j];
				arr[j] = t;
			}
		}
	}
	
	getchar();
	getchar();
	return 0;
}