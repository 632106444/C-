//扫雷     ->  指针
/*打印一个变量的 '地址'
#include <stdio.h>

int main(void)
{
	int a = 1;
	printf("%p",&a);
	getchar();
	getchar();
	return 0;
}
*/

//定义指针： 类型 *指针名字  
/*
#include <stdio.h>
int main(void)
{
	int a= 4;
	int *p=&a;
	int *q = NULL;

	a = 10;
	q = p;
	printf("%p\n", *q);

	getchar();
	getchar();

	return 0;
}
*/


/*内存4区
   栈区
   堆区
   全局静态常量区
   代码区
*/

/*
给指针动态分配内存  要#include <stdlib.h>文件
 
申请内存  malloc(大小)单位字节  可以直接写大小，
但是一般用sizeof求出你的类型大小，然后*大小 
malloc()可以表示任意类型指针，不能直接使用(可能可以)，需要强转

使用： int *p=(int *)malloc(sizeof(int)*size); 
size是大小 这样这个指针就能存size个int类型的变量
if(p==NULL)判断申请是否成功，可能会申请失败，比如内存不足，申请的内存太大，失败就直接退出程序

重新分配内存：p=(int *)realloc(p,sizeof(int)*size);  如果申请的分内存比之前的少，那么就会丢失后面的数据，前面的会保留
重新分配内存并且把之前的所有的内容初始化为0：p=(int *)calloc(size,sizeof(int));

释放内存： 每次申请内存使用完过后都要记得释放，如果后面没有释放内存，那么可以申请的内存就会越来越少
重启电脑 free(需要释放的指针)

内存申请好了 ，那么就可以开始赋值了，这里就是需要指针++ ，--,也就是指针的移动，移动的单位是指针类型的大小；

强转: (int *) 

所有的指针大小都是4个字节

*/

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p = (int *)malloc(sizeof(int)* 100); //每次的程序运行都会重新分配内存 同时运行结束之后一定要记得释放内存  
	                                           //如果申请失败就会退出程序
	if (p == NULL)
	{
		printf("申请失败！\n");
	}
	else
	{
		printf("申请成功!\n");
	}
	//*(p + 0) = 12;   //指向第一个存放int类型变量的地址并且赋值
	//*(p + 1) = 13;   //指向第二个存放int类型变量的地址并且赋值
	//printf("%d,%d\n", *(p + 0), *(p +1));

	for (int i = 0; i < 100; i++)
	{
		//  *(p + i) = i + 1;  //赋值1~100 方式一  
		p[i] = i + 1;         //赋值1~100 方式二(数组式赋值方式)
	}

	p = (int *)realloc(p, sizeof(int)* 150);
	//指针=(强转)realloc(指针,sizeof(指针类型)*大小);
	//重新分配勒内存并初始化为0 : 
	//p=(int *)calloc(150,sizeof(int));
    
	for (int i = 0; i < 100; i++)
	{
		//printf("%d \n", *(p + i));
		printf("%d ",p[i]);
	}

	for (int i = 101; i < 150; i++)
	{
		p[i] = i;
	}
	printf("\n---------------\n");
	for (int i = 0; i < 150; i++)
	{
		printf("%d ",p[i]);
	}

	    //*(p+0)为指针的移动 +0为原地不动 ++为自增移动 也可以 p[0]
	   // *(p + 99) = 101;  //内存越界会出现一些问题 出现了内存中断的问题 如果是连在一起的内存的话还是可以运行其他的就是奇怪的问题
	   //还是会出现一些问题 申请了100的int类型的数据就只有100个  不可以101个int类型的数据否者都是属于类存溢出
	   //记住一定不要越界操作


	free(p);    //申请完了之后记得释放内存
	getchar();  
	getchar();
	return 0;
}
*/

/*
//常量指针 const 
void main(void)
{
	int a = 3;
	int b = 6;
	//const int *p = &a;
	
	//p = &b;
	//*p = 3;   这样就是不可以修改的 只可用来读 不可用来修改
	// int const *p ;  也是一个常量指针 与 const int *p 一样  
	//但是唯一的 int *const p与前两个的定义不一样  可以修改指向的内容

	int *const p = &a;
	*p = 6666;             //所以*=p对应的地址a 就被修改为6666

	return 0;
}
*/




#include <stdio.h>

int main()
{
	

	return 0;
}