#include <stdio.h>
 
 int main(){
 	//init
 	int sum, N, i;
	sum=0;
 	
	//input
	printf("input N:");
	scanf("%d", &N);
	
	//process
	for(i=1;i<=N;i++){
		printf("%d", i);
		if((i%3==0)||(i%4==0)){
			sum = sum - i;
		}else{
			sum = sum + i;
		}
		if(((i+1)%3 != 0) && ((i+1)%4 != 0) && (i<N)){
			printf("+");
		}else if(((i+1)%3 == 0) || ((i+1)%4 == 0) && (i<N)){
			printf("-");
		}else{
			printf("=");
		}
	}
	
	//output
	printf("%d", sum);
 }
 
