#include<stdio.h>
int main(){
	int hour = 0, min = 0, sec = 0;
	printf("��(sec)�Է�: ");
	scanf_s("%d", &sec);
	hour = sec / 3600;
	min = sec % 3600 / 60;

	printf(">>�Է��� %d�ʴ� %d�ð� %d�� %d���Դϴ�.\n", sec,hour, min, sec%60);
}