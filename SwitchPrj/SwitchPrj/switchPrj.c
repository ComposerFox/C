// switch �� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int n;

	printf("���� �Է� : (1 ~ 3)");
	scanf("%d", &n);

	switch (n) {
		case 1 : printf("1��\n");
				 break;
		case 2 : printf("2��\n");
				 break;
		case 3 : printf("3��\n");
				 break;
		default: printf("���� ��ȣ �Դϴ�.\n");
	}

	return 0;
}