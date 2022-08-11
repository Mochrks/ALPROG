/* 
	nama : assigmentPermen.c
	author :3411191151,Moch rizki kurniawan
	deskripsi : program ini berisi contoh sederhana untuk mendefinisikan variable-variable bulat(short int,long int) ,karakter dan bilangan desimal
	tanggal dibuat :23 sepotember 2019
*/
//library
#include <stdio.h>
int main() {
	//Kamus data
	short ks;
	int ki;
	long kl;
	char c;
	float x;
	//algoritma
	ks = 1;
	ki =10;
	kl =1000;
	c ='z';
	x = 1.55;
	 printf("karakter %c\n",c);
	 printf("bilangan short integer %d\n", ki);
	 printf("bilangan long integer %ld\n",kl);
	 printf("bilangann desimal %f\n",x);

	
	return 0;
;
}
