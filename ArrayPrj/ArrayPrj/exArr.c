#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main(void)
{
	int a[SIZE];
	int b[SIZE] = { 0 };
	int c[SIZE];

	int score[SIZE];

	// 반복문을 사용한 배열 초기화
	for (int i = 0; i < SIZE; i++)
	{
		a[i] = i + 1;
		c[i] = a[i];
		printf("a[%d] = %d\n", i, a[i]);
		printf("b[%d] = %d\n", i, b[i]);
	}

	for (int i = 0; i < SIZE; i++)
	{
		printf("%d번째 학생의 점수는?\n", i + 1);
		scanf("%d", &score[i]);
	}

	// 배열 생성 및 초기화
	int num[] = { 1, 2, 3 };

	// 배열을 생성 할 때 초기화 한 배열은 size 를 구할때 sizeof(arrayName) / sizeof(arrayName[1]) 을 하면 배열의 크기가 나온다.
	for (int i = 0; i < sizeof(num) / sizeof(num[1]); i++)
	{
		printf("num[%d] = %d\n", i, num[i]);
	}

	for (int i = 0; i < sizeof(a) / sizeof(a[1]); i++)
	{
		if (a[i] != c[i])
		{
			printf("a[%d] 와 c[%d] 는 다름", a[i], c[i]);
			break;
		}
	}
	printf("a[] 와 c[] 는 같음");

	return 0;
}