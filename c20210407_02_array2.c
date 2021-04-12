#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	////다차원 배열
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
	//반 학생의 국어 영어 수학 점수를 입력받아 번호대로 배열에 저장하고 반 번호 순서대로 총점과 평균을 출력하는 프로그램
	int arr[2][3];
	int size1 = sizeof(arr) / sizeof(arr[0]);
	int size2 = sizeof(arr[0]) / sizeof(int);

	for (int i = 0; i < size1; i++) {
		printf("%d번학생 점수를 입력하세요", i + 1);
		for (int j = 0; j < size2; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	int sum = 0;

	for (int i = 0; i < size1; i++) {	
		for (int j = 0; j < size2; j++) {
			sum += arr[i][j];
		}
		printf("[%d]합계:%d 평균:%.1f\n", i + 1, sum,(double)sum/size2);
		sum = 0;
	}
	
		

	return 0;
}
