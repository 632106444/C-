#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main()
{
	
	const int N = 10;
	int arr[N];
	srand(time(NULL));//��ֹÿ�ε��������ͬ
	for (int i = 0; i < N;i++)
	{
		//rand()ѭ��������������������ֵ

		arr[i] = rand()%30+1;//ȡģʹ���������1��30�ķ�Χ֮��
		printf("%d    ",arr[i]);
	}
	printf("/n");
	for (int i = 0; i < N;i++)
	{
		for (int j = i; j <N;j++)
		{
			if (arr[i] < arr[j])//���бȽ�������Ԫ��
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