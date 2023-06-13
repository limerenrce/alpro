#include <stdio.h>
 
 int main(){
 	//init
 	int i, j, k, N, sum;
 	pow = 1;
 	
 	//process output
 	printf("input N:");
 	scanf("%d", &N);
 	
 	for(i=1;i<=N;i++){
 		printf("%d!=", i);
 		if(i==1){
 			printf("%d", pow);
 			printf("\n");
 			
		}else{
			k=1;
			for(j=1;j<=i;j++){
				printf("%d", k);
				pow = pow * k;
				if(j<1){
					printf("x");
				}else{
					printf("=");
				}
				k--;		
			}
			printf("%d", pow);
			printf("\n");
			pow = 1;
		}
	}
}
