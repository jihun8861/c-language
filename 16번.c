#include<stdio.h>
int main(){
	int year=0;
	printf("�⵵�� �Է��ϼ���: ");
	scanf_s("%d", &year);
	year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ? printf("����\n"):printf("���\n");
}