#include <stdio.h>

int main() {
	int yy, n;
	printf("plz input begin year: ");
	scanf("%d", &yy);
	printf("plz input the number of the leap year");
	scanf("%d", &n);
	yy = (yy / 4 + 1) * 4;
	do {
		if ((yy % 4 == 0) && (yy % 100 != 0) || (yy % 400 == 0)) {
			printf("year%d\t", yy);
			n--;

		};
		yy++;

	} while (n > 0);
	return 0;
}
