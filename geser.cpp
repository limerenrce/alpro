#include <stdio.h>

int main() {
	int i, j, temp; 
	int a[5] = {3, 8, 11, 7, 13};
	
	//output array a before process
	printf("a[5] = ");
	for(j=0;j<5;j++){
		printf("%d ", a[j]);
	}
	
	//process
	temp = a[0];
	for(i=0;i<5;i++){
		if(i<=3){
			a[i+1] = a[i];
		}else{
			a[4] = temp;
		}
	}
	
	//output array a after process
	printf("\na[5] = ");
	for(i=0;i<5;i++){
		printf("%d ", a[i]);
	}
	return 0;
}
