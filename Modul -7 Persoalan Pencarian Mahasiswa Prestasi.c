#include<stdio.h>
#include<string.h>

typedef struct{
	char nim[10];
	char matkul[1][10];
	float ipk;	
}mahasiswa;

int main(){
	//kamus
	mahasiswa mhs[100];
	int i,j,N,jumlah;
	
	//algoritma
	scanf("%d",&N);
	//input data
	for(i=1;i<=N;i++){
		scanf("%s",&mhs[i].nim);
		scanf("%d",&jumlah);
		for (j=0;i<=jumlah;j++){
			fflush(stdin);
			scanf("%c",&mhs[i].matkul[j]);
		}		
	}
	//output
	for(i=1;i<=N;i++){
		printf("%s",mhs[i].nim);
		printf("%s",mhs[i].matkul[i]);
	}
	
	
	
	
	return 0;
}
