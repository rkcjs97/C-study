#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�Ű����� ����, ��ȯ������
void voidTest() {
	printf("void�Լ�\n");
}
void voidTest2(int a) {
	printf("�Ű�����:%d\n", a);

}
void voidTest3(int a, int b) {
	printf("�μ��� ��: %d\n", a + b);
}
//�Ű�����: ������
// ���� ���̸� ������ִ� ���
//call by value���
void area(double r) {//��������
	printf("����= %.2f\n",r*r*3.14);
}

// �Ű�����: ������(double)
//��ȯ��: ����(double)
//���� ���̸� ���ؼ� ��ȯ�ϴ� �Լ�
double areaReturn(double r) {
	double area = r * r * 3.14;
	return area;
}
//�� ������ �Ű������ι޾Ƽ� ���� ��ȯ�ϴ� �Լ�
int sum(int a, int b, int c) {
	int sum = a + b + c;
	return sum;
}
//�ΰ��� ������ �Ű������� �޾Ƽ� ���� �Ǽ����� ��ȯ�ϴ� �Լ�
double num(int a, int b) {
	int num = (double)a / b;
	return num;
}
//������ �Լ�
int ch(int a, int b) {
	if (a < b)
		return b;
	else if(a>b)
		return a;
}
int main() {
	//�׼�
	//voidTest();
	//voidTest2(10);
	//voidTest3(20,30);
	//double r;//��������
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