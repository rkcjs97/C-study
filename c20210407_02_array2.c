#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	////������ �迭
	//int arr[2][3];
	//for (int i = 0; i < 2; i++) {
	//	for (int j = 0; j < 3; j++) {
	//		arr[i][j] = 3*i+j+1;
	//		printf("%d ", arr[i][j]);
	//	}
	//}
	//int size = sizeof(arr)/sizeof(arr[0]); 
	//int size2 = sizeof(arr[0]) / sizeof(int);
	//printf("%d", size);
	//printf("%d", size2);
	//�� �л��� ���� ���� ���� ������ �Է¹޾� ��ȣ��� �迭�� �����ϰ� �� ��ȣ ������� ������ ����� ����ϴ� ���α׷�
	int arr[2][3];
	int size1 = sizeof(arr) / sizeof(arr[0]);
	int size2 = sizeof(arr[0]) / sizeof(int);

	for (int i = 0; i < size1; i++) {
		printf("%d���л� ������ �Է��ϼ���", i + 1);
		for (int j = 0; j < size2; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	int sum = 0;

	for (int i = 0; i < size1; i++) {	
		for (int j = 0; j < size2; j++) {
			sum += arr[i][j];
		}
		printf("[%d]�հ�:%d ���:%.1f\n", i + 1, sum,(double)sum/size2);
		sum = 0;
	}
	
		

	return 0;
}
