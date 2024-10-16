#include <stdio.h>

int main(void)
{
	int x, y;

	x = -10;
	// 단항연산자로 -- => + 가 된다 => x = 10
	y = -x;

	printf("y = %d \n", y);

	int a = 10, b = 10;

	int c = ++a;
	int d = --b;

	// 전위연산은 값을 사용하기 전에 연산을 먼저한다.
	printf("전위연산 결과 \n");
	printf("a = %d, b = %d \n", a, b);
	printf("c = %d, d = %d \n", c, d);

	a = 10, b = 10;

	c = a++;
	d = b--;
	
	// 후위연산은 값을 사용한 후에 연산을 한다.
	printf("후위연산 결과 \n");
	printf("a = %d, b = %d \n", a, b);
	printf("c = %d, d = %d \n", c, d);

	return 0;
}