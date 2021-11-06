/*
问题描述：编写程序，把给定长度为10的整数数组中所有元素循环右移 j 位。

输入：从键盘随机输入十个整数，作为数组a的元素；输入一个正整数j作为移动位数。

输出：移动后的整数数组a中的所有元素，各元素间无间隔字符。

样例：输入 1 2 3 4 5 6 7 8 9 0  

                  2

    输出 9012345678
    */


#include <stdio.h>

int main() {
	int m[10], n[10], j, e;
	for (int i = 0; i <= 9; i++) {
		scanf("%d", &m[i]);
	}
	scanf("%d", &j);
	for (int k = 0; k <= 9; k++) {
		if (k + j > 9) {
			e = (k + j) % 10;
			n[e] = m[k];
		} else {
			e = k + j;
			n[e] = m[k];
		}
	}
	for (int g = 0; g <= 9; g++)
		printf("%d", n[g]);
	return 0;

}
