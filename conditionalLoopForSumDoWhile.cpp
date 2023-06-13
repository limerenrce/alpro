#include <stdio.h>

int main(){
	//init variable
	int i, N, temp, sum;
	i=1;
	sum=0;
	
	//input N
	printf("This program will sum all your input using Conditional Loop\n");
	printf("Input N =");
	scanf("%d", &N);
	
	//input number
	do {
		printf("Input temp =");
		scanf("%d", &temp);
		i++;
		sum = sum + temp;
	}
	while(i<=N);
	printf("\nsum= %d", sum);
}
