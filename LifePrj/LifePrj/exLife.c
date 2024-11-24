#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func(void);
void staticFunc();
long factorial(int n);

int main(void)
{
	int tmp = 10;

	{
		int tmp = 50;
		printf("블록 안 : %d\n", tmp);
	}
	printf("블록 밖 : %d\n", tmp);

	func();

	printf("함수의 실행횟수 \t 함수의 변수값\n");
	staticFunc();
	staticFunc();
	staticFunc();

	int n;
	printf("정수 입력 : ");
	scanf("%d", &n);
	printf("%d! = ", n);
	factorial(n);

	return 0;
}

void func(void)
{
	auto int tmp = 5;
	printf("func() 함수안 : %d\n", tmp);
}

void staticFunc()
{
	static int cntRunFunc = 0;
	int cntLocal = 0;
	printf("%10d : \t", ++cntRunFunc);
	printf("%10d : \n", ++cntLocal);
}

long factorial(int n)
{
	printf("%d", n);
	if (n == 1)
		return 1;
	else
	{
		printf(" * ");
		return n * factorial(n - 1);
	}
}