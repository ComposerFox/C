#include <stdio.h>

#define SIZE 5

void swap(int x, int y);
void swap2(int* px, int* py);

int main(void)
{
	char* pc = (char*)10000;
	int* pi = (int*)10000;
	double* pd = (double*)10000;

	printf("���� �� \n\n");
	printf("pc = %d, pi = %d, pd = %d, \n\n", pc, pi, pd);

	pc++;
	pi++;
	pd++;
	printf("���� �� \n\n");
	printf("pc = %d, pi = %d, pd = %d, \n\n", pc, pi, pd);
	printf("2���� �� \n\n");
	printf("pc = %d, pi = %d, pd = %d, \n\n", pc + 2, pi + 2, pd + 2);

	int i = 10;
	pi = &i;

	printf("i = %d, pi = %d \n\n", i, pi);
	// �����Ͱ� ����Ű�� �ּҰ��� �������� ������
	(*pi)++;
	printf("i = %d, pi = %d \n\n", i, pi);
	// �����Ͱ� ����Ű�� �ּҰ��� ������
	*pi++;
	printf("i = %d, pi = %d \n\n", i, pi);

	int a = 10, b = 50;
	swap(a, b);	// a, b �� ���� �����ؼ� �Ѱ���
	printf("�����͸� ������� ���� x = %d, y = %d \n", a, b);
	swap2(&a, &b);	// a, b �� �ּҰ��� �����ؼ� �Ѱ���
	printf("�����͸� ����� x = %d, y = %d \n", a, b);

	int arr[] = { 1, 2, 3, 4, 5 };
	// arr[] �� �ּҰ��� arrP �� ������ ������ �־���
	int* arrP = arr;

	// �ΰ��� ���� ����
	for (i = 0; i < SIZE; i++)
	{
		printf("arr[%d] = %d \t", i, arr[i]);
		printf("arrP[%d] = %d \n", i, arrP[i]);
	}
	printf("\n\n");

	// ������ ������ ������ �ּҰ��� ������ �ֱ⶧���� ������ ���� �ٲ�
	for (i = 0; i < SIZE; i++)
		arrP[i] = 10 * i;
	
	for (i = 0; i < SIZE; i++)
	{
		printf("arr[%d] = %d \t", i, arr[i]);
		printf("arrP[%d] = %d \n", i, arrP[i]);
	}

	return 0;
}

// �����͸� ������� ������ ������ ���� �ٲܼ� ���� �ش��ϴ� �������� ���� ��ȿ��
void swap(int x, int y)
{
	int tmp;

	tmp = x;
	x = y;
	y = tmp;
}

void swap2(int* px, int* py)
{
	int tmp;

	tmp = *px;
	*px = *py;
	*py = tmp;
}