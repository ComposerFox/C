#define _CRT_SECURE_NO_WARNINGS
#include  <stdio.h>

void main() {
	// ���� �⵵ Ȯ�� ���α׷�
	int year, result;

	printf("year >>");
	scanf("%d", &year);

	result = ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));

	printf("result = %d\n", result);

	if (result == 1)
		printf("�����Դϴ�.\n");
	else
		printf("����Դϴ�.\n");

	// ��Ʈ ������
	int x = 9;
	int y = 10;
	printf("AND = %08x\n", x & y);
	printf("OR = %08x\n", x | y);
	printf("XOR = %08x\n", x ^ y);
	printf("not = %08x\n", ~x);

	// ����ȯ
	char c;
	int i;
	float f;
	c = 10000;
	i = 1.23456 + 10;
	f = 10 + 20;
	
	printf("c = %d, i = %d, f = %f\n", c, i, f);

	f = (float)i;
	i = (int)f;

	printf("f = %f, i = %d\n", f, i);

	// �Է¹��� �� ����ȯ
	int num1, num2;
	printf("�μ��� �Է� >>");
	scanf("%d%d", &num1, &num2);

	int hap = num1 + num2;
	int avg = (int)(hap / 2);

	printf("�� : %d\n", hap);
	printf("��� : %d\n", avg);
}