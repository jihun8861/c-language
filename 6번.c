#include<stdio.h>
int main(){
	double kg=0,lb = 0;
	printf("kg단위의 무게를 입력하세요: ");
	scanf_s("%lf", &kg);
	lb = kg/0.45359237;
	
	printf("입력하신 무게 %.1lfkg은 %.1lflb에 해당합니다.\n", kg, lb);
	return 0;
}