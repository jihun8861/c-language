#include<stdio.h>
int main(){
	int r = 0, h = 0;
	double b = 0,pi=3.141592;
	printf("������� �غ��� ������,���̸� �Է��ϼ���(cm����): ");
	scanf_s("%d,%d", &r, &h);
	b = r * r * pi * h;

	printf(">>����� ������� ���Ǵ� %.1lfcm���Դϴ�.\n", b);
	return 0;
}