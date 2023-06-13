#include <stdio.h>
 
 int main(){
 	//init
 	int i, j, k, N, pow;	//variable i dan j digunakan untuk looping. variable k untuk melakukan perkalian. variable pow untuk menampung hasil perkalian.
 	pow = 1;				//menyatakan nilai awal pow, yaitu pow=1.
 	
 	//input
 	printf("input N:");		//user menginput nilai N.
 	scanf("%d", &N);		//membaca nilai N yang diinput oleh user.
 	
 	printf("\n");
 	//process and output versi 1 (faktorial segitiga)
 	for(i=1;i<=N;i++){				//loop untuk banyaknya baris, for i=1 to N.
 		printf("%d!=", i);			//output "i!=" pada setiap awal baris.
 		if(i==1){					
 			printf("%d\n", pow);	//jika i=1 tidak ada penulisan simbol kali (x), melainkan langsung hasil faktorial.
		}else{
			k = i;					//menyatakan nilai k diawal, yaitu k=i.
 			for(j=i;j>=1;j--){		//conditional jika i!=1, akan ada loop dengan bantuan variable j, for j=i to 1.
 				printf("%d", j);	//loop j akan menghasilkan output ix(i-1)x ... x1=pow.
 				pow = pow * k;		//proses perkalian.
 				if(j!=1){
 					printf("x");	//selama nilai j!=1, maka akan tercetak tanda kali (x).
				}else{
			 		printf("=");	//jika j=1, tercetak tanda sama dengan (=).
				}
				k--;				//mengurangi nilai k diakhir agar sesuai dengan nilai j yang tercetak, sehingga hasil perkalian bernilai benar.
			}
			printf("%d", pow);		//mencetak nilai akhir pow pada setiap baris.
			printf("\n");			//memulai baris baru.
			pow = 1;				//mereset nilai pow agar perkalian pada baris berikutnya bernilai benar.
		}
	}
	printf("\n");
	
	printf("\n");
	//process and output versi 2 (faktorial segitiga terbalik)
 	for(i=N;i>=1;i--){				//loop untuk banyaknya baris, for i=N to 1.
 		printf("%d!=", i);			//output "i!=" pada setiap awal baris.
 		if(i==1){					
 			printf("%d\n", pow);	//jika i=1 tidak ada penulisan simbol kali (x), melainkan langsung hasil faktorial.
		}else{
			k = i;					//menyatakan nilai k diawal, yaitu k=i.
 			for(j=i;j>=1;j--){		//conditional jika i!=1, akan ada loop dengan bantuan variable j, for j=i to 1.
 				printf("%d", j);	//loop j akan menghasilkan output ix(i-1)x ... x1=pow.
 				pow = pow * k;		//proses perkalian.
 				if(j!=1){
 					printf("x");	//selama nilai j!=1, maka akan tercetak tanda kali (x).
				}else{
			 		printf("=");	//jika j=1, tercetak tanda sama dengan (=).
				}
				k--;				//mengurangi nilai k diakhir agar sesuai dengan nilai j yang tercetak, sehingga hasil perkalian bernilai benar.
			}
			printf("%d", pow);		//mencetak nilai akhir pow pada setiap baris.
			printf("\n");			//memulai baris baru.
			pow = 1;				//mereset nilai pow agar perkalian pada baris berikutnya bernilai benar.
		}
	}
	return 0;
}
