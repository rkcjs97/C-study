#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	//�ݺ��� for
	//int i,n;
	//printf("����� ���Ͻðڽ��ϱ�?: ");
	//scanf("%d", &n);
	//

	//for (i=1;i<10;i++) {
	//	printf("%d*%d=%d\n",n, i,n*i);

	//}
	//int i=1  , n=0;


	//do {
	//	printf("����� ���Ͻðڽ��ϱ�?: ");
	//	scanf("%d", &n);
	//	if (n == 0) break;
	//	for (i = 1; i < 10; i++) {
	//	printf("%d*%d=%d\n", n, i, n * i);
	//	}
	//	
	//} 	while (i != 0); {
	//	
	//}

	//���� for
	/*for (int i = 2; i < 10; i++) {
		printf("[%d��]\n", i);
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i,j,i*j);
		}
	
	}*/

	//1���� 100������ ��
	//int n=0,s=0;
	//for (int i = 1; i <= 100; i++) {
	//	n = n + i;
	//	s = s + n;
	//}
	//printf("%d", n);

	//1���� �Է¹��� ����������

	//int n = 0, s = 0;
	//scanf("%d", &s);
	//for (int i = 1; i <= s; i++) {// i�� for�� ��������
	//	n = n + i;
	//}
	//printf("%d", n);

	//�������� �Է¹޾Ƽ� ū������ �������� �� ���� ���ϴ� ���α׷�

	/*for (int i = 0; i < 10; i++) {

		int a = 0, b = 0;
		scanf("%d%d", &a, &b);

		if (a < b)
			printf("%d-%d=%d\n", b, a, b - a);
		else if (a > b)
			printf("%d-%d=%d\n", a, b, a - b);
		else
			printf("�� ���� �����ϴ�.\n");
	}*/


	//for (int i = 0; i < 10; i++) {
	//	i = i + 1;
	//	for (int j = 9; j > i; j--) {
	//		j = j - 1;
	//		printf("-");
	//}
	//	for (int j = 0; j < i; j++) {
	//		printf("*");
	//	}
	//	for (int j = 9; j > i; j--) {
	//		j = j - 1;
	//		printf("+");
	//	}
	//	printf("\n");
	//}

	//�� ���� ���ڸ� ����ؼ� 
	//int a=0, b=0;

	//printf("�μ��� �Է��ϼ���: \n");
	//scanf("%d%d",&a,&b);

	//int i=0;

	//for (a; a <= b;a++) {
	//	i = i + a;
	//}
	//printf("%d\n", i);

	//���丮�� ���ϱ�
	//int a = 0, b = 1, i = 1;

	//printf("���� �Է��ϼ���: ");
	//scanf("%d", &a);

	//for (i; i <= a; i++) {
	//	b = b * i;
	//}
	//printf("%d\n", b);

	//1����10������ �������� �� ���� ��� �μ��� ���� 10�� �Ǵ� �μ��� ���ϴ� ���α׷�
	//int n = 0;

	//for (int i=1; i < 10; i++) {
	//	for (n = i; n < 10; n++) {
	//		if (n + i == 10) {
	//			printf("(%d,%d)\n", i, n);
	//		}
	//	}
	//}

	//���ɸ޴� ���� �޴��� ���� ���ݰ� �ش��ڳʸ� ����ϴ� ���α׷� (�� �߸��ۼ��ϸ� �ٽ� �޴����� q�Է��ϸ� ����
	//char m;

	//do {
	//	printf("1.¥���, 2«��, 3.�����, 4.�Ұ��\n");
	//	scanf("%c", &m);
	//	getchar();

	//	switch (m) {
	//		case'1':
	//			printf("�޴�: ¥���\n����: 5000��\n");
	//			printf("�߽��ڳ�\n"); break;
	//		case'2':
	//			printf("�޴�: «��\n����: 5000��\n");
	//			printf("�߽��ڳ�\n"); break;
	//		case'3':
	//			printf("�޴�: �����\n���� : 5500��\n");
	//			printf("�ѽ��ڳ�\n"); break;
	//		case'4':
	//			printf("�޴�: �Ұ��\n���� : 7000��\n");
	//			printf("�ѽ��ڳ�\n"); break;
	//		case'q':
	//			printf("����\n"); break;
	//		default:
	//			printf("�޴��� �ٽ� �������ּ���.\n");

	//	}
	//} while (m != 'q');

	return 0;
}