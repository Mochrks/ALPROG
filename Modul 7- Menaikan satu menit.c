#include<stdio.h>
	
typedef struct{
	int jam;
	int menit;
}waktu;	

int main(){
	waktu w;
//algoritma
//input
	printf("masukan jam = ");
	scanf("%d",&w.jam);
	printf("masukan menit = ");
	scanf("%d",&w.menit);
//proses 
	if(w.jam == 23 && w.menit == 59){
		w.jam= 0;
		w.menit=0;
	}else if(w.menit==59){
		w.jam=w.jam+1;
		w.menit=0;
	}else
		w.menit=w.menit+1;
	
 
	



//output
	printf("jam sekarang adalah %.2d:%.2d",w.jam,w.menit);

	
	
	return 0;
}
