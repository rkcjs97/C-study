#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	//���� ���ǹ�
	//int a = 3;

	//switch (a) {
	//case 0:
	//	printf("zero\n");
	//case 1:
	//	printf("one\n");
	//case 2:
	//	printf("two\n");
	//default:
	//	printf("�߸��� ����\n");
	//}
	//return 0;

	int no;
	printf("1.�����, 2.«��, 3.������, 4.�����, 5.����, 6.���İ�Ƽ");
	printf("�޴���?");
	scanf("%d", &no);
	switch (no) {
	case 1:
	case 2:
		printf("�߽�");
	case 3:
	case 4:
		printf("�ѽ�");
	case 5:
	case 6:
		printf("���");
	default:
	}
	return 0;
}