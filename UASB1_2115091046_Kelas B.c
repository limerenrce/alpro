#include <stdio.h>
/*
Nama 	: Zulvan Avito Anwari
NIM		: 2115091046
Kelas	: B
*/

//Deklarasi Variabel
int penumpang[], kelas[],i, eks, bis, eko, n, total;

//Input Jumlah Penumpang dan Daftar Pilihan Kelas
int main(){
	printf("Masukan Total Jumlah Penumpang : ");
	scanf("%d", &n);
	printf("\nDaftar Kelas Gerbong : \n 1. Eksekutif(30k)\n 2. Bisnis(20k)\n 3. Ekonomi(10k)\n\n");
	
	//Array Loop Nama Penumpang dan Pilihan Kelas
	for(i=0; i<n; i++){
		printf("\nNama Penumpang ke-%d: ",i+1);
		scanf("%s", &penumpang[i]);
		
		printf("Masukkan Kelas Gerbong dengan Angka : ");
		scanf("%d", &kelas[i]);
		
		//Perhitungan Jumlah Penumpang Setiap Kelas
		if(kelas[i] == 1){
			eks++;
		}
		else if(kelas[i] == 2){
			bis++;
		}
		else if(kelas[i] == 3){
			eko++;	
		}
	}
	//Output Rincian Daftar Nama, Kelas, Pendapatan
	//Output Eksekutif
	printf("\n==========================");
	printf("\nData Penumpang Eksekutif");
	for(i=0; i<eks; i++){
		printf("\nNama Penumpang ke-%d : %s ", i+1,&penumpang[i]);
	}
	printf("\nJumlah Penumpang : %d ", eks);
	total=30000*eks;
	printf("\nTotal Pendapatan : %d\n", total);
	
	//Output Bisnis
	printf("\nData Penumpang Bisnis");
	for(i=0; i<bis; i++){
		printf("\nNama Penumpang ke-%d : %s ", eks+i+1, &penumpang[eks+i]);
	}
	printf("\nJumlah Penumpang : %d ", bis);
	total=20000*bis;
	printf("\nTotal Pendapatan : %d\n", total);
	
	//Output Ekonomi
	printf("\nData Penumpang Ekonomi");
	for(i=0; i<eko; i++){
		printf("\nNama Penumpang ke-%d : %s ", eks+bis+i+1, &penumpang[eks+bis+i]);
	}
	printf("\nJumlah Penumpang : %d ", eko);
	total=10000*eko;
	printf("\nTotal Pendapatan : %d\n", total);
}
