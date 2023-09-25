#include<stdio.h>
int main(){
	char name[10];
	int korean = 0, english = 0, math = 0, chul = 0;
	double avg = 0;
	printf("학생의 이름: ");
	scanf_s("%s",name,sizeof(name));
	printf("국어: ");
	scanf_s("%d", &korean);
	printf("영어: ");
	scanf_s("%d",&english);
	printf("수학: ");
	scanf_s("%d", &math);
	printf("출결: ");
	scanf_s("%d", &chul);

	avg = (korean + math + english + chul) / 4.0;


	printf("----------------------------------\n");
	printf("[%s]학생>>",name); (avg >= 70 && chul >= 80 ? printf("합격\n") : printf("불합격\n"));
	printf("----------------------------------\n");
	printf("네 과목의 평균 : %.1lf\n", avg);
	printf("출결점수\t:%d\n", chul);
	printf("----------------------------------\n");
	
	return 0;
}