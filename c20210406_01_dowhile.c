#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	//do~while
	
	//int a = -1;

	//do {
	//	printf("%d", a);
	//} while (a > 0);

	//char an ;
	//do {
	//	printf("������ �����մϴ�.");
	//	printf("������ ��� �÷��� �ұ��(y)?: ");
	//	scanf("%c", &an);
	//	getchar();//���Ͱ�ó��
	//} 	while (an == 'y');

	//� ������ ����Է� �޾Ƽ� �հ踦 ���ϰ� 0�� �Է��� ��� �����ϴ� ���α׷�
	int a = 0, b = 0;
	
	do {
		printf("������ �Է��ϼ���: ");
		scanf("%d", &a);
		b = b + a;
	} while (a != 0);
	printf("%d", b);
	
	return 0;
}