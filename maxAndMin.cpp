#include <stdio.h>

int main(){
	int maxSize1, maxSize2, i, maxA, minA, maxB, minB;
	int arrA[maxSize1];
	int arrB[maxSize2];
	
	printf("Input max size array 1: ");
	scanf("%d", &maxSize1);
	//input elemen arrayA
	for(i=1;i<=maxSize1;i++){
		printf("Input elemen-%d: ",i);
		scanf("%d", &arrA[i]);
	}
	printf("\n");



	printf("Input max size array 2: ");
	scanf("%d", &maxSize2);
	//input elemen arrayB
	for(i=1;i<=maxSize2;i++){
		printf("Input elemen-%d: ",i);
		scanf("%d", &arrB[i]);
	}
	
	
	
	//write array A dan array B
	printf("\nArr A = ");
	for(i=1;i<=maxSize1;i++){
		printf("%d ", arrA[i]);
	}
	printf("\nArr B = ");
	for(i=1;i<=maxSize2;i++){
		printf("%d ", arrB[i]);
	}
	

	maxA = arrA[0];
	minA = arrA[0];
	maxB = arrB[0];
	minB = arrB[0];
	
	
	//compare max and min array A
	for(i=0;i<maxSize1;i++){
		if (arrA[i]>maxA){
			maxA = arrA[i];
		}
		if (arrA[i]<minA){
			minA = arrA[i];			
		}
	}	
	
	//compare max and min array B
	for(i=0;i<maxSize2;i++){
		if (arrB[i]>maxB){
			maxB = arrB[i];
		}
		if (arrB[i]<minB){
			minB = arrB[i];
		}
	}
	
	//output max and min
	printf("\n");
	if(maxA>maxB){
		printf("Max value is in array A: %d", maxA);
	}else if(maxB>maxA){
		printf("Max value is in array B: %d", maxB);
	}else{
		printf("Max value in both array are same: %d", maxA);
	}
	
	
	printf("\n");
	if(minA<minB){
		printf("Min value is in array A: %d", minA);
	}else if(minB<minA){
		printf("Min value is in array B: %d", minB);
	}else{
		printf("Min value in both array are same: %d", minA);
	}
	return 0;
}
