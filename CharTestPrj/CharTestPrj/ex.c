// 문자열 초기화
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main(void)
{
	char ch = 'a';	// 문자형 변수 초기화
	char a[4] = { 'a', 'b', 'c', '\0' };	// 문자 배열 초기화 ( '\0' => 문자의 끝을 뜻함(NULL) )
	char b[4] = "abc";	// \0 은 생략해도 자동으로 들어간다
	char c[] = "abcdefg";	// 배열의 사이즈는 생략이 불가능하지만 선언과 동시에 초기화 할때는 생략이 가능하다

	printf("a의 크기 = %d, 내용 = %s\n", sizeof(a), a);
	printf("a의 크기 = %d, 내용 = %s\n", sizeof(b), b);
	printf("a의 크기 = %d, 내용 = %s\n", sizeof(c), c);

	char str1[4] = "You";
	char str2[4] = { 'a', 'r', 'e' };
	char str3[] = "the best";

	printf("%s %s %s\n", str1, str2, str3);

	char str1_1[4];
	char str1_2[4];
	int i;

	for (i = 0; i < str1[i] != '\0'; i++)
		str1_1[i] = str1[i];
	str1_1[i] = '\0';	// 문자 배열의 마지막에는 Null 이 들어가야 한다

	strcpy(str1_2, str1);	// 자동으로 오른쪽의 배열의 값을 왼쪽 배열에 복사해서 넣어준다

	printf("원본 = %s\n", str1);
	printf("사본 = %s\n", str1_1);
	printf("strcpy = %s\n", str1_2);

	int ch2;

	printf("한 문자씩 입력하세요(getchar() 종료 : Ctrl + Z)");
	while ( (ch2 = getchar()) != EOF )	// getchar() => 읽는데 성공했으면 문자열을 반환하고 실패했으면 EOF 를 출력한다
		putchar(ch2);	// 버퍼를 사용한다 (버퍼는 저장하는 개념)

	printf("한 문자씩 입력하세요(_getch() 종료 : 'q')");
	while ((ch2 = _getch()) != 'q')	// getchar() => 읽는데 성공했으면 문자열을 반환하고 실패했으면 EOF 를 출력한다
		putchar(ch2);	// 버퍼를 사용하지 않는다

	char name[20];

	printf("이름 : ");
	gets_s(name, sizeof(name));	// gets_s() => 왼쪽에 넣을 주소값을 넣고 오른쪽에는 사이즈를 넣어준다 (scanf 처럼 입력을 받아서 넣어줌)
	printf(name);

	return 0;
}