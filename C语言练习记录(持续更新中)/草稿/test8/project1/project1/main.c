/* 指针练习项目练习 
#include <stdio.h>
int main(void)
{
	//指针的定义 类型*标识符
	//指针指向一个地址

	int *p;
	int *q=NULL;
	int a=8;
	p=&a;
	printf("a=%d:%d \n",a,&a );
	printf("p=%d:%d:%d\n",p,&p,*p);   //俩个地址 一个是变量的地址  另一个是指针的地址也就是可以为指针的指针
	getchar();
	getchar();
	return 0;
}*/

/*
#include <stdio.h>
int main()
{
	int *p=0;//类似于int *p=NULL  因为NULL=0 
	int a=8;
	p=&a;
	*p=10;      //取地址的内容并赋值10
	int *const p2=NULL;
	const int a=10;
	int arr[10];             //数组给分配了一个栈区的空间属于静态空间 是属于不可变的内存空间
	
	printf("a=%d;%d;\n",&a,a);
	printf("p=%d;%d \n",p,*p);
	getchar();
	getchar();
	for(int i=0;i<10;i++)
	{
		printf("%d\n",a);
	}
	return 0;
}

*/

/*
#include <stdio.h>

void function(int ar[])   //int ar[] 就是定义了一个指针给子函数去用来改变一些变量的值
{
	int a;
}

int main()
{
	const int a=10;
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int *p=arr;
	int i;               //for(int i=0;i<10;i++) 这样写是错的因为 在函数里不可以定义申明函数
	for(i=0;i<10;i++)
	{
		printf("%d  ",p[i]);
	}
	printf("p.size=%d arr.size=%d",sizeof(p),sizeof(arr));
	


	getchar();
	getchar();
	return 0;
}

*/

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//int  *p=(int *)malloc(sizeof(int)*100);   //申请一个内存 
	int arr[10]={10,9,8,7,6,5,4,3,2,1};
	int *p=arr;   //指针p 指向arr[0]的首(0)地址
	printf("%d \n",*p+4);   //指针"*"与"&"的运算符的优先级很高但不是最高 
	printf("%d \n",*(p+4));    //*(p+4)指的是p指针的自增为4 也就是移动的4个地址(本生为0即为首个地址) 也就是指针的运算 
	p=&arr[4];

	getchar();
	getchar();
	return 0;
}
*/


/*指针与多维数组*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[3][3]={
		1,2,3,
		4,5,6,
		7,8,9
	};
	
	int *p=arr;         //因为只是指针  所以当指向二维(多维)数组时就会报错
	
	printf("%d\n",*(p+8));
	getchar();
	getchar();
	return 0;
}
*/

/*
结构体与指针

*/


/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//typedef 为类型定义一个别名  是一个局部的定义,不是全局的定义
typedef struct node   //定义一个结构体 
{
	int a;
}NODE;                 // NODE为结构体别名
//


int main()
{
	NODE *p=(NODE *)malloc(sizeof(NODE)*10);   //定义一个结构体指针
	//相当于 int *p=(int *)malloc(sizeof(int)*10);  相当于 NODE p[10] 定义了一个数组

	//p->a=3;       //结构体指针指向a变量  结构体指针指向结构体里面的成员变量
	//指向结构体里面的全局变量(即地址)
	int i;
	for(i=0;i<10;i++)
	{
		(p+i)->a=i+1;   //相当于 p[i].a=i+1;
	}


	//(*p).a=3;         //如果是点出成员就需要先解引用"*" 在其所在的地址反回一个值
	                 //'*'解引用(返回内存地址中保存的值) 返回地址中那个变量的值
	for(i=0;i<10;i++)
	{
	printf("%d \n",(p+i)->a);
	}
	free(p);
	getchar();
	getchar();

	return 0;
}

*/


