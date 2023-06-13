#include <stdio.h>
 
 int main(){
 	//init
 	int sum, N, i, a, b;		//variable N, a, dan b digunakan untuk menyimpan input dari user. variable i untuk melakukan looping dan sum untuk menyimpan hasil operasi penambahan atau pengurangan.
	sum=0;						//menyatakan nilai sum, yaitu sum=0.
 	
	//input
	printf("input N:");			//input N dari user.
	scanf("%d", &N);			//membaca input N dan menyimpannya pada variable N.
	printf("input 1st int:");	//input nilai int bebas dari user.
	scanf("%d", &a);			//membaca input dan menyimpannya pada variable a.
	printf("input 2nd int:");	//input nilai int bebas kedua dari user.
	scanf("%d", &b);			//membaca input dan menyimpannya pada variable b.
		
	//process and output
	for(i=1;i<=N;i++){					//loop for i=1 to N.
		if((a==1) || (b==1)){			//asumsi: user bisa menginputkan angka 1, maka di depan angka 1 harus berisikan tanda negatif (-).
			if(i<=N){
				printf("-");
			}
			printf("%d", i);
			sum= sum - i;				//dikarenakan semua bilangan bulat positif habis dibagi 1, deret hanya memiliki 1 operasi, yaitu operasi pengurangan.
		}else{							//kondisi jika dari input user bukan bernilai 1.
			printf("%d", i);
			if((i%a==0)||(i%b==0)){		//operasi pengurangan akan dilakukan untuk setiap nilai i yang sama dengan angka atau kelipatan dari angka yang diinput oleh user.
				sum= sum - i;
			}else{						//selain angka atau kelipatan dari angka yang diinput oleh user, akan dilakukan operasi penjumlahan.
				sum= sum + i;
			}
			if(((i+1)%a != 0) && ((i+1)%b != 0) && (i<N)){			//jika nilai i+1 bukanlah angka atau kelipatan dari angka yang diinput oleh user dan i<N, akan tercetak tanda tambah (+).
				printf("+");
			}else if((((i+1)%a == 0) || ((i+1)%b == 0)) && (i<N)){	//jika nilai i+1 adalah angka atau kelipatan dari angka yang diinput oleh user dan i<N, akan tercetak tanda tambah (-).
				printf("-");
			}
		}	
	}
	
	//output sum
	printf("=%d", sum);			//mencetak nilai akhir dari operasi pejumlahan atau pengurangan
	return 0;
 }
 
