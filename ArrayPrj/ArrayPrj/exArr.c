#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main(void)
{
	int a[SIZE];
	int b[SIZE] = { 0 };
	int c[SIZE];

	int score[SIZE];

	// �ݺ����� ����� �迭 �ʱ�ȭ
	for (int i = 0; i < SIZE; i++)
	{
		a[i] = i + 1;
		c[i] = a[i];
		printf("a[%d] = %d\n", i, a[i]);
		printf("b[%d] = %d\n", i, b[i]);
	}

	for (int i = 0; i < SIZE; i++)
	{
		printf("%d��° �л��� ������?\n", i + 1);
		scanf("%d", &score[i]);
	}

	// �迭 ���� �� �ʱ�ȭ
	int num[] = { 1, 2, 3 };

	// �迭�� ���� �� �� �ʱ�ȭ �� �迭�� size �� ���Ҷ� sizeof(arrayName) / sizeof(arrayName[1]) �� �ϸ� �迭�� ũ�Ⱑ ���´�.
	for (int i = 0; i < sizeof(num) / sizeof(num[1]); i++)
	{
		printf("num[%d] = %d\n", i, num[i]);
	}

	for (int i = 0; i < sizeof(a) / sizeof(a[1]); i++)
	{
		if (a[i] != c[i])
		{
			printf("a[%d] �� c[%d] �� �ٸ�", a[i], c[i]);
			break;
		}
	}
	printf("a[] �� c[] �� ����");

	return 0;
}