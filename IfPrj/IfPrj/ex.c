#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	printf("숫자를 입력해 주세요.");

	int num;
	scanf("%d", &num);

	if (num > 0)
		printf("%d은(는) 양수입니다.\n", num);
	else
		printf("%d은(는) 음수입니다.\n", num);

	printf("점수를 입력해 주세요.");

	int score;
	scanf("%d", &score);

	// 조건문 안의 수식이 한줄이상이라면 { } 안에 넣어야 한다.
	if (score >= 60)
	{
		printf("축하합니다!");
		printf("%d은(는) 합격입니다.\n", score);
	}  
	else if (score < 60)
		printf("%d은(는) 불합격입니다.\n", score);

	printf("첫번째 수를 입력해주세요.\n");

	int x;
	scanf("%d", &x);

	printf("두번째 수를 입력해주세요.\n");

	int y;
	scanf("%d", &y);

	// 삼항연산자
	printf("큰수 = %d\n", (x > y) ? x : y);
	printf("작은수 = %d\n", (x < y) ? x : y);

	return 0;
}