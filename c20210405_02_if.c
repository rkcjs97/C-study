#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	//조건식이 참일때 수행할 문장과 거짓일때 수행문을 구별
	/*int a = 0;

	if (a > 0)
		printf("양수");
	else if (a < 0)
		printf("음수");
	else
		printf("0");*/

	//두 정수를 입력받아 큰 수를 출력(두 수는 같을 수도 있다.
	//int a, b;

	//scanf("%d%d",&a,&b);

	//if (a < b)
	//	printf("a");
	//else if (a > b)
	//	printf("b");
	//else
	//	printf("=");

	//학생의 점수를 입력받아 학점을 출력하는 프로그램
	//int g;
	//
	//printf("점수를 입력하세요: ");
	//scanf("%d", &g);

	//if (g > 100 || g < 0)
	//	printf("잘못된 점수입니다.");
	//else if (g >= 90)
	//	printf("A");
	//else if (g >= 80)
	//	printf("B");
	//else if (g >= 70)
	//	printf("C");
	//else if (g >= 60)
	//	printf("D");
	//else 
	//	printf("F");

	//학생의 국영수 점수를 입력 받아 총점과 평균을 출력해보시오.
	//int k, e, m;
	//scanf("%d%d%d", &k, &e, &m);
	//int sum = k + e + m;

	//if (k < 60 || e < 60 || m < 60)
	//	printf("과락입니다.");
	//else{
	//	printf("총점은 %d점입니다.\n", sum);
	//	printf("평균은 %.2f점입니다.\n", (double)sum / 3);
	//}
	//

	//윤년
	//int y;
	//scanf("%d", &y);

	//if (y % 4 == 0 && y % 100 != 00 || y%400 == 0)
	//	printf("윤년");
	//else
	//	printf("윤년x");

	//보기메뉴를 보고 음식을 선택하면 가야 할 코너를 알려주는 프로그램

	int a = 0;

	printf("1.자장면, 2.짬뽕, 3.설렁탕, 4.비빔밥, 5.피자, 6.스파게티 메뉴를 선택하세요: ");
	scanf("%d", &a);

	if (a == 1 || a == 2)
		printf("중식 코너로 가세요.");
	else if (a == 3 || a == 4)
		printf("한식 코너로 가세요.");
	else if (a == 5 || a == 6)
		printf("양식 코너로 가세요.");
	else
		printf("주문이 잘못되었습니다.");
	

	



	return 0;
}