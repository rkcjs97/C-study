#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int g; //전역변수: 프로그램 시작시 생성, 종료시 소멸, 자동초기화
//전역변수의 무분별한 선언은 신중, 프로그램의 복잡도 증가 메모리 사용 증가
void test() {
	printf("%d", g);
}
int main() {
	// 전역 변수와 지역변수

	int a=10;//지역변수 : 함수가 시작될때 생성 함수가 종료되면 소멸
	//선언된 {}안에서만 사용가능
	printf("%d\n", a);
	printf("%d\n", g);
}
