#include<stdio.h>
int main(){
	int num = 0;
	printf("���ڸ� �Է��ϼ���>>");
	scanf_s("%d", &num);
	for (int i = 1; i <=num; i++){
		for (int j =1; j <=num; j++){
			if (j == 1 || j == num || i==1 || i==num || i==j || i+j==num+1){
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}