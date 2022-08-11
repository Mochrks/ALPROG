#include<stdio.h>
#include<stdlib.h>
int main(void)
{	
	struct tanggal{
	int tanggal;
	int bulan;
	int tahun;
	};	

	//skrg=sekarang,bsk=besok,jh=jumlah hari//
	struct tanggal skrg,bsk;
	int jh[12]={31,28,31,30,31,30,31,31,30,31,30,31};
//algoritma
//input
	scanf("%d %d %d",&skrg.tanggal,&skrg.bulan,&skrg.tahun);
	printf("\n");
//proses 
	if(skrg.tanggal<jh[skrg.bulan-1]){
		bsk.tanggal=skrg.tanggal+1;
		bsk.bulan=skrg.bulan;
		bsk.tahun=skrg.tahun;
	}else if(skrg.bulan ==12){
		bsk.tanggal=1;
		bsk.bulan=2;
		bsk.tahun=skrg.tahun+1;
	}else{
		bsk.tanggal=1;
		bsk.bulan=skrg.tahun+1;
		bsk.tahun=skrg.tahun;
	}

//output
	printf("%d %d %d",bsk.tanggal,bsk.bulan,bsk.tahun);

	
	
	return 0;
}
