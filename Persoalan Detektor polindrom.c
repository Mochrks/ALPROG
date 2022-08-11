#include <stdio.h>
#include<string.h>

int main(){
	//kamus
	char input[50];
	int n;
	int i,j,status,batascek,panjangkata;
	//algoritma
	printf("Masukkan jumlah data = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("==> ");
		scanf("%s",&input);
	panjangkata = strlen(input);
	batascek = panjangkata/2;
	status = 0;
		
	
	i=0;
	j=panjangkata-1;
	
	while(status==0 && i<batascek){
		if(input[i]==input[j]){
			i++;
			j--;
		}else{
			status=1;
		}
	}
	
	//menampilkan hasil
	if(status == 1){
		printf("bukan palindrom\n");
		
	}else{
		printf("palindrom\n");
	}
	
}
	
	return 0;
}
