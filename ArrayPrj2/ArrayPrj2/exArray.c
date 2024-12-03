#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
#include <stdio.h>

// �Լ� ����
void inArr(int a[]);
void prtArr(int a[]);
void selectSort(int a[]);
int biSearch(int a[], int key);

int main(void)
{
	int i, data[SIZE], key;

	// �迭 �ʱ�ȭ �Լ� ȣ��
	inArr(data[SIZE]);

	// �迭 ���
	printf("���� ��\n");
	prtArr(data[SIZE]);
	printf("���� ��\n");
	prtArr(data[SIZE]);

	printf("ã�� ���ڴ�?");
	scanf("%d", &key);
	int n = biSearch(data, key);
	if (n == -1)
		printf("ã�� ���� %d �� �����ϴ�.\n", key);
	else
		printf("ã�� ���� %d �� %d��°�� �ֽ��ϴ�.\n", key);

	return 0;
}

// �Լ� ����
void inArr(int a[])
{
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d��° ���� : ", i);
		scanf("%d", &a[i]);
	}
}

void prtArr(int a[])
{
	for (int i = 0; i < SIZE; i++)
		printf("data[%2d] = %3d\n", i, a[i]);
}

// ���� ���� �Լ� ����
void selectSort(int a[])
{
	int i, j, minIndex, temp;

	for (i = 0; i < SIZE - 1; i++)
	{
		minIndex = i;

		for (j = i + 1; j < SIZE; j++)
		{
			if (a[minIndex] > a[j])
				minIndex = j;
		}
		temp = a[i];
		a[i] = a[minIndex];
	}
}

int biSearch(int a[], int key)
{
	int low = 0, high = SIZE - 1, middle;

	while (low <= high)
	{
		printf("[%d - %d]", low, high);
		middle = low + high / 2;

		if (key == a[middle]) return middle;
		else if (key > a[middle]) low = middle + 1;
		else high = middle - 1;
	}
	return -1;
}