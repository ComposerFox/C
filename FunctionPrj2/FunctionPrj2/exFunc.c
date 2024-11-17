#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// �Լ��� ����
void printLine(char c);

int main(void)
{
	// �Լ��� ȣ��
	printLine("*");

	int a = 5;
	int b = -5;
	int result_a = abs(a);
	int result_b = abs(b);
	double result_pow = pow(a, b);
	double result_sqrt = sqrt(a);

	printf("%d�� ���밪 = %3d\n", a, result_a);
	printf("%d�� ���밪 = %3d\n", b, result_b);
	printf("%5d�� %3d�� = %5.0f\n", a, b, result_pow);
	printf("%5d�� ������ = %5.0f\n", a, b, result_sqrt);

	for (int i = 0; i <= 5; i++)
		printf("%dȸ ���� = %5d\n", i, (rand() % 10) + 1);

	return 0;
}

// �Լ��� ����
void printLine(char c)
{
	for (int i = 0; i < 40; i++)
		printf("%c", c);
	printf("\n");
}