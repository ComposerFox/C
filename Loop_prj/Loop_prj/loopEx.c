#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 5; i++)
	{
		printf("hello world\n");
	}

	int dan = 2, j = 0;
	while (j < 10)
	{
		printf("%3d * %d = %2d \n", dan, j, dan*j);
		j++;
	}

	int z = 1;
	while (z < 10)
	{
		printf("%3d ==> %3d \n", z, z * z);
		z++;
	}

	int start = 1;
	int end = 100;
	int sum = 0;
	int y = start;

	while (y <= end)
	{
		sum += y;
		y++;
	}
	printf("%3d ~ %3d의 합 = %d \n", start, end, sum);

	int inData = 0;
	sum = 0;

	printf("정수 입력(종료 : 999");
	scanf("%d", &inData);

	while (inData != 999)
	{
		sum += inData;
		printf("정수 입력(종료 : 999");
		scanf("%d", &inData);
	}

	printf("합은 %d\n", sum);

	start = 0;
	end = 1000;
	sum = 0;
	y = start;

	while (y <= end)
	{
		sum += y;
		if (sum > 5000)
			break;
		y++;
	}
	printf("%d ~ %d의 합 = %d\n", start, y, sum);

	start = 1;
	end = 10;
	sum = 0;
	y = start;

	while (y <= end)
	{
		if (y % 3 == 0)
		{
			y++;
			continue;
		}
		sum += y;
		y++;
	}
	printf("%d ~ %d의 합(3의 배수 제외) = %d\n", start, y, sum);

	return 0;
}