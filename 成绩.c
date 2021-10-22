#include <stdio.h>

int main(void) {
	int win, mark;
	printf("please input your mark: ");
	scanf("%d", &mark);
	if (mark >= 100) {
		printf("error,please input a correct mark: ");
		scanf("%d", &mark);
	}
	printf("please input whether you join the contest or not\n");
	printf("(0-never join; 1-1st prize;2-2nd prize;3-3rd prize;4-join without prize):\n");
	scanf("%d", &win);
	switch (win) {
		case 0:
			break;
		case 1:
			mark = mark + 30;
			break;
		case 2:
			mark = mark + 20;
			break;
		case 3:
			mark = mark + 10;
			break;
		case 4:
			mark = mark + 5;
	}
	if (mark > 100)
		mark = 100;
	printf("your mark is %d", mark);
}
