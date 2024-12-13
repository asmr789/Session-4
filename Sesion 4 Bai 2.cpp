#include<stdio.h>

int main(){
	int a;
	printf("Nhap mot so bat ky: ");
	scanf("%d",&a);
	if (a % 2 == 0){
		printf("So %d la so chan ",a);	
	}
	else{
		printf("So %d la so le ",a);
	}
}
