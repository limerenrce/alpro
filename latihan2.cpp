#include <stdio.h>

int main (){
	//init
	int i, j, N, A, B;

	
	//input
	printf("input int:");
	scanf("%d", &N);
	A = N/2;
	B = A + 1;
	
	//process and output
	for(i=1;i<=B;i++){
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	for(i=A;i>=1;i--){
		for(j=i;j>=1;j--){
			printf("* ");
		}
		printf("\n");			
	}
}
