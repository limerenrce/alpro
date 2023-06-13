#include <stdio.h>

/*
Nama 	: Zulvan Avito Anwari
NIM 	: 2115091046
Kelas	: B
*/

//Deklarasi Variabel
int bil[99999], a=0, ntotal, k, n, i, j, l;

//Input Nilai Banyaknya Bilangan
int main(){
	printf("Masukan Banyaknya Jumlah Bilangan : ");
	scanf("%d",&n);
	ntotal=n*n;
	
	int kali[ntotal]; 
	
	//Array Jumlah Bilangan
	for(i=0; i<n; i++){
		
    	printf("Input Bilangan ke-%d: ",i+1);
    	scanf("%d", &bil[i]);
    }
	
	//Looping Perhitungan
	for(i=0; i<n; i++){
  		for(j=0; j<n; j++){
  			kali[a]=bil[i] * bil[j];
  			a++;
		  }
	}
	
	//Ouput
	for( i=0; i<ntotal; i++){
			printf(" %d ",kali[i]);
	}
 	
}
