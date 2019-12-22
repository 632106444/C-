

#include <stdio.h>
#include <stdlib.h>

//������
typedef struct node
{
	char name[20];
	int id;

	struct node *next; //ָ����һ���ڵ��λ��
}NODE;


//��ʼ��
NODE *init()
{
	NODE *p = (NODE *)malloc(sizeof(NODE));  //����һ���ڵ�  �ڴ�������ڶ����õ���ָ��
	p->next = NULL;  //ָ���ʼ��
	return p;
}


//����
void insert(NODE *head, NODE data)
{
	NODE *p = (NODE *)malloc(sizeof(NODE));  //����һ���ڵ�  �ڴ�������ڶ����õ���ָ��
	*p = data; //��������

	//ָ��ĸ�ֵ
	//ͷ��
	//p->next = head->next;//�½� �����һ����ͷ�ڵ����һ��
	//head->next = p;  //ͷ�ڵ����һ�����½ڵ�

	//β��
	NODE *q = head;
	//�Ҵ����һ���ڵ�
	while (q->next != NULL)
	{
		q = q->next;
	}

	p->next = q->next;
	q->next = p;
}


//���
void print(NODE *head)
{
	NODE *p = head->next;//ָ���һ�������ݵĽڵ�
	while (p!=NULL)
	{
		printf("%d\t%s\n",p->id,p->name);
		p = p->next;   //ָ�����
	}
}


//����
void find(NODE *head,int id)
{
	NODE *p = head->next;//ָ���һ�������ݵĽڵ�
	while (p != NULL)
	{
		printf("%d \t %s \n",p->id,p->name);
		p = p->next;  //ָ�����
	}
}




int main()
{
	NODE *head = init();  //��ʼ��ͷ�ڵ�
	NODE myNode;
	while (1)
	{
		scanf("%d %s",&myNode.id,myNode.name);
		if (myNode.id == 0)break;
		insert(head, myNode);
	}
	print(head);
	getchar();
	getchar();
	return 0;
}




