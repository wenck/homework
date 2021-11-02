#include <stdio.h>

int max(int a, int b);
int main() {
	int a, b, c;
	scanf("%d%d", &a, &b);
	c = max(a, b);
	printf("c=%d\n", c);
	return 0;
}

int max(int a, int b) {
	int u;
	if (a > b)
		u = a;
	else
		u = b;
	return u;
}
