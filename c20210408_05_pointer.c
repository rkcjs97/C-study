#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�����ͺ���
	//int num = 10;
	//int* pnum = &num;
	//printf("%p\n", pnum); //�ּ�
	//printf("%d\n", *pnum); //�ּҰ�

	//char c = '%';
	//char* p2c = &c;
	//printf("%p\n", p2c);
	//printf("%c\n", *p2c);

	//
	//int a = 10, b = 30;
	//int* pa = &a;
	//printf("a:%d\n", *pa);
	//int* pb = &b;
	//printf("b:%d\n", *pb);
	//a=10 b=20 c=30 �϶� base=100�� �� ������ ���غ��ÿ�. ��, ���� a b c �� ���� �� �� ������ ������ Ȱ��
	//int a = 10, b = 20, c = 30, base = 100;
	//int *p;
	//p = &a;
	//*p = *p + base;
	//printf("%d\n", *p);
	//p = &b;
	//*p = *p + base;
	//printf("%d\n", *p);
	//p = &c;
	//*p = *p + base;
	//printf("%d\n", *p);

	//�迭�� ������
	//int arr[3] = { 10,20,30 };
	//int* p = arr;
	////for (int i = 0; i < 3; i++) {
	////	printf("%d ", *(p + i));
	////}

	//for (int i = 0; i < 3; i++) {
	//	printf("%d %d ", *p,arr[i]);
	//	p--;
	//}
	//������ �迭�� 'p,y,t,h,o,n'�� �����ϰ� �����ͺ����� �̿��Ͽ� �� ���ھ� ȭ�鿡 ���
	//char arr[6] = { 'p','y','t','h','o','n' };
	//char* p = arr;
	//for (int i = 0; i < 6; i++) {
	//	printf("%c", *p);
	//	p++;
	//}

	//�Ǻ���ġ ������(0 1 1 2 3 5 8 13 21...)
	int fibo[20];
	int* p = fibo;
	*p = 0; p++;
	*p = 1; p++;

	for (int i = 2; i < 20; i++) {
		*p = *(p - 2) + *(p - 1);
		p++;
	}
	p = fibo;//�ʱ�ȭ
	for (int i = 0; i < 20; i++) {
		printf("%d ", *p);
		p++;
	}

	return 0;
}