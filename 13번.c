#include<stdio.h>
int main(){
	int a = 0, b = 0, c = 0,max=0;
	printf("세 개의 정수: "); 
	scanf_s("%d %d %d", &a, &b,&c);
	//max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
	if (a > b && a > c){
		max = a;
	}
	else if (b > a && b > c){
		max = b;
	}
	else
		max = c;

	printf(">>가장 큰 수 = %d\n", max);
}