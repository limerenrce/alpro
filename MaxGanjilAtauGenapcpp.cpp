#include <stdio.h>

int main() {
	int i, N, max, maxInd;
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
		if (arr[i]>max){
			max = arr[i];
			maxInd = i;
		}
	}
	printf("\n");
	if(maxInd+1!=N){
		if(arr[maxInd+1]%2==0){
			printf("genap");
		}else{
			printf("ganjil");
		}
	}else{
		printf("NULL");
	}
}

