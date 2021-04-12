#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<windows.h>

//매개변수: 카운트다운초
void cd(int a) {
	for (int i = a; i > -1; i--) {
		Sleep(1000);
		printf("%d초\n", i);
	}
	printf("발사");
}

int main() {
	//카운트 다운

	cd(5);

	return 0;


}