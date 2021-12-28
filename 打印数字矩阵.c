/*
6
    1
    2   15
    3   16   14
    4   17   21   13
    5   18   19   20   12
    6    7    8    9   10   11
*/

#include <stdio.h>
#define N 45

int main() {
	int i, j, n; //n表示数组是多少行
	int arr[N][N] = { 0 }; //将数组初始化为0，表示没有走过
	int move_x[3] = { 1, 0, -1 }, move_y[3] = { 0, 1, -1 }; //定义两个数组，表示移动的方向
	int x = 0, y = 0, a = 0, b = 0, d = 0, count = 1; //count统计各个下标下的值,定义x，y有必要的
	scanf_s("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j <= i; j++) {
			//printf("d = %d, a = %d ,b = %d,x = %d ,y = %d ,count = %d\n",d,a,b,x,y,count);--可以检验移动的值是否正确
			/*
			有同学问这样是否可以呢？答案是否定的，为什么？
			这时候我们举一个例子就知道了，如果我们输入的n为5，那么这时候如果
			当前已经走到了arr[4][0]这个位置，执行arr[4][0] = 5之后，这时候
			及进行a = a + move_x[d] = 5,b = b + move_y[d] = 0，明显的是
			a >= n了，此时就进入到了if语句进行修改移动的方向，这时候d = 1,
			重点就是这里，这时候a = a + move_x[d] = 5 + 0 = 5，b = b +
			move_y[d] = 0 + 1 = 1,发现同样是发生了越界，所以这样是不正确的。
			arr[a][b] = count;
			a = a + move_x[d];
			b = b + move_y[d];
			if(a < 0 || a >=n || b < 0 || b >=n || arr[a][b]){
				//如果发生了越界，或者这一部已经走过了，那么就更换方向
				d = (d + 1) % 3;
				a = a + move_x[d];
				b = b + move_y[d];
			}
			*/
			arr[x][y] = count;//当前的位置
			a = x + move_x[d];//获取当前位置移动的下一格，然后判断是否会发生越界或者是否已经走过了,如果是，那么就修改移动方向
			b = y + move_y[d];
			if (a < 0 || a >= n || b < 0 || b >= n || arr[a][b]) {
				//如果发生了越界，或者这一部已经走过了，那么就更换方向
				d = (d + 1) % 3;
				a = x + move_x[d];
				b = y + move_y[d];
			}
			x = a;
			y = b;
			count++;
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j <= i; j++) {
			printf("%5d", arr[i][j]); //将数字输出，并且按照右对齐的方式输出
		}
		printf("\n");
	}
	return 0;
}
