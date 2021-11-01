#include <stdio.h>

int main() {
	int N, S = 0, P = 1, u = 1, r;
	printf("please input N: ");
	scanf("%d", &N);
	while (N != 0) {
		r = N % 10;
		N = N / 10;
		while (u <= r) {
			P = P * u;
			u = u + 1;
		}
		S = S + P;
	}
	printf("r1!+r2!+...+rn!=%-5d\n", S);
	return 0;
}
