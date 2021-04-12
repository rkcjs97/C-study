#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	//do~while
	
	//int a = -1;

	//do {
	//	printf("%d", a);
	//} while (a > 0);

	//char an ;
	//do {
	//	printf("뮤직을 실행합니다.");
	//	printf("뮤직을 계속 플레이 할까요(y)?: ");
	//	scanf("%c", &an);
	//	getchar();//엔터값처리
	//} 	while (an == 'y');

	//어떤 정수를 계속입력 받아서 합계를 더하고 0을 입력할 경우 종료하는 프로그램
	int a = 0, b = 0;
	
	do {
		printf("정수를 입력하세요: ");
		scanf("%d", &a);
		b = b + a;
	} while (a != 0);
	printf("%d", b);
	
	return 0;
}