#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�Ű������� ������ �Է¹޾� �����ϴ� �Լ�
int usum(int a) {
	//static
	//�Լ��� ���ʷ� ��������� ���� ���α׷� ����� �Ҹ�
	//����� �Լ��ȿ����� ���ٰ���
	static int sum = 0;
	sum = sum + a;
	return sum;
}

//�Ű�����:����.
//���ϰ�: �� �Լ��� ������ Ƚ��
//�Լ��̸�: countTest
int cT() {
	static int t = 0;
	t++;
	return t;
}


int main() {
	//��������, �������� ��뿹
	//printf("����:%d\n", usum(10));
	//printf("����:%d\n", usum(20));
	//printf("����:%d\n", usum(30));
	//return 0;

	for (int i = 0; i < 10; i++) {
		printf("����Ƚ��:%d\n", cT());
	}
}