#include<stdio.h>

#define MAX(a,b) (a) >(b) ?(a) :(b) //比较参数a和b的值
int main()
{
	int add[5][5][5] = {
		{
			{1,2,3,4},
			{6,7,8,9},
			{10,11,12,13},
			{14,15,16,17},

		},
		{
			{ 1, 2, 3, 4 },
			{ 6, 7, 8, 9 },
			{ 10, 11, 12, 13 },
			{ 14, 15, 16, 17 },
		},
		{
			{ 1, 2, 3, 4 },
			{ 6, 7, 8, 9 },
			{ 10, 11, 12, 13 },
			{ 14, 15, 16, 17 },

		},
		{
			{ 1, 2, 3, 4 },
			{ 6, 7, 8, 9 },
			{ 10, 11, 12, 13 },
			{ 14, 15, 16, 17 },


		},

	                                         };//设置一个三维数组来进行模拟输出；




	printf("%d\n",add[0][2][3]);
	getchar();
	getchar();

	return 0;
}



int main1()
{




	int a = 10;
	int  b = 20;

	printf("%d\n",MAX(a,b)*10);//打印一个a和b比较的放大了10倍的结果
	getchar();
	getchar();

	return 0;
}//忽略掉这个主函数。不打算运行。

