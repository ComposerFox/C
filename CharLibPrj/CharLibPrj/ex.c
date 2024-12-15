#include <stdio.h>
#include <ctype.h>	// 문자열 타입 라이브러리
#include <string.h>	// 문자열 라이브러리

int main(void)
{
	int c;

	while ((c = getchar()) != EOF)	// 입력되는 값을 넣어줌
	{
		if (islower(c))			// 문자열이 소문자인지 알려줌
			c = toupper(c);		// 문자열을 대문자로 바꿔줌
		else if (isupper(c))	// 문자열이 대문자인지 알려줌
			putchar(c);			// 문자열의 값을 출력해줌
	}

	char s1[10] = "world";
	char* s2 = "world";

	printf("%d", strlen(s1));		// 문자열의 길이값을 알려줌
	printf("%d", strlen(s2));		// 포인터의 길이값을 알려줌
	printf("%d", strlen("hello"));	// 문자열 상수의 길이값을 알려줌

	char d[20] = "hello";
	
	strcpy(d, s1);					// s1의 문자열을 d의 값을 초기화 후 d에 복사함
	printf("src = %s\n", s1);
	printf("dst = %d\n", d);

	strcat(d, s1);					// s1의 문자열을 d에 붙혀넣음
	printf("src = %s\n", s1);
	printf("dst = %d\n", d);

	if (strcmp(d, s1) == 0)			// 배열의 값을 비교해서 동일한 배열인지 다른 배열인지 알려줌
		printf("동일한 배열\n");
	else
		printf("다른 배열\n");

	char a1[10] = "100";
	char a2[10] = "12.9";
	int num1;
	double num2, result;

	num1 = atoi(a1);				// 문자열을 정수로 변환해줌
	num2 = atof(s2);				// 문자열을 실수로 변환해줌
	result = num1 + num2;

	printf("%d + %f = %.2f\n", num1, num2, result);

	int i;
	char menu[5][10] =
	{
		"init",
		"open",
		"close",
		"read",
		"write"
	};

	for (int i = 0; i < 5; i++)
		printf("%d번째 메뉴 : %s\n", i + 1, menu[i]);

	char t1[30] = "The Little Prince";
	char* ptr = strtok(t1, " ");	// 문자열을 기준문자를 찾아서 그 문자를 기준으로 나눠줌

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, " ");
	}

	return 0;
}