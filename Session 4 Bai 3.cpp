#include <stdio.h>

int main() {
    int a;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &a);
    if (a % 3 == 0 && a % 5 == 0) {
    printf("So %d chia het cho ca 3 va 5.\n", a);
    int b = a / 3; 
    printf("%d chia cho 3 la:%d\n",a,b);
    int c = a / 5; 
    printf("%d chia cho 5 la:%d\n",a,c);
    }
    else if (a % 3 == 0) {
    printf("So %d chia het cho 3.\n", a);
    int b = a / 3; 
    printf("%d chia cho 3 la:%d\n",a,b);
    }
    else if (a % 5 == 0) {
    printf("So %d chia het cho 5.\n", a);
    int c = a / 5; 
    printf("%d chia cho 5 la:%d\n",a,c);
    }
    else {
    printf("So %d khong chia het cho 3 va 5.\n", a);
    }
 return 0;
}