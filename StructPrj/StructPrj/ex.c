#include <stdio.h>

// 날짜 구조체 선언
// 구조체 안에 구조체를 선언하는 경우에는 안에 들어가는 구조체를 먼저 선언해 두어야 한다
struct date {
	int year;
	int month;
	int day;
};
// 학생 구조체 선언
struct student {
	int num;
	char name[20];
	struct date birth;	// 구조체 안에 구조체 선언
	double grade;
};
// 좌표 구조체 선언
struct point {
	int x;
	int y;
};
// 공용체 선언
union example {	// 변수를 여러개 선언해도 4byte 만 메모리에 잡힌다
	char c;
	int i;
	int j;
	int k;
};
// 열거형 선언
enum days {SUN, MON, TUE, WED, THU, FRI, SAT};	// 열거된 순서대로 값이 정해진다.

int equal(struct student *p3, struct student *p4);
struct student create();

int main(void)
{
	struct student s1, s3;	// 구조체 변수 선언
	s1.num = 20;
	strcpy(s1.name, "happy");
	s1.grade = 4.3;
	printf("%d, %s, %.2f\n", s1.num, s1.name, s1.grade);

	struct student s2 = { 20, "kim", 4.3 };	// 구조체 변수 선언과 동시에 초기화
	printf("%d, %s, %.2f\n", s2.num, s2.name, s2.grade);

	// 구조체 복사
	s3.num = s1.num;
	strcpy(s3.name, s1.name);
	s3.grade = s1.grade;

	// 구조체 안에 구조체 변수
	s1.birth.year = 2000;
	s1.birth.month = 7;
	s1.birth.day = 7;

	printf("%d, %d, %d\n", s1.birth.year, s1.birth.month, s1.birth.day);

	struct point p1 = { 10, 20 };
	struct point p2 = { 20, 40 };

	// p1 구조체의 값을 p2에 복사
	p2 = p1;

	// if (p2 == p1) 의 식으로 구조체를 직접적으로 비교하는 것은 불가능하다
	if ((p2.x == p1.x) && (p2.y == p1.y))
		printf("같음\n");
	else
		printf("다름\n");



	struct student* p;
	p = &s1;
	printf("%d, %s, %.2f\n", (*p).num, (*p).name, (*p).grade);
	printf("%d, %s, %.2f\n", p->num, p->name, p->grade);

	struct student *p3, *p4;
	p3 = &s1;
	p4 = &s2;

	struct student s5 = create();
	printf("%d, %s, %.2f\n", s5.num, s5.name, s5.grade);

	// 공용체 초기화
	// 메모리가 같기 때문에 하나씩만 초기화 가능
	union example e = { 'a' };

	// 열거형 초기화
	enum days today;
	today = TUE;

	return 0;
}

int equal(struct student *p3, struct student *p4)
{
	if (p3->num == p4->num)
		return 1;
	else
		return 0;
}

struct student create() 
{
	struct student s;
	s.num = 3;
	strcpy(s.name, "kim");
	s.grade = 3.5;

	return s;
}