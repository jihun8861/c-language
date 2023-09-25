#include<stdio.h>
int main(){
	int th = 0, hu = 0, ten = 0, num = 0;
	printf("네자리 정수를 입력하세요: ");
	scanf_s("%d", &num);
	th = num / 1000;
	hu = num % 1000 / 100;
	ten = num % 1000 % 100 / 10;

	printf("입력한 수는 %d천%d백%d십%d입니다.\n", th, hu, ten, num % 1000 % 100 % 10);
}