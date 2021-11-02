#include <stdio.h>

#define M 100

int main() {
	float b[M], sum = 0.0;
	int i, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%f", &b[i]);
		sum += b[i];

	}
	printf("sum=%f\n", sum / n);
	return 0;
}
