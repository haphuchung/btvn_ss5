#include <stdio.h>

int main() {
    int num1, num2, max, bcnn;

    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Vui long nhap hai so nguyen duong hop le!\n");
        return 1;
    }

    max = (num1 > num2) ? num1 : num2;

    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            bcnn = max;
            break;
        }
        max++;
    }

    printf("Boi chung nho nhat cua %d va %d la: %d\n", num1, num2, bcnn);

    return 0;
}
