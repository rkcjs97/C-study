#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main() {
	//문자열의 포인터
	//char str[] = "happy";
	////str = "angry"; //str은 상수 변경불가
	//char* p = str;
	//printf("%s\n",p);

	//p = "python";
	//puts(p);

	//실습) 이름을 입력 받고 출력
	char str[20];
	char* p = str;
	int q = 1;
	while (1) {
		printf("이름: ");
		gets_s(p, sizeof(str));
		if (str[0] == 'q')
			printf("종료");
			break;
		printf("%s님 환영합니다.\n",p);
	}


}