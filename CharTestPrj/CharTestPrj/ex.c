// ���ڿ� �ʱ�ȭ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main(void)
{
	char ch = 'a';	// ������ ���� �ʱ�ȭ
	char a[4] = { 'a', 'b', 'c', '\0' };	// ���� �迭 �ʱ�ȭ ( '\0' => ������ ���� ����(NULL) )
	char b[4] = "abc";	// \0 �� �����ص� �ڵ����� ����
	char c[] = "abcdefg";	// �迭�� ������� ������ �Ұ��������� ����� ���ÿ� �ʱ�ȭ �Ҷ��� ������ �����ϴ�

	printf("a�� ũ�� = %d, ���� = %s\n", sizeof(a), a);
	printf("a�� ũ�� = %d, ���� = %s\n", sizeof(b), b);
	printf("a�� ũ�� = %d, ���� = %s\n", sizeof(c), c);

	char str1[4] = "You";
	char str2[4] = { 'a', 'r', 'e' };
	char str3[] = "the best";

	printf("%s %s %s\n", str1, str2, str3);

	char str1_1[4];
	char str1_2[4];
	int i;

	for (i = 0; i < str1[i] != '\0'; i++)
		str1_1[i] = str1[i];
	str1_1[i] = '\0';	// ���� �迭�� ���������� Null �� ���� �Ѵ�

	strcpy(str1_2, str1);	// �ڵ����� �������� �迭�� ���� ���� �迭�� �����ؼ� �־��ش�

	printf("���� = %s\n", str1);
	printf("�纻 = %s\n", str1_1);
	printf("strcpy = %s\n", str1_2);

	int ch2;

	printf("�� ���ھ� �Է��ϼ���(getchar() ���� : Ctrl + Z)");
	while ( (ch2 = getchar()) != EOF )	// getchar() => �дµ� ���������� ���ڿ��� ��ȯ�ϰ� ���������� EOF �� ����Ѵ�
		putchar(ch2);	// ���۸� ����Ѵ� (���۴� �����ϴ� ����)

	printf("�� ���ھ� �Է��ϼ���(_getch() ���� : 'q')");
	while ((ch2 = _getch()) != 'q')	// getchar() => �дµ� ���������� ���ڿ��� ��ȯ�ϰ� ���������� EOF �� ����Ѵ�
		putchar(ch2);	// ���۸� ������� �ʴ´�

	char name[20];

	printf("�̸� : ");
	gets_s(name, sizeof(name));	// gets_s() => ���ʿ� ���� �ּҰ��� �ְ� �����ʿ��� ����� �־��ش� (scanf ó�� �Է��� �޾Ƽ� �־���)
	printf(name);

	return 0;
}