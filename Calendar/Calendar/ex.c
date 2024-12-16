#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int zeller(int year, int month);
int leap_year(int year);
void print_calendar(int year, int month);

int main(void)
{
	int year, month;

	printf("년도를 입력해주세요.\n");
	scanf("%d", &year);

	printf("월을 입력해주세요.\n");
	scanf("%d", &month);

	print_calendar(year, month);
	printf("반복문을 이용하여, 올해 달력을 예쁘게 출력하는 프로그램을 만들고 이를 보고서 형태로 작성하시오.\n");
	printf("이성현 2024-12-16");
}

// 첫번째 요일을 계산하는 함수
int zeller(int year, int month)
{
	if (month == 1 || month == 2) {
		month += 12;
		year -= 1;
	}

	int first = year / 100;	// 연도의 앞 두자리
	int last = year % 100;	// 연도의 마지막 두자리

	// zeller 공식
	int day = (1 + (13 * (month + 1)) / 5 + last + last / 4 + first / 4 - 2 * first) % 7;

	if (day < 0)
		day += 7;

	return (day + 6) % 7;	// zeller 공식 요일을 0 = 일요일로 바꾸기
}

// 윤년을 계산하는 함수
int leap_year(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// 달력을 출력하는 함수
void print_calendar(int year, int month)
{
	const int month_days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };	// 기본 월 일수
	const char* days[] = { "일", "월", "화", "수", "목", "금", "토" };

	int month_days_input = month_days[month];	// 입력된 월의 일수를 넣어줌
	if (month == 2 && leap_year(year))		// 해당 년도가 윤년인지 확인하고 처리
		month_days_input = 29;

	int first_day = zeller(year, month);	// 첫번째 요일을 구함

	printf("%15d년 %d월\n", year, month);
	printf(" 일  월  화  수  목  금  토\n");

	for (int i = 0; i < first_day; i++)		// 첫번째 요일이 나올때 까지 빈칸 출력
		printf("    ");

	for (int day = 1; day <= month_days_input; day++) {
		printf("%3d ", day);

		// 토요일이면 다음줄로 이동
		if ((first_day + day) % 7 == 0)
			printf("\n");
	}
	printf("\n");
}