//输出了20个大小范围为0 - 99的随机数
#include<stdlib.h>//头文件包含rand和srand函数

#include<stdio.h>

#include<time.h>

void main()

{

	int i, k;
	srand((unsigned)time(NULL));//选取种子文件

	for (i = 0; i<20; i++)

	{

		k = rand() % 100;//%100控制随机数的范围

		printf("k=%d\n", k);//输出随机数

	}

    
	//随机输出十个0-100之间的整数
	
#include<stdlib.h>/*用到了srand函数，所以要有这个头文件*/
#include<stdio.h>
#define MAX 10
		int main(void)
	{
			int number[MAX] = { 0 };
			int i;
			unsigned int seed;
			scanf("%d", &seed);/*手动输入种子*/
			srand(seed);
			for (i = 0; i < MAX; i++)
			{
				number[i] = (rand() % 100);/*产生100以内的随机整数*/
				printf("%d\n", number[i]);
			}
			printf("\n");
			return 0;
		}

//
#include<stdlib.h>
#include<stdio.h>
#include<time.h>/*用到了time函数，所以要有这个头文件*/
#define MAX 10
		int main(void)
		{
			int number[MAX] = { 0 };
			int i;
			srand((unsigned)time(NULL));/*播种子*/
			for (i = 0; i < MAX; i++)
			{
				number[i] = (rand() % 100);/*产生100以内的随机整数*/
				printf("%d\n", number[i]);
			}
			printf("\n");
			return 0;
		}

	//	C++)
		
#include<iostream>
#include<ctime>
#include<cstdlib>
			using namespace std;
		double random(double, double);
		int main()
		{
			srand(unsigned(time(0)));//srand(time(NULL));
			for (int j = 0; j < 10; j++)
				cout << "No." << j + 1 << ":" << int(random(0, 10)) << endl;
			return 0;
		}
		double random(double start, double end)
		{
			return start + (end - start) * rand() / (RAND_MAX + 1.0);
		}
		//从此处采取点斜式子，将返回值范围限定至0-9//的整数，倘若要生成10,(RAND_MAX+1.0)改成(RAND_MAX)
		/*运行结果
		*No.1:3
		*No.2:9
		*No.3:0
		*No.4:9
		*No.5:5
		*No.6:6
		*No.7:9
		*No.8:2
		*No.9:9
		*No.10:6*/