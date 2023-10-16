#include<stdio.h>
int main(){
	int num = 0;
	printf("숫자를 입력하세요>>");
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++){
		for (int j = 0; j < 5 - i; j++){
			printf(" ");
		}
		for (int j = 0; j < i * 2 + 1; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}