// 양의 정수 n을 입력 받아 1 ~ n까지의 합
// 아이디어 : 1 ~ n까지의 합 = 1 - (n - 1)의 합 + n
// 1 ~ 5의 합 = 1 ~ 4까지의 합 + 5
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int n);

int main(void)
{
	int n;		// 입력받을 정수
	int result;	// 결과를 받을 변수

	printf("정수 입력 : ");
	scanf("%d", &n);

	result = sum(n);
	printf("1 ~ %d의 합 = %d", n, result);

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