#include <stdio.h>

#define M 100

int main() {
	float b[M], sum = 0;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%f", &b[i]);
		sum += b[i];

	}
	printf("%f", sum / n);
	return 0;
}
