#include <stdio.h>

int main() {
	int i, N, min, minInd;
	int arr[N];
	
	printf("Input array's size: ");
	scanf("%d", &N);
	//input elemen array
	for(i=0;i<N;i++){
		printf("Input elemen-%d: ",i);
		scanf("%d", &arr[i]);
	}
	printf("\n");
	printf("\nArr = ");
	for(i=0;i<N;i++){
		printf("%d ", arr[i]);
	}
	
	for(i=0;i<N;i++){
		if (arr[i]<min){
			min = arr[i];
			minInd = i;
		}
	}
	printf("\n");
	if(minInd!=0){
		if(arr[minInd-1]%2==0){
			printf("genap");
		}else{
			printf("ganjil");
		}
	}else{
		printf("NULL");
	}
}

