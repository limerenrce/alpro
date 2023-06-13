#include <stdio.h>

int main () {
	//init variable
	int i, j, maxA, minA, maxB, minB, maxAInd, minAInd, maxBInd, minBInd, sumMax, sumMin;
	int a[5] = {3, 8, 11, 7, 13};
	int b[6] = {6, 2, 12, 8, 10, 20 };
	maxA = a[0];
	minA = a[0];
	minB = b[0];
	minB = b[0];
	
	//showing the array for user
	printf("a[5] = {3, 8, 11, 7, 13}");
	printf("\nb[6] = {6, 2, 12, 8, 10, 20}");
	
	//process finding array A max and min value
	for(i=0;i<5;i++){
		if (a[i]>maxA){
			maxA = a[i];
			maxAInd = i;
		}
		if (a[i]<minA){
			minA = a[i];
			minAInd = i;
			
		}
	}
	
	//process finding array B max and min value
	for(j=0;j<6;j++){
		if (b[j]>maxB){
			maxB = b[j];
			maxBInd = j;
		}
		if (b[j]<minB){
			minB = b[j];
			minBInd = j;
			
		}
	}
	
	//sum max and min
	sumMax = maxA + maxB;
	sumMin = minA + minB;
	
	//output
	printf("\narray a max value: %d", maxA);
	printf("\narray a min value: %d", minA);
	printf("\narray b max value: %d", maxB);
	printf("\narray b min value: %d", minB);
	printf("\n\nA max + B max = %d", sumMax);
	printf("\nA min + B min = %d", sumMin);
	return 0;
}
