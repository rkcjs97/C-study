#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	//선택 조건문
	//int a = 3;

	//switch (a) {
	//case 0:
	//	printf("zero\n");
	//case 1:
	//	printf("one\n");
	//case 2:
	//	printf("two\n");
	//default:
	//	printf("잘못된 숫자\n");
	//}
	//return 0;

	int no;
	printf("1.자장면, 2.짬뽕, 3.설렁탕, 4.비빔밥, 5.피자, 6.스파게티");
	printf("메뉴는?");
	scanf("%d", &no);
	switch (no) {
	case 1:
	case 2:
		printf("중식");
	case 3:
	case 4:
		printf("한식");
	case 5:
	case 6:
		printf("양식");
	default:
	}
	return 0;
}