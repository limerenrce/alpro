#include <stdio.h>

int main(){
	//init variable
	int N, i, j;
	
	//input
	printf("Input N:");
	scanf("%d", &N);
	
	//process and output
	printf("Version 1:\n");
	for(i=1;i<=N;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	printf("Version 2:\n");
	for(i=N;i>=1;i--){
		for(j=i;j>=1;j--){
			printf("*");
		}
		printf("\n");
	}
}
