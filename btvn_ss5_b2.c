#include <stdio.h>
int main() {
	int target = 10;
	
	int input;
	
	printf("nhap vao mot so (doan so dung de ket thuc chuong trinh):\n");
	
	do{
		printf("nhap so: ");
		scanf("%d", &input);
		if(input != target){
			printf("sai roi hay thu lai,\n");
		}
	}while(input != target);
	printf("chuc mung ban da nhap dung so %d \n", target);
	
	return 0;
}
