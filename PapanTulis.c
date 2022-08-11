#include<stdio.h>

int main(){
	//kamus
	float p,l,pr1,lr1;
	//p:panjang papan l:lebar papan pr:panjang ruangan lr:lebar ruangan 
	
	//algoritma
	scanf("%f %f",&p,&l);
	//rumus
	pr1=p*2;
	lr1=l/2;
	//output
	printf("%.0f ",pr1);
	printf("%.2f\n",lr1);
	return 0;
}
