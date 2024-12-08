#include <stdio.h>

#define SIZE 5

void swap(int x, int y);
void swap2(int* px, int* py);

int main(void)
{
	char* pc = (char*)10000;
	int* pi = (int*)10000;
	double* pd = (double*)10000;

	printf("증가 전 \n\n");
	printf("pc = %d, pi = %d, pd = %d, \n\n", pc, pi, pd);

	pc++;
	pi++;
	pd++;
	printf("증가 후 \n\n");
	printf("pc = %d, pi = %d, pd = %d, \n\n", pc, pi, pd);
	printf("2증가 후 \n\n");
	printf("pc = %d, pi = %d, pd = %d, \n\n", pc + 2, pi + 2, pd + 2);

	int i = 10;
	pi = &i;

	printf("i = %d, pi = %d \n\n", i, pi);
	// 포인터가 가르키는 주소값의 변수값을 증가함
	(*pi)++;
	printf("i = %d, pi = %d \n\n", i, pi);
	// 포인터가 가르키는 주소값을 증가함
	*pi++;
	printf("i = %d, pi = %d \n\n", i, pi);

	int a = 10, b = 50;
	swap(a, b);	// a, b 의 값을 복사해서 넘겨줌
	printf("포인터를 사용하지 않음 x = %d, y = %d \n", a, b);
	swap2(&a, &b);	// a, b 의 주소값을 복사해서 넘겨줌
	printf("포인터를 사용함 x = %d, y = %d \n", a, b);

	int arr[] = { 1, 2, 3, 4, 5 };
	// arr[] 의 주소값을 arrP 의 포인터 변수에 넣어줌
	int* arrP = arr;

	// 두개의 값은 같음
	for (i = 0; i < SIZE; i++)
	{
		printf("arr[%d] = %d \t", i, arr[i]);
		printf("arrP[%d] = %d \n", i, arrP[i]);
	}
	printf("\n\n");

	// 포인터 변수는 원본의 주소값을 가지고 있기때문에 원본의 값이 바뀜
	for (i = 0; i < SIZE; i++)
		arrP[i] = 10 * i;
	
	for (i = 0; i < SIZE; i++)
	{
		printf("arr[%d] = %d \t", i, arr[i]);
		printf("arrP[%d] = %d \n", i, arrP[i]);
	}

	return 0;
}

// 포인터를 사용하지 않으면 원본의 값은 바꿀수 없고 해당하는 블럭에서만 값이 유효함
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