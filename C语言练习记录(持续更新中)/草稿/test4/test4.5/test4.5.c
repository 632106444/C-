#include<stdio.h>


int main()
{
	int add[10] = { 2,1,3,4,2,34,67,8,34,45 };
	int arr[10];
	int i;
	for (i = 0; i < 10;i++)//元素逐一查看
	{
		if (add[i]>10)//判断元素是否满足条件
		{
			
			for (int j=i; j < 10; j++)//定位到当前的元素
			{
				add[j] = add[j+1];//使后一位的元数赋值到前一位满足条件的元素使其除掉不在出现避免出现
			}
			i=i--;//i减1在循环后自增在返回到当前的元素，再次进行检验
		}
	}
	for (i =0; i < 6; i++)
	{
		printf("%d\n", add[i]);
	}
	getchar();
	getchar();
	return 0;
}
