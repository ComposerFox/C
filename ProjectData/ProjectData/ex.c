#include <stdio.h>

int main(void)
{
	int x;

	printf("���� x �� ũ�� : %d\n", sizeof(x));
	printf("�� 10 �� ũ�� : %d\n", sizeof(10));
	printf("�ڷ��� int �� ũ�� : %d\n", sizeof(int));

	double d;

	printf("���� d �� ũ�� : %d\n", sizeof(d));
	printf("�� 3.14 �� ũ�� : %d\n", sizeof(3.14));
	printf("�ڷ��� double �� ũ�� : %d\n", sizeof(double));

	printf("�ڷ��� long �� ũ�� %d\n", sizeof(long));
	printf("�ڷ��� char �� ũ�� : %d\n", sizeof(char));
}