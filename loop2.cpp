#include <stdio.h>

int main (){
	//init variable
	int i, N, sum;
	sum=0;
	
	//input from user
	printf("This program will sum from 1 until the number you decide\n");
	printf("Input N: ");
	scanf("%d", &N);
	
	//process
	for(i=1;i<=N;i++){
		if(i<N){
			printf("%d+", i);	
		}else{
			printf("%d=", i);
		}
		sum = sum + i;
	}
	
	//sum
	printf("%d", sum);
	return(0);
}
