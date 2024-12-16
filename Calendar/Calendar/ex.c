#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int zeller(int year, int month);
int leap_year(int year);
void print_calendar(int year, int month);

int main(void)
{
	int year, month;

	printf("�⵵�� �Է����ּ���.\n");
	scanf("%d", &year);

	printf("���� �Է����ּ���.\n");
	scanf("%d", &month);

	print_calendar(year, month);
	printf("�ݺ����� �̿��Ͽ�, ���� �޷��� ���ڰ� ����ϴ� ���α׷��� ����� �̸� ���� ���·� �ۼ��Ͻÿ�.\n");
	printf("�̼��� 2024-12-16");
}

// ù��° ������ ����ϴ� �Լ�
int zeller(int year, int month)
{
	if (month == 1 || month == 2) {
		month += 12;
		year -= 1;
	}

	int first = year / 100;	// ������ �� ���ڸ�
	int last = year % 100;	// ������ ������ ���ڸ�

	// zeller ����
	int day = (1 + (13 * (month + 1)) / 5 + last + last / 4 + first / 4 - 2 * first) % 7;

	if (day < 0)
		day += 7;

	return (day + 6) % 7;	// zeller ���� ������ 0 = �Ͽ��Ϸ� �ٲٱ�
}

// ������ ����ϴ� �Լ�
int leap_year(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// �޷��� ����ϴ� �Լ�
void print_calendar(int year, int month)
{
	const int month_days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };	// �⺻ �� �ϼ�
	const char* days[] = { "��", "��", "ȭ", "��", "��", "��", "��" };

	int month_days_input = month_days[month];	// �Էµ� ���� �ϼ��� �־���
	if (month == 2 && leap_year(year))		// �ش� �⵵�� �������� Ȯ���ϰ� ó��
		month_days_input = 29;

	int first_day = zeller(year, month);	// ù��° ������ ����

	printf("%15d�� %d��\n", year, month);
	printf(" ��  ��  ȭ  ��  ��  ��  ��\n");

	for (int i = 0; i < first_day; i++)		// ù��° ������ ���ö� ���� ��ĭ ���
		printf("    ");

	for (int day = 1; day <= month_days_input; day++) {
		printf("%3d ", day);

		// ������̸� �����ٷ� �̵�
		if ((first_day + day) % 7 == 0)
			printf("\n");
	}
	printf("\n");
}