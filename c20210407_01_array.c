#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 5//매크로 상수

int main() {

	/*int arr[3];*/

	//arr[0] = 1; arr[1] = 2; arr[2] = 3;
	//printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
	//printf("%p %d\n", arr,sizeof(arr));

	//for (int i = 0; i < 3; i++) {
	//	printf("%d ", arr[i]);
	//}

	/*for (int i = 0; i < 3; i++) {
		arr[i] = i+1;
		printf("%d ", arr[i]);
	}*/

	//for (int i = 0; i < 3; i++) {
	//	arr[i] = (i + 1)* 10;
	//	printf("%d ", arr[i]);
	//}

	//실습
	//double arr[5] = { 1.1,2.1,3.1 };

	//int size = sizeof(arr)/sizeof(double);
	//printf("%d\n", size);

	//for (int i = 0; i < size; i++) {
	//	arr[i] = i + 1.1;
	//	printf("%.1f ", arr[i]);
	//}

	//문자형 배열
	/*char arr[] = { 'p','y','t','h','o','n' };
	int size = sizeof(arr) / sizeof(char);

	for (int i = 0; i < size; i++) {
		printf("%c", arr[i]);
	}*/

	//배열값의 합
	//c는 정적배열
	//a에 값이 할당되는 시점은 런타임 시
	/*const int a = 5*/;//상수(변경불가)
	//#define에 정의된 매크로 상수: 컴파일되기 전에 대체
	

	/*int arr[LEN];
	int size = sizeof(arr) / sizeof(int);
	int sum = 0;

	for (int i = 0; i < size; i++) {
		printf("[%d]정수는?", i + 1);
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (int i = 0; i < size; i++) {
		sum = arr[i] + sum;
	}
	printf("%d\n", sum);
*/
	//반학생의 점수를 입력받아 번호대로 배열에 저장하고 반 번호 순서대로 출력하는 프로그램
	//int arr[5];
	//int size = sizeof arr / sizeof(int);
	//
	//for (int i = 0; i < size; i++) {
	//	printf("[%d]번 점수: ", i + 1);
	//	scanf("%d", &arr[i]);
	//}

	//for (int i = 0; i < size; i++) {
	//	printf("[%d]번은 %d점\n", i + 1, arr[i]);
	//}

	//int sum = 0;
	//for (int i = 0; i < size; i++) {
	//	sum += arr[i];
	//}
	//printf("합계는:%d\n",sum);
	//printf("평균은:%.2f\n", (double)sum / size);

	//int num=0;
	//printf("원하는 학생번호를 입력하세요: ");
	//scanf("%d", &num);
	//printf("%d", arr[num - 1]);
	//switch(num) {
	//	case 1: printf("%d", arr[0]); break;
	//	case 2: printf("%d", arr[1]); break;
	//	case 3: printf("%d", arr[2]); break;
	//	case 4: printf("%d", arr[3]); break;
	//	case 5: printf("%d", arr[4]); break;
	//}

	int a[2][5] = { {1,2,3,4,5},{6,7,8,9,10} };
	printf("%d"a);


	return 0;
}