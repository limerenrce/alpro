#include <stdio.h>

int main(){
	//define the variable
	int radius;
	float phi=3.14;
	float circleArea;
	
	//input form user -> radius value
	// %d 
	printf("Input the radius: ");
	scanf("%d", &radius);
	
	//process to calculate the circleArea
	circleArea = phi * (radius * radius);
	
	//show the output to user
	// .2 itu tandanya hasil floatnya cuma diambil 2 angka di belakang koma aja
	printf("The area of the circle is= %.2f", circleArea);
}
