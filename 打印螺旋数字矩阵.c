/*
9
    1    2    3    4    5    6    7    8    9
   32   33   34   35   36   37   38   39   10
   31   56   57   58   59   60   61   40   11
   30   55   72   73   74   75   62   41   12
   29   54   71   80   81   76   63   42   13
   28   53   70   79   78   77   64   43   14
   27   52   69   68   67   66   65   44   15
   26   51   50   49   48   47   46   45   16
   25   24   23   22   21   20   19   18   17
   */

#include <stdio.h>

int main() {
	int arr[50][50] = {0};
	int n;
	scanf("%d", &n);
	int i, j, x = 0, y = 0, count = 1;
	int a = 0, b = 0;
	int d = 0;
	int mx[4] = {0, 1, 0, -1}, my[4] = {1, 0, -1, 0};
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			arr[x][y] = count;
			a = x + mx[d];
			b = y + my[d];
			if (a >= n || a < 0 || b >= n || b < 0 || arr[a][b]) {
				d = (d + 1) % 4;
				a = x + mx[d];
				b = y + my[d];
			}
			x = a;
			y = b;
			count++;
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
