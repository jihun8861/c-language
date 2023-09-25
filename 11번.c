#include<stdio.h>
int main(){
	int x = 0;
	double result = 0;
	printf("x입력: ");
	scanf_s("%d", &x);
	result = (2.0 * x*x*x) - (3.0 * x*x) + (1.0 / x);

	printf("\t->x=%d일 때\n\tf(x)=2x³-3x²+1/x=%.1lf\n", x, result);
	return 0;
}