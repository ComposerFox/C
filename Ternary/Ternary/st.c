#define _CRT_SECURE_NO_WARNINGS
#define SEC_PER_MINUTE 60
#include <stdio.h>

int main() {
	int input, minute, second;

	printf("�ʴ��� �Է�>>");
	scanf("%d", &input);

	minute = input / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;

	printf("%d�ʴ� %d�� %d���Դϴ�.\n", input, minute, second);

	int x, y;
	x = 1;
	printf("x + 1:%d\n", x + 1);

	int i, j;
	
	printf("i, j >>");
	scanf("%d%d", &i, &j);

	printf("ū��:%d\n", (i > j) ? i : j);
	printf("������:%d\n", (i < j) ? i : j);

	return 0;
}