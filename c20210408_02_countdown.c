#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<windows.h>

//�Ű�����: ī��Ʈ�ٿ���
void cd(int a) {
	for (int i = a; i > -1; i--) {
		Sleep(1000);
		printf("%d��\n", i);
	}
	printf("�߻�");
}

int main() {
	//ī��Ʈ �ٿ�

	cd(5);

	return 0;


}