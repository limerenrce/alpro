#include <stdio.h>

int main () {
	//init variable
	int a[N], i, N;
	
	//input N value
	printf("Input array length: \n");
	scanf("%d", &N);
	
	//input data values to array
	for(i=0;i<N;i++){
		printf("Enter the input for index %d: ", i);
		scanf("%d", &a[i]);
	}
	
	//output
	printf("\nArray elements are as follows:\n");
	for(i=0;i<N;i++){
		printf("%d", a[i]);
	}
	return 0;
}
