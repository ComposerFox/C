// switch 문 예제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int n;

	printf("정수 입력 : (1 ~ 3)");
	scanf("%d", &n);

	switch (n) {
	case 1: printf("1번\n");
		break;
	case 2: printf("2번\n");
		break;
	case 3: printf("3번\n");
		break;
	default: printf("없는 번호 입니다.\n");
	}

	int menuIf;

	printf("간식 메뉴를 번호로 선택하세요.(if)\n");
	printf("1. 과일\n");
	printf("2. 만두\n");
	printf("3. 우유\n");
	printf("4. 과자\n");
	printf("5. 껌\n");
	scanf("%d", &menuIf);

	if (menuIf == 1)
		printf("과일 선택\n");
	else if (menuIf == 2)
		printf("만두 선택\n");
	else if (menuIf == 3)
		printf("우유 선택\n");
	else if (menuIf == 4)
		printf("과자 선택\n");
	else if (menuIf == 5)
		printf("껌 선택\n");
	else
		printf("없는 번호 입니다.\n");

	int menuSwitch;

	printf("간식 메뉴를 번호로 선택하세요.(switch)\n");
	printf("1. 과일\n");
	printf("2. 만두\n");
	printf("3. 우유\n");
	printf("4. 과자\n");
	printf("5. 껌\n");
	scanf("%d", &menuSwitch);

	switch (menuSwitch) {
	case 1: printf("과일 선택\n");
		break;
	case 2: printf("만두 선택\n");
		break;
	case 3: printf("우유 선택\n");
		break;
	case 4: printf("과자 선택\n");
		break;
	case 5: printf("껌 선택\n");
		break;
	default: printf("없는 번호 입니다.\n");
	}

	int numberIf;

	printf("정수를 입력하세요.(if)\n");
	scanf("%d", &numberIf);

	if (numberIf % 2 == 0)
		printf("%d 은(는) 짝수입니다.\n", numberIf);
	else if (numberIf % 2 == 1)
		printf("%d 은(는) 홀수입니다.\n", numberIf);

	int numberSwitch;

	printf("정수를 입력하세요.(switch)\n");
	scanf("%d", &numberSwitch);

	switch (numberSwitch % 2) {
	case 0 : printf("%d 은(는) 짝수입니다\n.", numberSwitch);
			 break;
	case 1 : printf("%d 은(는) 홀수입니다.\n", numberSwitch);
			 break;
	}

	return 0;
}