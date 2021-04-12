#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h> //문자열 관련함수

int main() {
	//문자
	/*char c ;
	scanf("%c", &c);
	printf("%c",c);*/

	//int c = getchar();//문자입력 전용함수
	//putchar(c); //문자 출력 전용함수
	//printf("\n%d", c);

	//비밀번호를 입력하면 *가 출력
	
	/*char pw[5];
	printf("PassWard: ");
	for (int i = 0; i < 4; i++) {
		pw[i] = getch();
		putchar('*');
	}
	pw[4] = '\0';
	printf("\nPassWard: %s\n", pw);*/
	
	//문자열
	/*char s[6] = "hello";
	printf("%s\n", s);*/
	//char s[6]; //배열의 이름은 주소
	//scanf("%s", s); // 공백처리 불가
	//printf("%s\n", s);

	//문자열 전용함수: 공백처리가능
	//char name[20];
	//printf("이름:");
	//gets(name);
	//printf("당신의 이름은 "); puts(name);

	//문자열 전용함수
	//char name[10] = "hong";
	////name = "kim"
	//strcpy(name,"kim");
	//puts(name);

	//문자열을 입력받고 그 문자열의 값과 길이와 주소값을 출력해보시오
	//char st[10];
	//gets();

	//피보나치 수열
	//0 1 1 2 3 5 8 13 .... 
	int fi[20];
	int n=0;
	for (int i = 2; i<20; i++) {
		i = n-2 + n-1;
		printf("%d ", n);
	}

	/*for (int i = 0; i < 20; i++) {
		printf("%d ", fi[i]);
	}*/


	return 0;
}
