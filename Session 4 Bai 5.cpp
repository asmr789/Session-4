#include <stdio.h>

int main(){
	int a,b,c;
	printf("Nhap so nguyen a: ");
	scanf("%d",&a);
	printf("Nhap so nguyen b: ");
	scanf("%d",&b);
	printf("Nhap so nguyen c: ");
	scanf("%d",&c);
	if(b >= a && b <= c){
		printf("So %d nam giua hai so %d va %d",b,a,c);
	}
	else{
		printf("So %d khong nam giua hai so %d va %d",b,a,c);
	} 
	return 0;
}