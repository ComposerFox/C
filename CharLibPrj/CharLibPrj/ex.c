#include <stdio.h>
#include <ctype.h>	// ���ڿ� Ÿ�� ���̺귯��
#include <string.h>	// ���ڿ� ���̺귯��

int main(void)
{
	int c;

	while ((c = getchar()) != EOF)	// �ԷµǴ� ���� �־���
	{
		if (islower(c))			// ���ڿ��� �ҹ������� �˷���
			c = toupper(c);		// ���ڿ��� �빮�ڷ� �ٲ���
		else if (isupper(c))	// ���ڿ��� �빮������ �˷���
			putchar(c);			// ���ڿ��� ���� �������
	}

	char s1[10] = "world";
	char* s2 = "world";

	printf("%d", strlen(s1));		// ���ڿ��� ���̰��� �˷���
	printf("%d", strlen(s2));		// �������� ���̰��� �˷���
	printf("%d", strlen("hello"));	// ���ڿ� ����� ���̰��� �˷���

	char d[20] = "hello";
	
	strcpy(d, s1);					// s1�� ���ڿ��� d�� ���� �ʱ�ȭ �� d�� ������
	printf("src = %s\n", s1);
	printf("dst = %d\n", d);

	strcat(d, s1);					// s1�� ���ڿ��� d�� ��������
	printf("src = %s\n", s1);
	printf("dst = %d\n", d);

	if (strcmp(d, s1) == 0)			// �迭�� ���� ���ؼ� ������ �迭���� �ٸ� �迭���� �˷���
		printf("������ �迭\n");
	else
		printf("�ٸ� �迭\n");

	char a1[10] = "100";
	char a2[10] = "12.9";
	int num1;
	double num2, result;

	num1 = atoi(a1);				// ���ڿ��� ������ ��ȯ����
	num2 = atof(s2);				// ���ڿ��� �Ǽ��� ��ȯ����
	result = num1 + num2;

	printf("%d + %f = %.2f\n", num1, num2, result);

	int i;
	char menu[5][10] =
	{
		"init",
		"open",
		"close",
		"read",
		"write"
	};

	for (int i = 0; i < 5; i++)
		printf("%d��° �޴� : %s\n", i + 1, menu[i]);

	char t1[30] = "The Little Prince";
	char* ptr = strtok(t1, " ");	// ���ڿ��� ���ع��ڸ� ã�Ƽ� �� ���ڸ� �������� ������

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, " ");
	}

	return 0;
}