#include<stdio.h>
int main(){
	int num = 0;
	printf("���� �Է�: ");
	scanf_s("%d", &num);

	printf("%d>>3=%d\n", num,num >> 3);
	printf("%d<<3=%d\n", num, num << 3);
}