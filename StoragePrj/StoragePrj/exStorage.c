#include <stdio.h>

int tmp = 1;	// 전역변수

void funcTmp();	// 함수의 선언

int main(void)
{
	int i;	// 지역변수

	for (i = 0; i < 5; i++)
	{
		printf("%d in main()\n", tmp);
		tmp++;
	}
	printf("%d in main()", tmp);
	funcTmp();	// 함수의 호출

	return 0;
}

void funcTmp()	// 함수의 정의
{
	printf("%d in funcTmp()\n", tmp);
}