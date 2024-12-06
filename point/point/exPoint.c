#include <stdio.h>

int main(void)
{
	int i = 0;
	// 포인터 선언
	// 포인터의 타입과 포인터가 가리키는 변수의 타입은 동일해야 한다
	int* p = NULL;

	// 포인터에 변수 i 의 주소를 넣음
	p = &i;

	printf("%d\n", i);
	printf("%d\n", &i);
	// 포인터 안에 들어있는 주소값을 출력함
	printf("%d\n", p);
	// 포인터 안에 들어있는 주소의 변수 값을 출력함
	printf("%d\n", *p);

	// 포인터 안에 들어있는 주소의 변수 값을 변경함
	*p = 100;
	printf("%d\n", i);
	printf("%d\n", *p);

	// 변수는 타입에 따라서 사이즈가 다르지만
	// 포인터는 타입이 달라도 사이즈는 4byte 이다

	return 0;
}