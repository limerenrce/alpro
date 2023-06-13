#include <stdio.h>

int main(){
     	//define variables
        int int1, int2;

     	//input from user
        printf("Input integer 1= ");
        scanf("%d", &int1);
        printf("Input integer 2= ");
        scanf("%d", &int2);
     	
     	//process and output
     	// if int1 is bigger than int2
        if(int1 >= int2){
        	if(int1 == 0)
        	printf("%d is netral", int1);
		}else{
			printf("is positive");
		}       
        // if int2 is bigger than int1
        if(int2 >= int1){
        	printf("%d is bigger", int2);
        		if(int2 % 2==0){
				printf("Even");
			}else{
				printf("Odd");
			}       
         }
		 
		 // if int1 is 
		 
		 else{
        	printf("Netral");
		 }
}




