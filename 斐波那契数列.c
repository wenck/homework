#include <stdio.h>

int main() {
	int u = 1, v = 1, w, k = 3;
	printf("%12d\n%12d\n", u, v);
	do {
		w = u + v;
		printf("%12d\n", w);
		u = v;
		v = w;
		k = k + 1;
	} while (k <= 20);
	return 0;
}
