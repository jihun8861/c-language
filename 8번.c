#include<stdio.h>
int main(){
	int month = 0,ban=0;
	printf("월(1~12)입력: ");
	scanf_s("%d", &month);
	ban = month < 7 ? "상" : "하";

	printf("%d월은 %s반기입니다.\n", month, ban);
	return 0;
}