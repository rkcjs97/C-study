#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void aP(int argc, char* argv[]) {
	for (int i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}
}

int main() {
	//���� ���ڿ� �迭�� �Ű�����
	//�������� �迭
	//������ �迭�� ������
	//char arr[][7] = { "phthon","c","java" };
	//char(*p)[7] = arr;
	// /*printf("%d %d %d\n", p, p + 1, p + 2);*/
	char* p[3] = { "phthon","c","java" };
	printf("%p %p %p\n", p[0], p[1], p[2]);
	//�Լ��� ó��
	//for (int i = 0; i < 3; i++) {
	//	printf("%s\n", p[i]);
	//}
	aP(3, p);
}

