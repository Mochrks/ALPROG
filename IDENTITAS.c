#include <stdio.h>

int main(){
	//kamus
	char nama[25];
	char nim[30];
	char alamat[30];
	char ttl[30];
	char jurusan[15];
	//algoritma
	printf(" ====================================\n");
	printf("\t   IDENTIAS SISWA\n");
	printf(" ====================================\n");
	printf(" *  Masukkan Nama    = ");
	scanf("%s",&nama);
	printf(" *  Masukkan NIM     = ");
	scanf("%s",&nim);
	printf(" *  Masukkan alamat  = ");
	scanf("%s",&alamat);
	printf(" *  Masukkan ttl     = ");
	scanf("%s",&ttl);
	printf(" *  Masukkan jurusan = ");
	scanf("%s",&jurusan);
	printf("\n ====================================\n");
	printf("   Nama    =\t%s\n",nama);
	printf("   NIM     =\t%s\n",nim);
	printf("   Alamat  =\t%s\n",alamat);
	printf("   TTL     =\t%s\n",ttl);
	printf("   Jurusan =\t%s\n",jurusan);
	
	return 0;
}
