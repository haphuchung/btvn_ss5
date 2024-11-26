#include <stdio.h>

int main() {
    int num;
    
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &num);
    
    if (num == 0) {
        printf("0\n");
    } else {
        while (num != 0) {
            printf("%d\n", num % 10);
            num /= 10;
        }
    }
    
    return 0;
}