//二级指针  多级指针
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a = 4;
	int *p1 = &a;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4;     //是多少级的指针就解多少次的引用 "&"
	p4 = p2;         //高级指针只可以指向下一级指针的地址  不可以跨级  否者内存溢出
	printf("%d ",****p4);

	getchar();
	getchar();
	return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a = 4;
	int *p1 = &a;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;     //是多少级的指针就解多少次的引用 "&"


	printf("%d ", ****p4);

	getchar();
	getchar();
	return 0;
}
*/


/*   多级指针成功案例

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fun(int **a)   //int *a=p1;  一级指针只可以进行值传递
{
	*a = (int *)malloc(sizeof(int));
	**a = 100;
	printf("%d \n",**a);
}


int main()
{
	int a = 4;
	int *p1 = NULL;
	fun(&p1);           //这就为值传递   传参数的的时候类型必须保持一致  不用加"&" 么有问题
	printf("%d \n",*p1);
	free(p1);
	getchar();
	getchar();
	return 0;
}

*/


/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fun(int **a)   //int *a=p1;  一级指针只可以进行值传递
{
	*a = (int *)malloc(sizeof(int)*10);
	for (int i; i < 10; i++)
	{
		*(*a+i) = i;
	}
}


int main()
{
	int a = 4;
	int *p1 = NULL;
	fun(&p1);           //这就为值传递   传参数的的时候类型必须保持一致  不用加"&" 么有问题
	for (int i = 0; i < 10; i++)
	{
		printf("%d \n", *(p1+i));
	}
	free(p1);
	getchar();
	getchar();
	return 0;
}
*/


/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
	char *arr[4] = { "hello", "world", "TZ", "EDU" };
	//char *arr[0]="hello"
	//char *arr[1]="world"


	printf("%s %s %s %s ",arr[0],arr[1],arr[2],arr[3]);


	getchar();
	getchar();
	return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a=4;
	int *arr[3];
	arr[0] = &a;
	*arr[0] = 666;
	printf("%d" ,a);
	getchar();
	getchar();
	return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a = 4;
	int *arr[3];  
	//指针数组表示:数组名[数组下标]  arr[0]  arr[1] arr[2];  arr[3]-越界
	
	arr[0] = (int *)malloc(sizeof(int)* 10);
	for (int i = 0; i < 10; i++)
	{
		*(arr[0] + i) = i + 1;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(arr[0] + i));
	}
	getchar();
	return 0;
}
*/

/*
指针数组  定义: char *arr[4]={"hello", "world", "TZ", "EDU"};
		 使用: 可以使用指针的数组里面的指针来申请内存来存内容,
		 arr[0] = (int *)malloc(sizeof(int)* 10);
		 然后赋值,向一个指针申请内存后正常的使用

数组指针  定义: int (*p)[3];
			   定义了一个数组指针,指向一个有3列的数组
		 使用:int arr[2][5]={0};   //定义了一个数组
			  int (*p)[5];//定义数组指针
			  p=arr;//这个数组指针指向数组的首地址

*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int arr[3][3] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int *p = arr;
	printf("%d ",*(p+8));
	getchar();
	return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//int(*p)[3];       //这里就是定义了一个数组指针,指向一个有3列的数组

	int arr[2][3] = { 6,5,4,3,2,1 };  //定义数组

	int(*p)[3];        //定义数组指针 *p->y的地址 

	p = arr;          //这个数组指针指向数组的首地址
	
	printf("%d ",**p);   //不太建议这样使用
	getchar();
	getchar();
	return 0;
}
*/

/*
//提示  几维的数组就解引用几次"**" 然后就解出来为首地址的元素  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//int(*p)[3];       //这里就是定义了一个数组指针,指向一个有3列的数组

	int arr[2][3] = { 6, 5, 4, 3, 2, 1 };  //定义数组

	int(*p)[3];        //定义数组指针 *p->y的地址 

	p = arr;          //这个数组指针指向数组的首地址

	printf("%d ", p[1][2]);   //建议这样使用
	getchar();
	getchar();
	return 0;
}

*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//int(*p)[3];       //这里就是定义了一个数组指针,指向一个有3列的数组

	int arr[2][3] = { 6, 5, 4, 
					  3, 2, 1 };  //定义数组

	int(*p)[3];        //定义数组指针 *p->y的地址 

	p = arr;          //这个数组指针指向数组的首地址

	printf("%d ", p[1][2]);   //不太建议这样使用
	getchar();
	getchar();
	return 0;
}
*/


