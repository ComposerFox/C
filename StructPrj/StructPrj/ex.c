#include <stdio.h>

// ��¥ ����ü ����
// ����ü �ȿ� ����ü�� �����ϴ� ��쿡�� �ȿ� ���� ����ü�� ���� ������ �ξ�� �Ѵ�
struct date {
	int year;
	int month;
	int day;
};
// �л� ����ü ����
struct student {
	int num;
	char name[20];
	struct date birth;	// ����ü �ȿ� ����ü ����
	double grade;
};
// ��ǥ ����ü ����
struct point {
	int x;
	int y;
};

int main(void)
{
	struct student s1, s3;	// ����ü ���� ����
	s1.num = 20;
	strcpy(s1.name, "happy");
	s1.grade = 4.3;
	printf("%d, %s, %.2f\n", s1.num, s1.name, s1.grade);

	struct student s2 = { 20, "kim", 4.3 };	// ����ü ���� ����� ���ÿ� �ʱ�ȭ
	printf("%d, %s, %.2f\n", s2.num, s2.name, s2.grade);

	// ����ü ����
	s3.num = s1.num;
	strcpy(s3.name, s1.name);
	s3.grade = s1.grade;

	// ����ü �ȿ� ����ü ����
	s1.birth.year = 2000;
	s1.birth.month = 7;
	s1.birth.day = 7;

	printf("%d, %d, %d\n", s1.birth.year, s1.birth.month, s1.birth.day);

	struct point p1 = { 10, 20 };
	struct point p2 = { 20, 40 };

	// p1 ����ü�� ���� p2�� ����
	p2 = p1;

	// if (p2 == p1) �� ������ ����ü�� ���������� ���ϴ� ���� �Ұ����ϴ�
	if ((p2.x == p1.x) && (p2.y == p1.y))
		printf("����\n");
	else
		printf("�ٸ�\n");

	return 0;
}