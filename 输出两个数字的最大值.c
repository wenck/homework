#include <stdio.h>

int max(int x, int y) {
	int u;
	if (x > y)
		u = x;
	else
		u = y;
	return u;
}

int main() {
	int a, b, c;
	scanf("%d%d", &a, &b);
	c = max(a, b);
	printf("c=%d\n", c);
	return 0;
}
