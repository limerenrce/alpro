#include <stdio.h>

int main () {
	//init variable
	int i;
	int a[5] = {3, 8, 11, 7, 13};
	int b[6] = {6, 2, 12, 8, 10, 20};
	int c[6];
	
	//shows array a
	printf("a[5] = ");
	for(i=0;i<5;i++){
		printf("%d ", a[i]);
	}
	
	//shows array b
	printf("\nb[6] = ");
	for(i=0;i<6;i++){
		printf("%d ", b[i]);
	}
	
	//sum process and store in array c
	for(i=0;i<6;i++){
		c[i] = a[i] + b[i];
	}
	
	//output array c
	printf("\nc[6] = ");
	for(i=0;i<6;i++){
		printf("%d ", c[i]);
	}
	return 0;
}
