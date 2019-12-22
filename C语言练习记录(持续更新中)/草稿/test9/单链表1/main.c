

#include <stdio.h>
#include <stdlib.h>

//单链表
typedef struct node
{
	char name[20];
	int id;

	struct node *next; //指向下一个节点的位置
}NODE;


//初始化
NODE *init()
{
	NODE *p = (NODE *)malloc(sizeof(NODE));  //申请一个节点  内存申请放在堆区用的是指针
	p->next = NULL;  //指针初始化
	return p;
}


//插入
void insert(NODE *head, NODE data)
{
	NODE *p = (NODE *)malloc(sizeof(NODE));  //申请一个节点  内存申请放在堆区用的是指针
	*p = data; //接收数据

	//指针的赋值
	//头插
	//p->next = head->next;//新节 点的下一个是头节点的下一个
	//head->next = p;  //头节点的下一个是新节点

	//尾插
	NODE *q = head;
	//找打最后一个节点
	while (q->next != NULL)
	{
		q = q->next;
	}

	p->next = q->next;
	q->next = p;
}


//输出
void print(NODE *head)
{
	NODE *p = head->next;//指向第一个有数据的节点
	while (p!=NULL)
	{
		printf("%d\t%s\n",p->id,p->name);
		p = p->next;   //指针后移
	}
}


//查找
void find(NODE *head,int id)
{
	NODE *p = head->next;//指向第一个有数据的节点
	while (p != NULL)
	{
		printf("%d \t %s \n",p->id,p->name);
		p = p->next;  //指针后移
	}
}




int main()
{
	NODE *head = init();  //初始化头节点
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




