#include<stdio.h>
int main(){
	double kg=0,lb = 0;
	printf("kg������ ���Ը� �Է��ϼ���: ");
	scanf_s("%lf", &kg);
	lb = kg/0.45359237;
	
	printf("�Է��Ͻ� ���� %.1lfkg�� %.1lflb�� �ش��մϴ�.\n", kg, lb);
	return 0;
}