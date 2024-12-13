#include<stdio.h>

int main(){
	int a;
	printf("Nhap mot so bat ky: ");
	scanf("%d",&a);
	if (a >= 0){
		printf("So %d la so nguyen duong",a);	
	}
	else{
		printf("So %d la so nguyen am",a);
	}
}