#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 5//��ũ�� ���

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

	//�ǽ�
	//double arr[5] = { 1.1,2.1,3.1 };

	//int size = sizeof(arr)/sizeof(double);
	//printf("%d\n", size);

	//for (int i = 0; i < size; i++) {
	//	arr[i] = i + 1.1;
	//	printf("%.1f ", arr[i]);
	//}

	//������ �迭
	/*char arr[] = { 'p','y','t','h','o','n' };
	int size = sizeof(arr) / sizeof(char);

	for (int i = 0; i < size; i++) {
		printf("%c", arr[i]);
	}*/

	//�迭���� ��
	//c�� �����迭
	//a�� ���� �Ҵ�Ǵ� ������ ��Ÿ�� ��
	/*const int a = 5*/;//���(����Ұ�)
	//#define�� ���ǵ� ��ũ�� ���: �����ϵǱ� ���� ��ü
	

	/*int arr[LEN];
	int size = sizeof(arr) / sizeof(int);
	int sum = 0;

	for (int i = 0; i < size; i++) {
		printf("[%d]������?", i + 1);
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
	//���л��� ������ �Է¹޾� ��ȣ��� �迭�� �����ϰ� �� ��ȣ ������� ����ϴ� ���α׷�
	//int arr[5];
	//int size = sizeof arr / sizeof(int);
	//
	//for (int i = 0; i < size; i++) {
	//	printf("[%d]�� ����: ", i + 1);
	//	scanf("%d", &arr[i]);
	//}

	//for (int i = 0; i < size; i++) {
	//	printf("[%d]���� %d��\n", i + 1, arr[i]);
	//}

	//int sum = 0;
	//for (int i = 0; i < size; i++) {
	//	sum += arr[i];
	//}
	//printf("�հ��:%d\n",sum);
	//printf("�����:%.2f\n", (double)sum / size);

	//int num=0;
	//printf("���ϴ� �л���ȣ�� �Է��ϼ���: ");
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