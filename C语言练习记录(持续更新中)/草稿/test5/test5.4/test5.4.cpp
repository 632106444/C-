//�����20����С��ΧΪ0 - 99�������
#include<stdlib.h>//ͷ�ļ�����rand��srand����

#include<stdio.h>

#include<time.h>

void main()

{

	int i, k;
	srand((unsigned)time(NULL));//ѡȡ�����ļ�

	for (i = 0; i<20; i++)

	{

		k = rand() % 100;//%100����������ķ�Χ

		printf("k=%d\n", k);//��������

	}

    
	//������ʮ��0-100֮�������
	
#include<stdlib.h>/*�õ���srand����������Ҫ�����ͷ�ļ�*/
#include<stdio.h>
#define MAX 10
		int main(void)
	{
			int number[MAX] = { 0 };
			int i;
			unsigned int seed;
			scanf("%d", &seed);/*�ֶ���������*/
			srand(seed);
			for (i = 0; i < MAX; i++)
			{
				number[i] = (rand() % 100);/*����100���ڵ��������*/
				printf("%d\n", number[i]);
			}
			printf("\n");
			return 0;
		}

//
#include<stdlib.h>
#include<stdio.h>
#include<time.h>/*�õ���time����������Ҫ�����ͷ�ļ�*/
#define MAX 10
		int main(void)
		{
			int number[MAX] = { 0 };
			int i;
			srand((unsigned)time(NULL));/*������*/
			for (i = 0; i < MAX; i++)
			{
				number[i] = (rand() % 100);/*����100���ڵ��������*/
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
		//�Ӵ˴���ȡ��бʽ�ӣ�������ֵ��Χ�޶���0-9//������������Ҫ����10,(RAND_MAX+1.0)�ĳ�(RAND_MAX)
		/*���н��
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