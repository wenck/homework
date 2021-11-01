#include <stdio.h>

int main() {
	int i, j, k;
	for (i = 0; i < 2; i++) {
		printf("i=%d\n", i);
		for (j = 0; j < 2; j++) {
			printf("     j=%d\n", j);
			for (k = 0; k < 2; k++)
				printf("               k=%d\n", k);
		}
	}
	return 0;
}

/*结果i=0
     j=0
               k=0
               k=1
     j=1
               k=0
               k=1
i=1
     j=0
               k=0
               k=1
     j=1
               k=0
               k=1*/
