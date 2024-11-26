#include <stdio.h>

int main() {
    int num1, num2, ucln = 1;
    int i; 

    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Vui long nhap hai so nguyen duong.\n");
        return 1; 
    }

    for (i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            ucln = i; 
        }
    }

    printf("UCLN cua %d va %d la: %d\n", num1, num2, ucln);

    return 0;
}
