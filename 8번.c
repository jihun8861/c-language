#include<stdio.h>
int main(){
	int month = 0,ban=0;
	printf("��(1~12)�Է�: ");
	scanf_s("%d", &month);
	ban = month < 7 ? "��" : "��";

	printf("%d���� %s�ݱ��Դϴ�.\n", month, ban);
	return 0;
}