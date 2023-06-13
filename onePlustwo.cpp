#include <stdio.h>

int main(){
	//init variable
	int i,N;
	int sum=0;
	
	//input
	printf("Input the end of loop: ");
	scanf("%d", &N);
	
	//proces
	for(i=1;i<=N;i++){
		sum = sum + i;
		printf("Sum = %d", sum);
	}
}
