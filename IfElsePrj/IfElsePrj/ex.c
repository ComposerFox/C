#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int big, small;
	int temp;

	printf("ù��° �� : ");
	scanf("%d", &big);
	
	printf("�ι�° �� : ");
	scanf("%d", &small);

	if (big < small)
	{
		temp = big;
		big = small;
		small = temp;
	}

	int score;

	printf("���� �Է� : ");
	scanf("%d", &score);

	if (score >= 80)
		if (score >= 90)
			printf("A����\n");
		else
			printf("B����\n");
	else
		printf("F����\n");

	int age, local, fee;

	printf("����� ���̴�?");
	scanf("%d", &age);

	printf("���� �ֹ��̽Ű���?");
	scanf("%d", &local);

	fee = 10000;

	if (age >= 60)
		fee -= 5000;
	if (local == 1)
		fee -= 5000;

	printf("��� = %d\n", fee);

	return 0;
}