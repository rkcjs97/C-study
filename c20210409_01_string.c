#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main() {
	//���ڿ��� ������
	//char str[] = "happy";
	////str = "angry"; //str�� ��� ����Ұ�
	//char* p = str;
	//printf("%s\n",p);

	//p = "python";
	//puts(p);

	//�ǽ�) �̸��� �Է� �ް� ���
	char str[20];
	char* p = str;
	int q = 1;
	while (1) {
		printf("�̸�: ");
		gets_s(p, sizeof(str));
		if (str[0] == 'q')
			printf("����");
			break;
		printf("%s�� ȯ���մϴ�.\n",p);
	}


}