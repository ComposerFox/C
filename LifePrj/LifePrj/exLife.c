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
		printf("��� �� : %d\n", tmp);
	}
	printf("��� �� : %d\n", tmp);

	func();

	printf("�Լ��� ����Ƚ�� \t �Լ��� ������\n");
	staticFunc();
	staticFunc();
	staticFunc();

	int n;
	printf("���� �Է� : ");
	scanf("%d", &n);
	printf("%d! = ", n);
	factorial(n);

	return 0;
}

void func(void)
{
	auto int tmp = 5;
	printf("func() �Լ��� : %d\n", tmp);
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