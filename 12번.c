#include<stdio.h>
int main(){
	int th = 0, hu = 0, ten = 0, num = 0;
	printf("���ڸ� ������ �Է��ϼ���: ");
	scanf_s("%d", &num);
	th = num / 1000;
	hu = num % 1000 / 100;
	ten = num % 1000 % 100 / 10;

	printf("�Է��� ���� %dõ%d��%d��%d�Դϴ�.\n", th, hu, ten, num % 1000 % 100 % 10);
}