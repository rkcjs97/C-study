#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h> //���ڿ� �����Լ�

int main() {
	//����
	/*char c ;
	scanf("%c", &c);
	printf("%c",c);*/

	//int c = getchar();//�����Է� �����Լ�
	//putchar(c); //���� ��� �����Լ�
	//printf("\n%d", c);

	//��й�ȣ�� �Է��ϸ� *�� ���
	
	/*char pw[5];
	printf("PassWard: ");
	for (int i = 0; i < 4; i++) {
		pw[i] = getch();
		putchar('*');
	}
	pw[4] = '\0';
	printf("\nPassWard: %s\n", pw);*/
	
	//���ڿ�
	/*char s[6] = "hello";
	printf("%s\n", s);*/
	//char s[6]; //�迭�� �̸��� �ּ�
	//scanf("%s", s); // ����ó�� �Ұ�
	//printf("%s\n", s);

	//���ڿ� �����Լ�: ����ó������
	//char name[20];
	//printf("�̸�:");
	//gets(name);
	//printf("����� �̸��� "); puts(name);

	//���ڿ� �����Լ�
	//char name[10] = "hong";
	////name = "kim"
	//strcpy(name,"kim");
	//puts(name);

	//���ڿ��� �Է¹ް� �� ���ڿ��� ���� ���̿� �ּҰ��� ����غ��ÿ�
	//char st[10];
	//gets();

	//�Ǻ���ġ ����
	//0 1 1 2 3 5 8 13 .... 
	int fi[20];
	int n=0;
	for (int i = 2; i<20; i++) {
		i = n-2 + n-1;
		printf("%d ", n);
	}

	/*for (int i = 0; i < 20; i++) {
		printf("%d ", fi[i]);
	}*/


	return 0;
}
