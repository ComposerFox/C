#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int big, small;
	int temp;

	printf("첫번째 수 : ");
	scanf("%d", &big);
	
	printf("두번째 수 : ");
	scanf("%d", &small);

	if (big < small)
	{
		temp = big;
		big = small;
		small = temp;
	}

	int score;

	printf("점수 입력 : ");
	scanf("%d", &score);

	if (score >= 80)
		if (score >= 90)
			printf("A학점\n");
		else
			printf("B학점\n");
	else
		printf("F학점\n");

	int age, local, fee;

	printf("당신의 나이는?");
	scanf("%d", &age);

	printf("지역 주민이신가요?");
	scanf("%d", &local);

	fee = 10000;

	if (age >= 60)
		fee -= 5000;
	if (local == 1)
		fee -= 5000;

	printf("요금 = %d\n", fee);

	return 0;
}