#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	printf("���ڸ� �Է��� �ּ���.");

	int num;
	scanf("%d", &num);

	if (num > 0)
		printf("%d��(��) ����Դϴ�.\n", num);
	else
		printf("%d��(��) �����Դϴ�.\n", num);

	printf("������ �Է��� �ּ���.");

	int score;
	scanf("%d", &score);

	// ���ǹ� ���� ������ �����̻��̶�� { } �ȿ� �־�� �Ѵ�.
	if (score >= 60)
	{
		printf("�����մϴ�!");
		printf("%d��(��) �հ��Դϴ�.\n", score);
	}  
	else if (score < 60)
		printf("%d��(��) ���հ��Դϴ�.\n", score);

	printf("ù��° ���� �Է����ּ���.\n");

	int x;
	scanf("%d", &x);

	printf("�ι�° ���� �Է����ּ���.\n");

	int y;
	scanf("%d", &y);

	// ���׿�����
	printf("ū�� = %d\n", (x > y) ? x : y);
	printf("������ = %d\n", (x < y) ? x : y);

	return 0;
}