#include <stdio.h>

int main(){
	//define variables
	int tinggi;
	int alas;
	float luasSegitiga;
	float setengah=0.5;
	
	//input from user -> tinggi dan alas
	printf("Program ini akan membantumu menghitung luas segitiga. siap?");
	scanf("%s");
	printf("Insert tinggi= ");
	scanf("%d", &tinggi);
	printf("Insert alas= ");
	scanf("%d", &alas);
	
	//process 
	luasSegitiga= setengah * (alas*tinggi);
	
	//output
	printf("Luas segitiga= %.1f", luasSegitiga);
}
