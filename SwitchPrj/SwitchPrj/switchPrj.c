// switch �� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int n;

	printf("���� �Է� : (1 ~ 3)");
	scanf("%d", &n);

	switch (n) {
	case 1: printf("1��\n");
		break;
	case 2: printf("2��\n");
		break;
	case 3: printf("3��\n");
		break;
	default: printf("���� ��ȣ �Դϴ�.\n");
	}

	int menuIf;

	printf("���� �޴��� ��ȣ�� �����ϼ���.(if)\n");
	printf("1. ����\n");
	printf("2. ����\n");
	printf("3. ����\n");
	printf("4. ����\n");
	printf("5. ��\n");
	scanf("%d", &menuIf);

	if (menuIf == 1)
		printf("���� ����\n");
	else if (menuIf == 2)
		printf("���� ����\n");
	else if (menuIf == 3)
		printf("���� ����\n");
	else if (menuIf == 4)
		printf("���� ����\n");
	else if (menuIf == 5)
		printf("�� ����\n");
	else
		printf("���� ��ȣ �Դϴ�.\n");

	int menuSwitch;

	printf("���� �޴��� ��ȣ�� �����ϼ���.(switch)\n");
	printf("1. ����\n");
	printf("2. ����\n");
	printf("3. ����\n");
	printf("4. ����\n");
	printf("5. ��\n");
	scanf("%d", &menuSwitch);

	switch (menuSwitch) {
	case 1: printf("���� ����\n");
		break;
	case 2: printf("���� ����\n");
		break;
	case 3: printf("���� ����\n");
		break;
	case 4: printf("���� ����\n");
		break;
	case 5: printf("�� ����\n");
		break;
	default: printf("���� ��ȣ �Դϴ�.\n");
	}

	int numberIf;

	printf("������ �Է��ϼ���.(if)\n");
	scanf("%d", &numberIf);

	if (numberIf % 2 == 0)
		printf("%d ��(��) ¦���Դϴ�.\n", numberIf);
	else if (numberIf % 2 == 1)
		printf("%d ��(��) Ȧ���Դϴ�.\n", numberIf);

	int numberSwitch;

	printf("������ �Է��ϼ���.(switch)\n");
	scanf("%d", &numberSwitch);

	switch (numberSwitch % 2) {
	case 0 : printf("%d ��(��) ¦���Դϴ�\n.", numberSwitch);
			 break;
	case 1 : printf("%d ��(��) Ȧ���Դϴ�.\n", numberSwitch);
			 break;
	}

	return 0;
}