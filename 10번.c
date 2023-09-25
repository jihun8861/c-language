#include<stdio.h>
int main(){
	int hour = 0, min = 0, sec = 0;
	printf("초(sec)입력: ");
	scanf_s("%d", &sec);
	hour = sec / 3600;
	min = sec % 3600 / 60;

	printf(">>입력한 %d초는 %d시간 %d분 %d초입니다.\n", sec,hour, min, sec%60);
}