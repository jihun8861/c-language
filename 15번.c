#include<stdio.h>
int main(){
	char name[10];
	int korean = 0, english = 0, math = 0, chul = 0;
	double avg = 0;
	printf("�л��� �̸�: ");
	scanf_s("%s",name,sizeof(name));
	printf("����: ");
	scanf_s("%d", &korean);
	printf("����: ");
	scanf_s("%d",&english);
	printf("����: ");
	scanf_s("%d", &math);
	printf("���: ");
	scanf_s("%d", &chul);

	avg = (korean + math + english + chul) / 4.0;


	printf("----------------------------------\n");
	printf("[%s]�л�>>",name); (avg >= 70 && chul >= 80 ? printf("�հ�\n") : printf("���հ�\n"));
	printf("----------------------------------\n");
	printf("�� ������ ��� : %.1lf\n", avg);
	printf("�������\t:%d\n", chul);
	printf("----------------------------------\n");
	
	return 0;
}