/**************************************************************

指针是干嘛的:用来存地址的!
地址是用来干嘛的:是用来元素和变量的!

**************************************************************/

/***********************指针数组练习**************************/
//案例1  间接修改地址内容
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a=4;
	int *arr[3];

	arr[0] = &a;
	*arr[0] = 666;    //间接的把地址的内容就更改了 解引用的同时就把地址存的元素和变量给改变了
	printf("%d ",a);

	getchar();
	getchar();
	return 0;
}
*/




//案例2  指针数组赋值与输出
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 4;
	int *arr[3];
	arr[0] = (int *)malloc(sizeof(int)* 10);
	for (int i = 0; i < 10; i++)  //指针数组进行赋值
	{
		*(arr[0] + i) = i + 1;
	}

	for (int i = 0; i < 10; i++)  //指针数组进行输出
	{
		printf("%d ", *(arr[0] + i));
	}

	getchar();
	getchar();
	return 0;
}
*/



