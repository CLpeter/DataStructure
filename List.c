#include "stdio.h"
#include "stdlib.h"

typedef int ElemType;
typedef int Status;

typedef struct  LNode
{
	ElemType data;
	struct LNode *next;

}LNode,*LinkNode;

typedef struct
{
	LinkNode head,tail;
	int len;
	
}LinkList;

//创建空的链表
int InitList(LinkList *L);
//插入
Status ListInsert(LinkList *L,int i , int e);
//打印
void PrintList(LinkList *L);
int InitList(LinkList *L)
{
	L->head = NULL;
	L->tail = NULL;
	L->len = 0;
	return 1;
}

Status ListInsert(LinkList *L,int i, int e){

	if (i < 1) {

		return 0;
	}
	LinkNode Node = (LinkNode)malloc(sizeof(LNode));
	Node->data = e;
	if (L->head == NULL)
	{
		Node->next = NULL;
		L->head = Node;
		L->len = 1;
		return 1;
	}


	return 1;
}


int main(int argc, char const *argv[])
{
	LinkList L;
	InitList(&L);
	printf("%d\n",L.len);
	ListInsert(&L, 1, 3);
	printf("%d %d\n",L.len, L.head->data);
	return 0;
}