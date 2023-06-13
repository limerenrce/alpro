#include <stdio.h>

int main () {
	//init variable
	int i, maxA, minA, maxB, minB, maxAInd, sumMax, sumMin;
	int a[5] = {3, 8, 11, 7, 13};
	int b[6] = {6, 2, 12, 8, 10, 20};
	maxA = a[0];
	minA = a[0];
	minB = b[0];
	minB = b[0];
	
	//showing the array for user
	printf("a[5] = {3, 8, 11, 7, 13}");
	printf("\nb[6] = {6, 2, 12, 8, 10, 20}");
	
	//process finding array max and min value from both array
	for(i=0;i<5;i++){
		if (a[i]>maxA){
			maxA = a[i];
		}
		if (a[i]<minA){
			minA = a[i];
		}
		if (b[i]>maxB){
			maxB = b[i];
		}
		if (b[i]<minB){
			minB = b[i];
		}
	}
	
	//compare max
	if(maxA>maxB){
		bigger = maxA
		printf("maxA is bigger: %d", bigger);
	}else{
		bigger = maxB
		printf("maxB is bigger: %d", bigger);
	}
}
