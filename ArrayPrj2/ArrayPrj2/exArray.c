#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
#include <stdio.h>

// 함수 선언
void inArr(int a[]);
void prtArr(int a[]);
void selectSort(int a[]);
int biSearch(int a[], int key);

int main(void)
{
	int i, data[SIZE], key;

	// 배열 초기화 함수 호출
	inArr(data[SIZE]);

	// 배열 출력
	printf("정렬 전\n");
	prtArr(data[SIZE]);
	printf("정렬 후\n");
	prtArr(data[SIZE]);

	printf("찾을 숫자는?");
	scanf("%d", &key);
	int n = biSearch(data, key);
	if (n == -1)
		printf("찾는 숫자 %d 는 없습니다.\n", key);
	else
		printf("찾는 숫자 %d 는 %d번째에 있습니다.\n", key);

	return 0;
}

// 함수 정의
void inArr(int a[])
{
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d번째 정수 : ", i);
		scanf("%d", &a[i]);
	}
}

void prtArr(int a[])
{
	for (int i = 0; i < SIZE; i++)
		printf("data[%2d] = %3d\n", i, a[i]);
}

// 선택 정령 함수 정의
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