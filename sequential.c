#include <stdio.h>

int main(){
	//init variable
	int y, ymod, m, mmod, w, wmod, d, input;
	
	//User's day(s) input
	printf("This program will turn days into format y/m/w/d");
	printf("\nInput days:");
	scanf("%d", &input);
	
	//process
	y = input/365;
	ymod = input-(y*365);
	m = ymod/30;
	mmod = ymod-(m*30);
	w = mmod/7;
	wmod = mmod-(w*7);
	d = wmod;

	//output
	printf("%d year(s), %d month(s), %d week(s), %d day(s)", y, m, w, d);
}
