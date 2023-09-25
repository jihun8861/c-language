#include<stdio.h>
int main(){
	int giga = 0, mega = 0, killo = 0;
	printf("ют╥б(Gigabyte): ");
	scanf_s("%d", &giga);
	mega = giga * 1024;
	killo = mega * 1024;

	printf(">>%dGigabyte = %dMegabyte = %dKillobyte\n", giga, mega, killo);
}