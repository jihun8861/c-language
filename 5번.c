#include<stdio.h>
int main(){
	double cm=0,feet=0,inch=0;
	printf("Ű(cm)�� �Է��ϼ���: ");
	scanf_s("%lf", &cm);
	inch = cm/2.54;
	feet = inch/12;

	printf("�Է��Ͻ� Ű %.2lf��Ƽ���ʹ� %.2lf��Ʈ�� %.2lf��ġ�� �ش�˴ϴ�.\n", cm, feet, inch);
	return 0;
}
