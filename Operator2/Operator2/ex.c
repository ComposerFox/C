#include <stdio.h>

int main(void)
{
	int x, y;

	x = -10;
	// ���׿����ڷ� -- => + �� �ȴ� => x = 10
	y = -x;

	printf("y = %d \n", y);

	int a = 10, b = 10;

	int c = ++a;
	int d = --b;

	// ���������� ���� ����ϱ� ���� ������ �����Ѵ�.
	printf("�������� ��� \n");
	printf("a = %d, b = %d \n", a, b);
	printf("c = %d, d = %d \n", c, d);

	a = 10, b = 10;

	c = a++;
	d = b--;
	
	// ���������� ���� ����� �Ŀ� ������ �Ѵ�.
	printf("�������� ��� \n");
	printf("a = %d, b = %d \n", a, b);
	printf("c = %d, d = %d \n", c, d);

	return 0;
}