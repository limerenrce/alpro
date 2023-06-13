#include<stdio.h>
/* program untuk menginputkan nama user dan menampilkan pesan di layar */
int main(){
	char name[10];
	printf ("What is your name?");
	scanf ("%s", &name);
	printf("hi, %s, happy c day", name);
	return 0;
}
