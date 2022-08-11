#include<stdio.h>

int FungsiKomposisi(int A,int B,int X);



int main(){
	
	int a,b,k,i,x,jumlah=0;
	
	
	scanf("%d %d %d %d",&a,&b,&k,&x);
	
	
	
	for(i=1;i<=k;i++){
		jumlah = FungsiKomposisi(a,b,x);
		x = jumlah;
		
		
		
	}
	printf("jumlah = %d",jumlah);
	
	
	
	
	return 0;
}



//realisasi functioon
int FungsiKomposisi(int A,int B,int X){
	if((A*X)+B>0){
		return(A*X)+B;
	}else{
		return (A*X)*-1;
	
	}
	
	
}

