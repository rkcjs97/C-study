#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	//���ǽ��� ���϶� ������ ����� �����϶� ���๮�� ����
	/*int a = 0;

	if (a > 0)
		printf("���");
	else if (a < 0)
		printf("����");
	else
		printf("0");*/

	//�� ������ �Է¹޾� ū ���� ���(�� ���� ���� ���� �ִ�.
	//int a, b;

	//scanf("%d%d",&a,&b);

	//if (a < b)
	//	printf("a");
	//else if (a > b)
	//	printf("b");
	//else
	//	printf("=");

	//�л��� ������ �Է¹޾� ������ ����ϴ� ���α׷�
	//int g;
	//
	//printf("������ �Է��ϼ���: ");
	//scanf("%d", &g);

	//if (g > 100 || g < 0)
	//	printf("�߸��� �����Դϴ�.");
	//else if (g >= 90)
	//	printf("A");
	//else if (g >= 80)
	//	printf("B");
	//else if (g >= 70)
	//	printf("C");
	//else if (g >= 60)
	//	printf("D");
	//else 
	//	printf("F");

	//�л��� ������ ������ �Է� �޾� ������ ����� ����غ��ÿ�.
	//int k, e, m;
	//scanf("%d%d%d", &k, &e, &m);
	//int sum = k + e + m;

	//if (k < 60 || e < 60 || m < 60)
	//	printf("�����Դϴ�.");
	//else{
	//	printf("������ %d���Դϴ�.\n", sum);
	//	printf("����� %.2f���Դϴ�.\n", (double)sum / 3);
	//}
	//

	//����
	//int y;
	//scanf("%d", &y);

	//if (y % 4 == 0 && y % 100 != 00 || y%400 == 0)
	//	printf("����");
	//else
	//	printf("����x");

	//����޴��� ���� ������ �����ϸ� ���� �� �ڳʸ� �˷��ִ� ���α׷�

	int a = 0;

	printf("1.�����, 2.«��, 3.������, 4.�����, 5.����, 6.���İ�Ƽ �޴��� �����ϼ���: ");
	scanf("%d", &a);

	if (a == 1 || a == 2)
		printf("�߽� �ڳʷ� ������.");
	else if (a == 3 || a == 4)
		printf("�ѽ� �ڳʷ� ������.");
	else if (a == 5 || a == 6)
		printf("��� �ڳʷ� ������.");
	else
		printf("�ֹ��� �߸��Ǿ����ϴ�.");
	

	



	return 0;
}