#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�Լ�: Call By Reference
//�ּҸ� �Ű������� �޴´�.
//main �Լ��� a�� ���� ���� ����
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
	//�Լ��� ������ �ѱ��
	//int a=10;
	//int* p = &a;
	//cH(p);
	//scanf("%d", &a);

	//printf("a:%d", a);
	//int a = 10, b = 20;
	//int* pa = &a;
	//int* pb = &b;
	//twoChange(pa,pb);

	//�Է¹��� ���� ����
	//�Լ�����
	int n, sum=0;
	int* p = &n;
	int* psum = &sum;
	
	while(1) {
		scanf("%d", &n);
		if (n == 0) break;
		sumC(p, psum);
		printf("�հ��:%d\n",*psum);
	}

	//printf("%d", sumC(p));


}
