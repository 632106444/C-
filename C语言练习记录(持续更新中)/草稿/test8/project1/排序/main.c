/*���򷽷�:
Ͱ����   :�Ƚϵ�ֱ��(ֱ��)  ���������±���Զ�����  ��Ԫ�ر�������±�������ƥ��Ĵ�����������
ð������ :
ѡ������ :
�������� :
�������� :

*/


//Ͱ����    
/*
#include <stdio.h>

int main()
{
	int arr[] = {1,5,9,5,7,4,6,8,2};  //Ͱ�������±�����ֵ����Ϊ [9+1]
	
	int app[10] = { 0 };   //׼��Ͱ �ǵó�ʼ��

	for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
	{
		app[arr[i]]++; //�ѱ����е�Ԫ�ص��������±�,�����Ԫ������
	}

	for (int i = 0; i < 10; i++)  //��������Ͱ
	{
		for (int j = 1; j <= app[i];j++)  //�ж�����Ͱ�����Ԫ���ǲ��Ǵ��ڵ���1(��Ӧ���±��Ƿ���ֹ�ƥ��һ��"0"Ϊû�в���Ϊ0)
		{
			printf("%d ", i);
		}
	}
	getchar();
	getchar();
	return 0;
}
*/
/*��ϰ
#include <stdio.h>

int main()
{
	int arr[] = { 12,83,74,58,92,31,47 };  //Ͱ�������±�����ֵ����Ϊ [9+1]

	int app[93] = { 0 };   //׼��Ͱ �ǵó�ʼ��

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		app[arr[i]]++; //�ѱ����е�Ԫ�ص��������±�,�����Ԫ������
	}

	for (int i = 0; i < 93; i++)  //��������Ͱ
	{
		for (int j = 1; j <= app[i]; j++)  //�ж�����Ͱ�����Ԫ���ǲ��Ǵ��ڵ���1(��Ӧ���±��Ƿ���ֹ�ƥ��һ��"0"Ϊû�в���Ϊ0)
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
//ð������:  ���������ڵ����������бȽ�Ȼ�󻥻�λ�ð�С�ķ������ �Դ�������ѭ��N��
#include <stdio.h>
//������
void bulletSort(int arr[], int len)//len�����鳤��
{
	for (int i = 0; i < len - 1; i++)  //-1����Ϊ���һ��Ԫ���ǲ���Ҫ�Ƚ���  �ȽϵĴ���-1
	{
		for (int j = 0; j < len - 1-i; j++)  //һ�ֵıȽϹ���
		{
			if (arr[j]>arr[j + 1])   //�������ı�ǰ��Ĵ�ͽ��н���
			{
				int temp = arr[j];    
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

//��ӡ����
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
//ѡ������: ѡ����С�Ļ����������������αȽ�����
#include <stdio.h>

//ѡ��������
void selectSort(int arr[], int len)
{
	int min; //����������С�����ֵ��±�
	for (int i = 0; i < len - 1; i++) //-1 ����һ��Ԫ�ز���Ҫ�Ƚ�
	{
		min = i;//�����һ��������С��
		for (int j = i + 1; j < len; j++)//��Ҫ���������һ��Ԫ��,����һ����Ҫ-1
		{
			if (arr[j] < arr[min])//�Ƚϻ�ȡ��С��Ԫ�ص������±�      
			{
				min = j;
			}
		}
		//����
		int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
}

//��ӡ����
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
//�ѵ�******
//��������: ѡ��һ����ȡ����Ȼ�󲻶Ͻ��бȽ� �ٲ��뵽���м��λ��
//          �Ƚ��ƶ�����
#include <stdio.h>

//����������
void insertSort(int arr[], int len)
{
	int temp;//����������С���Ǹ���
	int j;
	for (int i = 1; i < len; i++)
	{
		temp = arr[i]; //����
		j = i - 1;//ǰ���Ǹ�����������±�
		while (j >= 0 && arr[j]>temp)
		{
			arr[j + 1] = arr[j];//Ԫ���������ƶ�
			j--;//�±���ǰ�ƶ�
		}
		arr[j + 1] = temp;
	}
}

//��ӡ����
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








//�ѵ�*****
//��������:  ��ȷ��һ����׼��(һ�����м���Ǹ�)  Ȼ����߽���һ������  �ұ�Ҳ����һ������ �ڰѻ�׼�����Ž�ȥ
//           ����Ҫ�õ�'�ݹ�'
#include <stdio.h>
void quickSort(int arr[], int lift, int right)  //left��С'0'�������±�  right���������±�'9'
{
	if (lift > right)return;  //�жϷ�ֹ���޵ݹ�
	int i = lift, j = right, temp = arr[i];//��ȡ��׼��
	while (i < j)
	{
		while (temp>arr[j] && i < j)  //�ҵ������׼���ұ߱�����ķŵ����ȥ
		{
			j--;
		}
		if (i < j)
		{
			arr[i++] = arr[j];
		}
		while (temp < arr[i] && i < j)//�ҵ������׼����߱���С�ķŵ��ұ�ȥ
		{
			i++;
		}
		if (i < j)
		{
			arr[j--] = arr[i];
		}
	}
	arr[i] = temp;//��׼���ŵ�ij�ཻ��λ��
	quickSort(arr, lift, i - 1);//���
	quickSort(arr, i + 1, right);//�ұ�
}

//��ӡ����
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



