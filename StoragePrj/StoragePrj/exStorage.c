#include <stdio.h>

int tmp = 1;	// ��������

void funcTmp();	// �Լ��� ����

int main(void)
{
	int i;	// ��������

	for (i = 0; i < 5; i++)
	{
		printf("%d in main()\n", tmp);
		tmp++;
	}
	printf("%d in main()", tmp);
	funcTmp();	// �Լ��� ȣ��

	return 0;
}

void funcTmp()	// �Լ��� ����
{
	printf("%d in funcTmp()\n", tmp);
}