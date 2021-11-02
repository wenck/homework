#include <stdio.h>

#define N 10

int main() {
	int data, max = 0, i;
	for (i = 2; i <= N; i++) {
		scanf("%d", &data);
		if (data > max)
			max = data;

	}
	printf("max=%d\n", max);
	return 0;
}
