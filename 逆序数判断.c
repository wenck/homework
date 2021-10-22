#include <stdio.h>

int fun(int n) {
	int t = -1, p;
	while (n) {
		p = n % 10;
		if (t > p)
			return 0;
		t = p;
		n /= 10;

	}
	return 1;
}

int main() {
	int n;
	scanf("%d", &n);
	if (fun(n))
		printf("YES");
	else
		printf("NO");
	return 0;
}
