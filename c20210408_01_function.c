#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//매개변수 없다, 반환값없다
void voidTest() {
	printf("void함수\n");
}
void voidTest2(int a) {
	printf("매개변수:%d\n", a);

}
void voidTest3(int a, int b) {
	printf("두수의 합: %d\n", a + b);
}
//매개변수: 반지름
// 원의 넓이를 출력해주는 기능
//call by value방식
void area(double r) {//지역변수
	printf("넓이= %.2f\n",r*r*3.14);
}

// 매개변수: 반지름(double)
//반환값: 넓이(double)
//원의 넓이를 구해서 반환하는 함수
double areaReturn(double r) {
	double area = r * r * 3.14;
	return area;
}
//세 정수를 매개변수로받아서 합을 반환하는 함수
int sum(int a, int b, int c) {
	int sum = a + b + c;
	return sum;
}
//두개의 정수를 매개변수로 받아서 나눈 실수값을 반환하는 함수
double num(int a, int b) {
	int num = (double)a / b;
	return num;
}
//진입점 함수
int ch(int a, int b) {
	if (a < b)
		return b;
	else if(a>b)
		return a;
}
int main() {
	//항수
	//voidTest();
	//voidTest2(10);
	//voidTest3(20,30);
	//double r;//지역변수
	//scanf("%lf", &r);
	//area(r);
	/*double r = 3;
	double rValue = areaReturn(r);
	printf("%.2f", rValue);*/
	/*int a = 10, b = 20, c = 30;
	int s = sum(a, b, c);
	printf("%d", s);*/
	/*printf("%.2f", num(10, 2));*/

	printf("%d", ch(3, 2));

	return 0;
}