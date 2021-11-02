#include <stdio.h>

#define N 10

int main() {
	int data, max = 0;
	for (int i = 1; i <= N; i++) {
		scanf("%d", &data);
		if (data > max)
			max = data;
	}
	printf("%d", max);
	return 0;
}
