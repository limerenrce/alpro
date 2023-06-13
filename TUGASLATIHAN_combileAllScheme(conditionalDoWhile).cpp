#include <stdio.h>

int main(){
	//init variable
	int i, N, sum;
	i=1;
	sum=0;
	
	//input N
	printf("This program will sum from 1 until the number you decide\n");
	printf("Input N: ");
	scanf("%d", &N);
	
	//process
	do{
		if(i<N){
			printf("%d+", i);
		}else{
			printf("%d=", i);
		}
		sum = sum + i;
		i++;	
	}
	while(i<=N);
	printf("%d", sum);
}
