#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	//반복문 for
	//int i,n;
	//printf("몇단을 구하시겠습니까?: ");
	//scanf("%d", &n);
	//

	//for (i=1;i<10;i++) {
	//	printf("%d*%d=%d\n",n, i,n*i);

	//}
	//int i=1  , n=0;


	//do {
	//	printf("몇단을 구하시겠습니까?: ");
	//	scanf("%d", &n);
	//	if (n == 0) break;
	//	for (i = 1; i < 10; i++) {
	//	printf("%d*%d=%d\n", n, i, n * i);
	//	}
	//	
	//} 	while (i != 0); {
	//	
	//}

	//이중 for
	/*for (int i = 2; i < 10; i++) {
		printf("[%d단]\n", i);
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i,j,i*j);
		}
	
	}*/

	//1부터 100까지의 합
	//int n=0,s=0;
	//for (int i = 1; i <= 100; i++) {
	//	n = n + i;
	//	s = s + n;
	//}
	//printf("%d", n);

	//1부터 입력받은 수까지의합

	//int n = 0, s = 0;
	//scanf("%d", &s);
	//for (int i = 1; i <= s; i++) {// i는 for의 지역변수
	//	n = n + i;
	//}
	//printf("%d", n);

	//두정수를 입력받아서 큰수에서 작은수를 뺀 값을 구하는 프로그램

	/*for (int i = 0; i < 10; i++) {

		int a = 0, b = 0;
		scanf("%d%d", &a, &b);

		if (a < b)
			printf("%d-%d=%d\n", b, a, b - a);
		else if (a > b)
			printf("%d-%d=%d\n", a, b, a - b);
		else
			printf("두 수가 같습니다.\n");
	}*/


	//for (int i = 0; i < 10; i++) {
	//	i = i + 1;
	//	for (int j = 9; j > i; j--) {
	//		j = j - 1;
	//		printf("-");
	//}
	//	for (int j = 0; j < i; j++) {
	//		printf("*");
	//	}
	//	for (int j = 9; j > i; j--) {
	//		j = j - 1;
	//		printf("+");
	//	}
	//	printf("\n");
	//}

	//두 개의 숫자를 계산해서 
	//int a=0, b=0;

	//printf("두수를 입력하세요: \n");
	//scanf("%d%d",&a,&b);

	//int i=0;

	//for (a; a <= b;a++) {
	//	i = i + a;
	//}
	//printf("%d\n", i);

	//팩토리얼 구하기
	//int a = 0, b = 1, i = 1;

	//printf("수를 입력하세요: ");
	//scanf("%d", &a);

	//for (i; i <= a; i++) {
	//	b = b * i;
	//}
	//printf("%d\n", b);

	//1부터10까지의 정수에서 두 수를 골라 두수의 합이 10이 되는 두수를 구하는 프로그램
	//int n = 0;

	//for (int i=1; i < 10; i++) {
	//	for (n = i; n < 10; n++) {
	//		if (n + i == 10) {
	//			printf("(%d,%d)\n", i, n);
	//		}
	//	}
	//}

	//점심메뉴 고르기 메뉴를 고르면 가격과 해당코너를 출력하는 프로그램 (단 잘못작성하면 다시 메뉴선택 q입력하면 종료
	//char m;

	//do {
	//	printf("1.짜장면, 2짬뽕, 3.비빔밥, 4.불고기\n");
	//	scanf("%c", &m);
	//	getchar();

	//	switch (m) {
	//		case'1':
	//			printf("메뉴: 짜장면\n가격: 5000원\n");
	//			printf("중식코너\n"); break;
	//		case'2':
	//			printf("메뉴: 짬뽕\n가격: 5000원\n");
	//			printf("중식코너\n"); break;
	//		case'3':
	//			printf("메뉴: 비빔밥\n가격 : 5500원\n");
	//			printf("한식코너\n"); break;
	//		case'4':
	//			printf("메뉴: 불고기\n가격 : 7000원\n");
	//			printf("한식코너\n"); break;
	//		case'q':
	//			printf("종료\n"); break;
	//		default:
	//			printf("메뉴를 다시 선택해주세요.\n");

	//	}
	//} while (m != 'q');

	return 0;
}