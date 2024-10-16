#include <stdio.h>

int main(void)
{
	int oprand1 = 7;
	int oprand2 = 5;

	int sum = oprand1 + oprand2;
	int sub = oprand1 - oprand2;
	int mul = oprand1 * oprand2;
	double div = (double) oprand1 / oprand2;

	printf("%d + %d = %d \n", oprand1, oprand2, sum);
	printf("%d - %d = %d \n", oprand1, oprand2, sub);
	printf("%d * %d = %d \n", oprand1, oprand2, mul);
	printf("%d / %d = %f \n", oprand1, oprand2, div);

	return 0;
}