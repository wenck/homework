/*
9
 1 2 4 7 1 6 2 9 7
   3 5 8 2 7 3 0 8
     6 9 3 8 4 1 9
       0 4 9 5 2 0
         5 0 6 3 1
           1 7 4 2
             8 5 3
               6 4
                 5
                 */
                
#include <stdio.h>
#include <malloc.h>

typedef struct cell {
	int x;
	struct cell* next;
} node;

node* build() {
	node* p, * head, * rear;
	int i = 1;
	head = p = rear = 0;
	do {
		p = (struct cell*)malloc(sizeof(struct cell));
		p->next = 0;
		p->x = i;
		if (head == 0) {
			head = p;
			rear = p;
		}
		else {
			rear->next = p;
			rear = p;
		}
		i++;
	} while (i != 10);
	p = (struct cell*)malloc(sizeof(struct cell));
	p->next=NULL;
	p->x = 0;
	rear->next = p;
	rear = p;
	rear->next = head;
	return head;
}

int main() {
	int arr[50][50] = { 0 };
	node* p;
	p = build();
	int n;
	scanf_s("%d", &n);
	int a = 0, b = 0, x = 0, y = 0, i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j <= i; j++) {
			arr[j][i] = p->x;
			p = p->next;
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < i; j++) {
			printf("  ");
		}
		for (j = i; j < n; j++) {
			printf("%2d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;

}
