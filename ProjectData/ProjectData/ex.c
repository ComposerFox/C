#include <stdio.h>

int main(void)
{
	int x;

	printf("변수 x 의 크기 : %d\n", sizeof(x));
	printf("값 10 의 크기 : %d\n", sizeof(10));
	printf("자료형 int 의 크기 : %d\n", sizeof(int));

	double d;

	printf("변수 d 의 크기 : %d\n", sizeof(d));
	printf("값 3.14 의 크기 : %d\n", sizeof(3.14));
	printf("자료형 double 의 크기 : %d\n", sizeof(double));

	printf("자료형 long 의 크기 %d\n", sizeof(long));
	printf("자료형 char 의 크기 : %d\n", sizeof(char));
}