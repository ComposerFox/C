// ���� ���� n�� �Է� �޾� 1 ~ n������ ��
// ���̵�� : 1 ~ n������ �� = 1 - (n - 1)�� �� + n
// 1 ~ 5�� �� = 1 ~ 4������ �� + 5
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int n);

int main(void)
{
	int n;		// �Է¹��� ����
	int result;	// ����� ���� ����

	printf("���� �Է� : ");
	scanf("%d", &n);

	result = sum(n);
	printf("1 ~ %d�� �� = %d", n, result);

	return 0;
}

int sum(int n)
{
	if (n == 1)
		return 1;
	else
	{
		return n + sum(n - 1);
	}
}