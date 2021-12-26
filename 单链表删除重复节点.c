#include <stdio.h>
#include <malloc.h>

struct cell {
	int x;
	struct cell *next;
};

struct cell *build(void) {//新建单链表，并将建好的单链表首结点地址返回
	struct cell *head, * tmp, * p;
	head = tmp = p = NULL;
	int n;
	do {
		p = (struct cell *)malloc(sizeof(struct cell));
		p->next = NULL;
		scanf("%d", &p->x);
		if (head == NULL) {
			head = p;
			tmp = p;
		} else {
			tmp->next = p;
			tmp = p;
		}
	} while (tmp->x != 0);
	if (head->x == 0)
		head = NULL;
	return head;
}

struct cell *del2one(struct cell *head) {
	struct cell *p, *q, *tmp, *d;
	p = head;
	while (p) {
		q = NULL, tmp = NULL, d = NULL;
		tmp = p;
		q = p->next;
		while (q) {
			if (q->x == p->x) {
				if (q->next == NULL) {
					tmp->next = NULL;
				} else {
					tmp->next = q->next;
				}
				d = q;
				q = q->next;
				free(d);
			} else {
				tmp = q;
				q = q->next;
			}
		}
		p = p->next;
	}

	return head;
}



void print(struct cell *head) {
	struct cell *p, *m;
	p = head;
	m = p->next;
	while (m->x != 0) {
		printf("%d ", p->x);
		p = p->next;
		m = p->next;
	}
	printf("%d", p->x);
}

void release(struct cell *head) {
	struct cell *freenode;

	while (head != NULL) {
		freenode = head;
		head = head->next;
		free(freenode);
	}
}

int main(void) {
	struct cell *head;
	head = build();
	head = del2one(head);
	if (head != NULL)
		print(head);
	else
		printf("NULL");
	release(head);
}