/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//int(*p)[3];       //这里就是定义了一个数组指针,指向一个有3列的数组

	int arr[2][3] = { 6, 5, 4, 3, 2, 1 };  //定义数组

	int(*p)[3];        //定义数组指针 *p->y的地址 

	p = arr;          //这个数组指针指向数组的首地址

	printf("%d ", p[1][2]);   //比较建议这样使用
	// *(p[i]+j), *(*(p+i)+j),(*(p+i))[j],p[i][j] 
	// (*(*(p+i)+j) 
	getchar();
	getchar();
	return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{


	int arr[2][3] = { 6, 5, 4, 3, 2, 1 };  //定义数组

	int *p[2];        //定义数组指针 只要每行的首地址就行了

	p[0] = &arr[0];
	p[1] = &arr[1];

	printf("%d ", p[1][2]);

	getchar();

	return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{


	int arr[2][3] = { 6, 5, 4, 3, 2, 1 };  //定义数组

	int *p[2];        //定义指针数组 只要每行的首地址就行了

	for (int i=0;i<2;i++)
	{
		p[i] = arr[i];
	}

	printf("%d ", p[1][2]);

	//int (*p)[3];  定义数组指针
	//p=arr;  这个数组指针指向数组的首地址
	//printf("%d ", p[1][2]);   //比较建议这样使用
	// *(p[i]+j), *(*(p+i)+j),(*(p+i))[j],p[i][j] 
	// (*(*(p+i)+j) 



	getchar();

	return 0;
}
*/



//函数指针:就是一个指针指向一个函数
//定义: 类型(*函数指针名)(参数列表);  这里的参数列表是这个函数指针指向的函数的参数列表
//使用: void add(){} 定义函数
//      void (*p)(); 定义函数指针
//		p=add; 函数指针指向函数,或者p=&add;也可以,函数名就是函数的首地址
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add()
{
	printf("6");
}

void fun(int a, double b)
{
	return 1;
}

void(*q)(int a, double b);
void(*p)(); //定义了一个函数指针

int main()
{
	q = fun;
	p = add;
	p();       //只不过函数名被换成了指针名
	q(1,1.2);
	getchar();
	return 0;
}
*/






//指针函数:函数的返回值就是一个指针
// char *add(){}  这就是一个指针函数返回的值是地址
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add()
{
	printf("6");
}

int *fun(int *a, double b)  //定义一个指针函数
{
	return *a;
}

int(*q)(int a, double b);
void(*p)();   //定义了一个函数指针

int main()
{
	p = add;
	q = fun;
	
	int a = 3;

	q(&a, 1.2);
	p();
	return 0;
}*/






//回调函数:就是把一个函数当作一个实参来进行一个传递调用
//
//
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void print()
{
	printf("2345");
}

typedef void(*PRINT)();  //大写的"PRINT"就是这个函数的别名

void fun(PRINT print)
{
	print();
}

int main()
{
	fun(print);
	
	getchar();

	return 0;
}
*/




//回调函数
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void print(int a,int b)
{
	printf("%d ",a+b);
}

typedef void(*PRINT)(int a,int b);  //大写的"PRINT"就是这个函数的别名

void fun(PRINT print,int a,int b)
{
	print(a,b);
}

int main()
{
	fun(print,1,2);

	getchar();

	return 0;
}
*/






//回调函数

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void print(int a,int b)
{
printf("%d ",a+b);
}

//typedef void(*PRINT)(int a,int b);  //大写的"PRINT"就是这个函数的别名
void(*PRINT)(int a, int b);             //函数指针
void fun(void(*PRINT)(int a, int b), int a, int b)
{
	PRINT(a,b);
}

int main()
{
	fun(print,1,2);

	getchar();

	return 0;
}

