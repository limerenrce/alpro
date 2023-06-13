#include <stdio.h>

int main(){
	//define variables
	int sisi;
	int squareArea;
	
	//input from user -> panjang sisi persegi
	printf("Berapa panjang sisi persegimu? ");
	scanf("%d", &sisi);
	
	//process calculate squareArea
	squareArea = (sisi * sisi);
	
	//show output to user
	printf("Luas persegi= %d", squareArea);	
	
}
