#define _CRT_SECURE_NO_WARNINGS
#define SEC_PER_MINUTE 60
#include <stdio.h>

int main() {
	int input, minute, second;

	printf("초단위 입력>>");
	scanf("%d", &input);

	minute = input / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;

	printf("%d초는 %d분 %d초입니다.\n", input, minute, second);

	int x, y;
	x = 1;
	printf("x + 1:%d\n", x + 1);

	int i, j;
	
	printf("i, j >>");
	scanf("%d%d", &i, &j);

	printf("큰수:%d\n", (i > j) ? i : j);
	printf("작은수:%d\n", (i < j) ? i : j);

	return 0;
}