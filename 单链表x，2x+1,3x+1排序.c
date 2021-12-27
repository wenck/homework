#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct cell {
	int x;
	struct cell* next;
} node;

bool judge(node* head, int n) {
	bool flag = 1;
	while (head != NULL) {
		if (head->x == n) {
			flag = 0;
			break;
		}
		else
			head = head->next;
	}
	return flag;
}

node* build() {
	node* p, * head, * rear, * tmp;
	head = rear = tmp = NULL;
	int i = 0;
	int a, b;
		do{
			p = (node*)malloc(sizeof(node));
			p->next = NULL;
			if (head == NULL) {
				p->x = 1;
				head = p;
				rear = p;
				tmp = p;
			}
			 
				a = tmp->x* 2 + 1;
				b = tmp->x * 3 + 1;
				if (judge(head, a)) {
					p = (node*)malloc(sizeof(node));
					i++;
					rear->next = p;
					rear = p;
					rear->x = a;
				}
			rear->next = NULL;
				if (judge(head, b)) {
					 p = (node*)malloc(sizeof(node));;
					i++;
					rear->next = p;
					rear = p;
					rear->x = b;
				}
				rear->next = NULL;
				tmp = tmp->next;
			
		}while (i <= 50);

	return head;
}


void SortList(node* pHead) {
	if (NULL == pHead) {
		return;
	}
	else {
		node* pTailNode = NULL;
		node* pFlagNode = NULL;
		//因为pFlagNode是记录最后一次发生交换的两个节点的前一个结点，理论上如果pFlagNode与pHead相等，
		//那么就说明链表只是最开始的两个结点是无序的，那么第一次排序完成就不再排序，或者是第二种情况，pFlagNode
		//被置为pHead，要是第一趟排序完成，pFlagNide仍为pHead，就说明没有发生交换，那么就不再进行排序
		while (pFlagNode != pHead) {
			pTailNode = pFlagNode;
			pFlagNode = pHead;
			node* pPreNode = pHead;
			while (pPreNode->next != pTailNode) {
				node* pCurNode = pPreNode->next;
				if (pPreNode->x > pCurNode->x) {
					int dTemp = pPreNode->x;
					pPreNode->x = pCurNode->x;
					pCurNode->x = dTemp;
					//记住最后一次发生交换的地方
					pFlagNode = pPreNode->next;
				}
				pPreNode = pPreNode->next;
			}
		}
	}
}


void del(node* head) {
	node* freenode;
	while (head != NULL) {
		freenode = head;
		head = head->next;
		free(freenode);
	}
}

void print(node* head, int n) {

	for (int i = 1; i < n; i++) {
		printf("%d ", head->x);
		head = head->next;
	}
	printf("%d", head->x);
}

int main() {
	int n;
	node* p;
	scanf_s("%d", &n);
	p = build();
	SortList(p);
	print(p, n);
	del(p);
	return 0;
}
