#include <stdio.h>

#define N 5

int main() {
	int d[N], max, k, i;
	for (i = 1; i <= N; i++)
		scanf_s("%d", &d[i]);
	max = d[0];
	k = 0;
	for (i = 0; i < N; i++)
		if (d[i] > max) { max = d[i]; k = i; }
	printf_s("max=d[%d]=%d\n", k, max);

	return 0;
}
