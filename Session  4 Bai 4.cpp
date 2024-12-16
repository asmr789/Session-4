#include<stdio.h>

int main(){
	int a;
	printf("Vui long nhap thang (1 - 12 ): ");
	scanf("%d",&a);
	if (a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12 ){
		printf("Thang %d co 31 ngay",a);
	}
	else if (a == 2){
		printf("Thang %d co 28 hoac 29 ngay ",a);
	}
	else if ( a == 6 || a == 9 || a == 11){
		printf("Thang %d co 30 ngay ",a);
	}
	else{ 
	printf("So thang khong hop le");
    }
    return 0;
}