#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//매개변수로 정수를 입력받아 누적하는 함수
int usum(int a) {
	//static
	//함수가 최초로 실행됐을때 생성 프로그램 종료시 소멸
	//선언된 함수안에서만 접근가능
	static int sum = 0;
	sum = sum + a;
	return sum;
}

//매개변수:없다.
//리턴값: 이 함수를 실행한 횟수
//함수이름: countTest
int cT() {
	static int t = 0;
	t++;
	return t;
}


int main() {
	//전역변수, 지역변수 사용예
	//printf("누적:%d\n", usum(10));
	//printf("누적:%d\n", usum(20));
	//printf("누적:%d\n", usum(30));
	//return 0;

	for (int i = 0; i < 10; i++) {
		printf("실행횟수:%d\n", cT());
	}
}