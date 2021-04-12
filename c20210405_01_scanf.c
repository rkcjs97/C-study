#define _CRT_SECURE_NO_WARNINGS //scanf 함수를 사용하기 우ㅐ해
#include <stdio.h>

int main() {
	//입력함수 scanf
	//정수형

	//int a;

	//printf("정수는?: ");
	//scanf("%d",&a);
	//printf("입력한 값: %d  주소: %p\n", a, &a);

	//실수형
	//float f;
	//double d;

	//printf("float 실수는?: ");
	//scanf("%f", &f);

	//printf("double 실수는?: ");
	//scanf("%lf", &d); // %lf double형을 읽어들임

	//printf("입력한값\n : %f  %p\n   %f  %p\n", f, &f, d, &d);

	//문자형 입력받기
	//char c;
	//printf("문자는?: ");
	//scanf("%c", &c);
	//printf("문자는 : %c", c);

	//실습: 두 정수를 입력받아 합계를 출력
	//int a, b;

	//printf("정수를 입력하세요: ");
	//scanf("%d", &a);
	//printf("정수를 입력하세요: ");
	//scanf("%d", &b);

	//printf("두 정수의 합은: %d\n", a + b);

	//실습 오늘날짜를 입력받아 출력

	//int y, m, d;

	//printf("날짜를 입력하시오: \n");
	////printf("년");
	//scanf("%d-%d-%d", &y,&m,&d); 
	//

	//printf("오늘은 %d년 %d월 %d일 입니다.", y, m, d);
	
	//두 개의 정수를 입력받아 산술연산을 구해보시오
	//int a, b;

	//printf("정수를 입력하세요: ");
	//scanf("%d%d", &a, &b);
	//printf("%d + %d = %d\n", a, b,a+b);
	//printf("%d - %d = %d\n", a, b,a-b);
	//printf("%d * %d = %d\n", a, b,a*b);
	//printf("%d / %d = %f\n", a, b,(double)a/b);

	//int a, b;
	//char sign;
	//printf("first?");
	//scanf("%d", &a);
	//printf("second?");
	//scanf("%d", &b);

	////한 문자를 읽어서 반환하는 함수
	//getchar(); //엔터를 처리하기 위한 목적으로 사용

	//printf("sign?");
	//scanf("%c", &sign);

	//printf("%d %c %d\n", a, sign, b);
	
	//물건 구입 후 거스름돈을 계산하여 출력하는 프로그램을 완성하시오.(물건값과 지불한돈은 입력받는다.)
	
	//int pr, pa, ch;


	//printf("물건값을 입력하세요: ");
	//scanf("%d", &pr);
	//printf("지불한 돈을 입력하세요: ");
	//scanf("%d", &pa);

	//pr < pa ? 
	//	printf("거스름돈은 %d 입니다.", pa - pr): 
	//	pr == pa ? 
	//	printf("계산이 완료되었습니다."):
	//	printf("돈이 부족합니다.");

	//국어 영어 수학 점수를 입력 받아 합계와 평균을 구하는 프로그램을 완성하시오.

	/*int k, e, m;
	
	printf("국어 점수를 입력하세요: ");
	scanf("%d", &k);
	printf("영어 점수를 입력하세요: ");
	scanf("%d", &e);
	printf("수학 점수를 입력하세요: ");
	scanf("%d", &m);

	int sum = k + e + m;
	printf("총합: %d\n", sum);
	printf("평균: %.2f\n", (double)sum / 3);*/
	
	//rgb 값 만들기
	/*int r, g, b;
	
	printf("red?");
	scanf("%d", &r);
	
	printf("green?");
	scanf("%d", &g);
	
	printf("blue?");
	scanf("%d", &b);
	
	unsigned int rgb = r << 16 | g << 8 | b;
	printf("RGB: %0X\n", rgb);*/

	return 0;
}