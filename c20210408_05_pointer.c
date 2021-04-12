#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//포인터변수
	//int num = 10;
	//int* pnum = &num;
	//printf("%p\n", pnum); //주소
	//printf("%d\n", *pnum); //주소값

	//char c = '%';
	//char* p2c = &c;
	//printf("%p\n", p2c);
	//printf("%c\n", *p2c);

	//
	//int a = 10, b = 30;
	//int* pa = &a;
	//printf("a:%d\n", *pa);
	//int* pb = &b;
	//printf("b:%d\n", *pb);
	//a=10 b=20 c=30 일때 base=100을 각 변수에 더해보시오. 단, 변수 a b c 에 접근 할 때 포인터 변수를 활용
	//int a = 10, b = 20, c = 30, base = 100;
	//int *p;
	//p = &a;
	//*p = *p + base;
	//printf("%d\n", *p);
	//p = &b;
	//*p = *p + base;
	//printf("%d\n", *p);
	//p = &c;
	//*p = *p + base;
	//printf("%d\n", *p);

	//배열의 포인터
	//int arr[3] = { 10,20,30 };
	//int* p = arr;
	////for (int i = 0; i < 3; i++) {
	////	printf("%d ", *(p + i));
	////}

	//for (int i = 0; i < 3; i++) {
	//	printf("%d %d ", *p,arr[i]);
	//	p--;
	//}
	//문자형 배열에 'p,y,t,h,o,n'을 저장하고 포인터변수를 이용하여 한 글자씩 화면에 출력
	//char arr[6] = { 'p','y','t','h','o','n' };
	//char* p = arr;
	//for (int i = 0; i < 6; i++) {
	//	printf("%c", *p);
	//	p++;
	//}

	//피보나치 포인터(0 1 1 2 3 5 8 13 21...)
	int fibo[20];
	int* p = fibo;
	*p = 0; p++;
	*p = 1; p++;

	for (int i = 2; i < 20; i++) {
		*p = *(p - 2) + *(p - 1);
		p++;
	}
	p = fibo;//초기화
	for (int i = 0; i < 20; i++) {
		printf("%d ", *p);
		p++;
	}

	return 0;
}