#include <stdio.h>
#include <string.h>
#include<stdlib.h>

char* gaga(char a[], int n) {
	int i, j = 1;
	char *m=NULL;
	m = (char*)malloc(6 * sizeof(char));
	char b;
	for (i = 0; i < n; i++) {
		b = a[i];
		if ((b > '0' && b <= '9') || (b >= 'A' && b <= 'F')) {
			m[0] = a[i];
			break;
		}
	}
	i++;
	for (i; i < n&& j < 5; i++) {
		b = a[i];
		if ((b >= '0' && b <= '9') || (b >= 'A' && b <= 'F')) {
			m[j] = a[i];
			j++;
		}
	}
	m[j] = 0;
	return &m[0];
}

int main() {
	char a[100];
	gets_s(a);
	char *p=gaga(a, strlen(a));
	printf("%s", p);
	return 0;
}
