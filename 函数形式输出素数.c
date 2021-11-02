#include <stdio.h>

bool prime(int);
int main() {
	int i;
	for (i = 2; i <= 100; i++)
		if (prime(i))
			printf("%5d\n", i);
	return 0;
}

bool prime(int n) {

	int j;
	for (j = n / 2; j >= 2; j--)
		if (n % j == 0)
			return false;
	return true;
}
