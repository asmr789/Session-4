#include <stdio.h>

int main(){
	int a;
	printf("Nhap so nam de kiem tra nam nhuan: ");
	scanf("%d",&a);
	if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)){
		printf("Nam %d la nam nhuan ",a);
	}
}