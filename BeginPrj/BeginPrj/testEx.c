// printf() �� scanf() ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	printf("1 : Hello World");
	printf("2 : Hello World\n");
	printf("3 : Hello World C programming \n");
	printf("4 : Hello World \n C programming \n");

	printf("%d", 1 + 2);
	printf("\n");
	printf("%d", 3 / 2);
	printf("\n");
	printf("%f", 3 / 2.0);

	printf("\n");
	printf("%d %d", 1, 2);
	printf("\n");
	printf("%8d \n", 123);
	printf("%08d \n", 123);
	printf("%f \n", 12.34567);
	printf("%.2f \n", 12.34567);
	printf("%8.2f \n", 12.34567);

	int iData = 0;

	printf("������ �Է����ּ���.");
	scanf("%d", &iData);
	printf("�Է��� ���� : %d", iData);

	return 0;
}