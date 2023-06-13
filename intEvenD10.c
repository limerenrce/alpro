#include <stdio.h>

int main(){
     	//define variables
        int integer;

     	//input from user
        printf("Input integer= ");
        scanf("%d", &integer);
     	
     	//process and output
        if(integer % 2==0){
        	if(integer % 10==0){
				printf("True");
			}else{
				printf("False");
			}       
         }else{
         	printf("Odd Integer");
		 }
}




