// switch 문 예제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int n;

	printf("정수 입력 : (1 ~ 3)");
	scanf("%d", &n);

	switch (n) {
		case 1 : printf("1번\n");
				 break;
		case 2 : printf("2번\n");
				 break;
		case 3 : printf("3번\n");
				 break;
		default: printf("없는 번호 입니다.\n");
	}

	return 0;
}