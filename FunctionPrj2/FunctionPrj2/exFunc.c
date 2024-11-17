#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// 함수의 선언
void printLine(char c);

int main(void)
{
	// 함수의 호출
	printLine("*");

	int a = 5;
	int b = -5;
	int result_a = abs(a);
	int result_b = abs(b);
	double result_pow = pow(a, b);
	double result_sqrt = sqrt(a);

	printf("%d의 절대값 = %3d\n", a, result_a);
	printf("%d의 절대값 = %3d\n", b, result_b);
	printf("%5d의 %3d승 = %5.0f\n", a, b, result_pow);
	printf("%5d의 제곱근 = %5.0f\n", a, b, result_sqrt);

	for (int i = 0; i <= 5; i++)
		printf("%d회 난수 = %5d\n", i, (rand() % 10) + 1);

	return 0;
}

// 함수의 정의
void printLine(char c)
{
	for (int i = 0; i < 40; i++)
		printf("%c", c);
	printf("\n");
}