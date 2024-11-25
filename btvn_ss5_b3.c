#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int i; 
    
    // Yeu cau nguoi dung nhap mot so nguyen duong
    do {
        printf("Nhap mot so nguyen duong: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("So nhap phai la so nguyen duong. Vui long thu lai.\n");
        }
    } while (n <= 0); // Lap lai cho den khi nguoi dung nhap dung so nguyen duong

    // Tinh tong tu 1 den n
    for (i = 1; i <= n; i++) {
        sum += i;
    }

    // In ket qua
    printf("Tong cac so tu 1 den %d la: %d\n", n, sum);

    return 0;
}
