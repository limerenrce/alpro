#include <stdio.h>

int main (){
	//init variable
	int i, N, temp, sum;
	i=1;
	sum=0;
	
	//input N
	printf("This program will sum all your input using Conditional Loop\n");
	printf("Input N:");
	scanf("%d", &N);
	
	//input number from user
	while(i<=N){
		printf("Input integer=");
		scanf("%d", &temp);
		sum = sum + temp;
		i = i + 1;
	}
	printf("\nsum= %d", sum);
	
}
