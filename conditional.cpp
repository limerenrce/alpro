#include <stdio.h>

int main(){
	//init variable
	char marriage;
	int a, children, workingDuration, mAllowance, wdAllowance, gAllowance;
	float nAllowance;
	//input and process
	printf("Are you married? [y/n]: ");
	scanf("%c", &marriage);
	printf("\ninsert the number of how many children do you have:");
	scanf("%d", &children);
	
	//allowance with marriage and children condition
	if((marriage=='y')&&(children=0)){
		mAllowance = 20;
		a = 1;
	}else if((marriage=='y')&&(children=1)){
		mAllowance = 35;
		a = 1;
	}else if((marriage=='y')&&(children>=2)){
		mAllowance = 50;
		a = 1;
	}else if(marriage=='n'){
		mAllowance = 0; //allowance if single
		a = 0; 
	}
	
	printf("\ninsert the number of how many years of your working duration:");
	scanf("%d", &workingDuration);
	
	//allowance with working duration condition
	if(workingDuration<5){
		wdAllowance = 5;
	}else if(5<=workingDuration<10){
		wdAllowance = 10;
	}else if(workingDuration>=10){
		wdAllowance = 15;
	}
	
	//gross allowance
	gAllowance = mAllowance + wdAllowance;
	
	//net allowance after conditional tax is added
	if(a=1){
		nAllowance = 0.85*gAllowance;
	}else if(a=0){
		nAllowance = 0.90*gAllowance;
	}
	
	//output
	printf("\nEmployee net allowance:%.1f%%", nAllowance);
}
