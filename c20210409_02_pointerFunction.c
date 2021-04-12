#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//함수: Call By Reference
//주소를 매개변수로 받는다.
//main 함수의 a의 값을 변경 가능
void cH(int* p) {
	*p = 20;
}
void twoChange(int* pa,int* pb) {
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}
void sumC(int* p, int* psum) {
	*psum += *p;
}
int main() {
	//함수에 포인터 넘기기
	//int a=10;
	//int* p = &a;
	//cH(p);
	//scanf("%d", &a);

	//printf("a:%d", a);
	//int a = 10, b = 20;
	//int* pa = &a;
	//int* pb = &b;
	//twoChange(pa,pb);

	//입력받은 값을 누적
	//함수에서
	int n, sum=0;
	int* p = &n;
	int* psum = &sum;
	
	while(1) {
		scanf("%d", &n);
		if (n == 0) break;
		sumC(p, psum);
		printf("합계는:%d\n",*psum);
	}

	//printf("%d", sumC(p));


}
