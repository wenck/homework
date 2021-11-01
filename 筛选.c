#include <stdio.h>
#define n 100

int main(void) {
	int i, j, k, num;
	i = 0;
	j = 0;
	k = 0;
	printf("plz input a integer: ");
	scanf("%d", &num);
	while (num != n) {
		switch (num) {
			case -1:
				i++;
				break;
			case 0:
				j++;
				break;
			case 1:
				k++;
		}
		printf("plz input a integer: ");
		scanf("%d", &num);

	}
	printf("number of -1:%d\n", i);
	printf("number of 0:%d\n", j);
	printf("number of 1:%d\n", k);
	return 0;
}
