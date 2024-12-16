#include <stdio.h>

int main() {
    int a,b,c; // a so cu b so moi c tong so dien 
    int d= 0; // d tong tien 
    printf("Nhap so dien thang truoc: ");
    scanf("%d", &a);
    printf("Nhap so dien thang nay: ");
    scanf("%d", &b);
    c = b - a;
    if (c <= 0) {
        printf("Nhap lai so dien\n");
    }
    if (c > 200) {
        d = (c - 200) * 30000;
        c = 200;
    }
    if (c > 150) {
        d += (c - 150) * 25000;
        c = 150;
    }
    if (c > 100) {
        d += (c - 100) * 20000;
        c = 100;
    }
    if (c > 50) {
        d += (c - 50) * 15000;
        c = 50;
    }
    if (c <= 50) {
        d += c * 10000;
    }
    printf("Tong tien dien thang nay la: %d\n", d);
    
    return 0;
}