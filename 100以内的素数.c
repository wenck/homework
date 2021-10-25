#include <stdio.h>

int main() {
	int i, j;
	bool flag;
	for (i = 2; i <= 100; i++) {
		flag = true;
		for (j = i / 2; j >= 2; j--)
			if (i % j == 0) {
				flag = false;
				break;
			};
		if (flag)
			printf("%5d\n", i);

	}
	return 0;
}
