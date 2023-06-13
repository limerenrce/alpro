#include <stdio.h>

int main (){
	int i, N, sum;
	sum = 0;
	
	printf("input N:");
	scanf("%d", &N);
	for(i=1;i<=N;i++){
		if(i%2==0){
			printf("+");
			printf("%d", i);
			sum = sum + i;
		}else{
			printf("-");
			printf("%d", i);
			sum = sum - i;
		}
	}
	printf("=%d", sum);
}
