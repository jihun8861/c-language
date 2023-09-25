#include<stdio.h>
int main(){
	int r = 0, h = 0;
	double b = 0,pi=3.141592;
	printf("원기둥의 밑변의 반지름,높이를 입력하세요(cm단위): ");
	scanf_s("%d,%d", &r, &h);
	b = r * r * pi * h;

	printf(">>계산한 원기둥의 부피는 %.1lfcm³입니다.\n", b);
	return 0;
}