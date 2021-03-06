
/***************************数组指针**************************/
/**********************************************************
数组指针:指向的是一个数组
定义:int (*p)[3]:这里就是定义了一个数组指针,指向一个有3列的数组
使用:int arr[2][5]={0}; //定义数组
int (*p)[5];       //定义数组指针
p=arr;             //这个数组指向数组的首地址

在这里使用数组指针的时候,如果是用指针来使用就是像一个二维数组一样使用p[y][x];
如果是指针只是一个指针变量,似乎是C语言里专门用来指向二维数组的,它占有内存中一个
指针的存储空间; 指针数组是多个指针变量,以数组的形式排列在内存当中,占用多个指针的存储空间;
还需要说明的一点就是,同时用来指向二维数组时,其引用和用数组名引用都是一样的;

比如要表示数列中i行j列的一个元素: *(p[i]+j), *(*(p+i)+j),(*(p+i)+j),(*(p+i))[j],p[i][j]


**********************************************************/




//案例1   数组指针解引用的用法  **p
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[2][3] = {6,5,4,3,2,1};//定义数组  
	// 在arr[2][3]中  [] 起到一个解引用的作用   arr[][]就说明了解引用了两次

	int(*p)[2]; //定义数组指针  想当年于一个二级指针

	p = arr;  //这个数组指针指向数组的首地址

	printf("%d ",**p);
	getchar();
	getchar();
	return 0;
}
*/



//案例2  数组指针的用法
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[2][3] = {6,5,4,3,2,1};  //定义一个数组
	int(*p)[3];  //定义了一个  为3列的多维数组指针
	//int arr[2][3][4];
	//int (*p)[3][4];   //多维数组指针的定义除了最高的下标不要外其他的都跟上面的的没有区别


	
	p = arr;  //这个数组指针指向数组的首地址

	printf("%d \r\n",**p);  //用法1
	printf("%d \r\n",p[1][2]);  //用法2
	//*(p[i]+j), *(*(p+i)+j),(*(p+i)+j),(*(p+i))[j],p[i][j]   全部都为二级指针
//对应*(*(p+i)+j)  

	getchar();
	getchar();
	return 0;
}
*/


//案例3 指针数组指向二维属数组
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[2][3] = {
		6,5,4,
		3,2,1};//定义数组

	int *p[2];  //定义指针数组 arr可以为两个一维数组
	p[0] = &arr[0];
	p[1] = &arr[1];

	printf("%d ",p[1][2]);

	getchar();
	return 0;
}//运行结果的指针的间接级别不同
*/




//案例3.1 指针数组指向二维属数组
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[2][3] = {
	6,5,4,
	3,2,1};//定义数组

	int *p[2];  //定义指针数组 arr可以为两个一维数组
	for (int i = 0; i < 2; i++)  //这样取地址的话就不会有间接级别的问题
	{
		p[1] = arr[i];
	}

	printf("%d ",p[1][2]);

	getchar();
	return 0;
}
*/



//案例3.2 指针数组指向三维属数组

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[2][3] = {
		6, 5, 4,
		3, 2, 1 };//定义数组

	int *p[2];  //定义指针数组 arr可以为两个一维数组
	for (int i = 0; i < 2; i++)  //这样取地址的话就不会有间接级别的问题
	{
		p[1] = arr[i];
	}

	printf("%d ", p[1][2]);

	getchar();
	return 0;
}



