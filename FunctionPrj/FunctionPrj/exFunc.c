#include <stdio.h>

void sort_asc1(int a, int b)
{
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
}

void sort_asc2(int* a, int* b)
{
	if (*a > *b)
	{
		int temp = *a;
		*a = *b;
		*b = temp;
	}
}

int main(void)
{
	int a = 7;
	int b = 5;

	sort_asc1(a, b);
	printf("%d <= %d \n", a, b);
	printf("\n====================\n");
	sort_asc2(&a, &b);
	printf("%d <= %d \n", a, b);

	return 0;
}