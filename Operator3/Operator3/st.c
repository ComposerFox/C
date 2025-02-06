#define _CRT_SECURE_NO_WARNINGS
#include  <stdio.h>

void main() {
	// 윤년 년도 확인 프로그램
	int year, result;

	printf("year >>");
	scanf("%d", &year);

	result = ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));

	printf("result = %d\n", result);

	if (result == 1)
		printf("윤년입니다.\n");
	else
		printf("평년입니다.\n");

	// 비트 연산자
	int x = 9;
	int y = 10;
	printf("AND = %08x\n", x & y);
	printf("OR = %08x\n", x | y);
	printf("XOR = %08x\n", x ^ y);
	printf("not = %08x\n", ~x);

	// 형변환
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

	// 입력받은 값 형변환
	int num1, num2;
	printf("두수를 입력 >>");
	scanf("%d%d", &num1, &num2);

	int hap = num1 + num2;
	int avg = (int)(hap / 2);

	printf("합 : %d\n", hap);
	printf("평균 : %d\n", avg);
}