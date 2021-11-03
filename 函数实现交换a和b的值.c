#include <stdio.h>

void swap(int *a, int *b) {
	int c = *a;

	*a = *b;

	*b = c;
}

int main() {
	int a, b;
	printf("please input a and b: ");
	scanf("%d%d", &a, &b);
	swap(&a, &b);
	printf("a=%d,b=%d\n", a, b);
	return 0;
}
