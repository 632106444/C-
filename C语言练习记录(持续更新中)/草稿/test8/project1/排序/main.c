/*排序方法:
桶排序   :比较的直接(直观)  利用数组下标的自动排序  把元素变成数组下标来进行匹配的次数储存起来
冒泡排序 :
选择排序 :
插入排序 :
快速排序 :

*/


//桶排序    
/*
#include <stdio.h>

int main()
{
	int arr[] = {1,5,9,5,7,4,6,8,2};  //桶的数组下标的最大值至少为 [9+1]
	
	int app[10] = { 0 };   //准备桶 记得初始化

	for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
	{
		app[arr[i]]++; //把被排列的元素当作数组下标,里面的元素自增
	}

	for (int i = 0; i < 10; i++)  //历遍整个桶
	{
		for (int j = 1; j <= app[i];j++)  //判断我们桶里面的元素是不是大于等于1(对应的下标是否出现过匹配一次"0"为没有不能为0)
		{
			printf("%d ", i);
		}
	}
	getchar();
	getchar();
	return 0;
}
*/
/*练习
#include <stdio.h>

int main()
{
	int arr[] = { 12,83,74,58,92,31,47 };  //桶的数组下标的最大值至少为 [9+1]

	int app[93] = { 0 };   //准备桶 记得初始化

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		app[arr[i]]++; //把被排列的元素当作数组下标,里面的元素自增
	}

	for (int i = 0; i < 93; i++)  //历遍整个桶
	{
		for (int j = 1; j <= app[i]; j++)  //判断我们桶里面的元素是不是大于等于1(对应的下标是否出现过匹配一次"0"为没有不能为0)
		{
			printf("%d ", i);
		}
	}
	getchar();
	getchar();
	return 0;
}*/

/*
#include <stdio.h>

int main()
{
	int arr[10];
	printf("%d \n",sizeof(arr));
	printf("%d ", sizeof(int));
	getchar();
	getchar();
	return 0;
}
*/




/*
//冒泡排序:  从左到右相邻的两个数进行比较然后互换位置把小的放在左边 以此类推来循环N次
#include <stdio.h>
//排序函数
void bulletSort(int arr[], int len)//len是数组长度
{
	for (int i = 0; i < len - 1; i++)  //-1是因为最后一个元素是不需要比较了  比较的次数-1
	{
		for (int j = 0; j < len - 1-i; j++)  //一轮的比较过程
		{
			if (arr[j]>arr[j + 1])   //如果后面的比前面的大就进行交换
			{
				int temp = arr[j];    
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

//打印出来
void print(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[] = { 1, 5, 6, 3, 2, 4, 8, 9, 6, 5, 4, 7, 8 };
	bulletSort(arr,sizeof(arr)/sizeof(int));
	print(arr, sizeof(arr) / sizeof(int));
	getchar();
	getchar();
	return 0;
}*/







/*
//选择排序: 选择最小的或者最大的来进行依次比较排序
#include <stdio.h>

//选择排序函数
void selectSort(int arr[], int len)
{
	int min; //用来保存最小的数字的下标
	for (int i = 0; i < len - 1; i++) //-1 最后的一个元素不需要比较
	{
		min = i;//假设第一个就是最小的
		for (int j = i + 1; j < len; j++)//需要遍历到最后一个元素,所以一定不要-1
		{
			if (arr[j] < arr[min])//比较获取最小的元素的数组下标      
			{
				min = j;
			}
		}
		//交换
		int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
}

//打印出来
void print(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
}


int main()
{
	int arr[] = { 1, 5, 6, 3, 2, 4, 8, 9, 6, 5, 4, 7, 8 };
	selectSort(arr, sizeof(arr) / sizeof(int));
	print(arr, sizeof(arr) / sizeof(int));
	getchar();
	getchar();
	return 0;
}
*/







/*
//难点******
//插入排序: 选择一个数取出来然后不断进行比较 再插入到其中间的位置
//          比较移动插入
#include <stdio.h>

//插入排序函数
void insertSort(int arr[], int len)
{
	int temp;//用来保存最小的那个数
	int j;
	for (int i = 1; i < len; i++)
	{
		temp = arr[i]; //保留
		j = i - 1;//前面那个数的数组的下标
		while (j >= 0 && arr[j]>temp)
		{
			arr[j + 1] = arr[j];//元素往后面移动
			j--;//下标往前移动
		}
		arr[j + 1] = temp;
	}
}

//打印出来
void print(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[] = { 1, 5, 6, 3, 2, 4, 8, 9, 6, 5, 4, 7, 8 };
	insertSort(arr, sizeof(arr) / sizeof(int));
	print(arr, sizeof(arr) / sizeof(int));
	getchar();
	getchar();
	return 0;
}
*/








//难点*****
//快速排序:  先确定一个基准数(一般是中间的那个)  然后左边进行一个排序  右边也进行一个排序 在把基准数给放进去
//           必须要用到'递归'
#include <stdio.h>
void quickSort(int arr[], int lift, int right)  //left最小'0'的数组下标  right最大的数组下标'9'
{
	if (lift > right)return;  //判断防止无限递归
	int i = lift, j = right, temp = arr[i];//获取基准数
	while (i < j)
	{
		while (temp>arr[j] && i < j)  //找到这个基准数右边比他大的放到左边去
		{
			j--;
		}
		if (i < j)
		{
			arr[i++] = arr[j];
		}
		while (temp < arr[i] && i < j)//找到这个基准数左边比他小的放到右边去
		{
			i++;
		}
		if (i < j)
		{
			arr[j--] = arr[i];
		}
	}
	arr[i] = temp;//基准数放到ij相交的位置
	quickSort(arr, lift, i - 1);//左边
	quickSort(arr, i + 1, right);//右边
}

//打印出来
void print(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[] = { 1, 5, 6, 3, 2, 4, 8, 9, 6, 5, 4, 7, 8 };
	quickSort(arr,0,sizeof(arr) / sizeof(int));
	print(arr,sizeof(arr) / sizeof(int));
	getchar();
	getchar();
	return 0;
}



