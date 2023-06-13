#include <stdio.h>

int main (){
	//init variable
	int i, N, sum, input;
	sum=0;
	
	//input N alue
	printf("This program will sum all your input\n");
	printf("How many times you want to input?");
	scanf("%d", &N);
	
	//input number from user
	for(i=1;i<=N;i++){
		printf("Input integer=");
		scanf("%d", &input);
		sum = sum + input;
		//jika input sebuah nilai lagi, maka nilai sebelumnya akan hilang/tergantikan dgn nilai yang baru.
		//maka, sewaktu-waktu akan diperlukan penyimpanan variable pada proses ke-N.
	}
	printf("\nsum = %d", sum);
}
