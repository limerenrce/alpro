#include <stdio.h>

int main(){
	//init variable
	int y, m, w, d, input;
	
	//User's day(s) input
	printf("This program will turn days into format y/m/w/d");
	printf("\nInput days:");
	scanf("%d", &input);
	
	//process
	y = input/365;
	m = (input%365)/30;
	w = ((input%365)%30)/7;
	d = ((input%365)%30)%7;

	//output
	printf("%d year(s), %d month(s), %d week(s), %d day(s)", y, m, w, d);
}
