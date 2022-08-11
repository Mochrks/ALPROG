#include <stdio.h>

int main(){
	int i,max,min,bil;
	float n;
	
	//algoritma
	scanf("%f",n);
	printf("masukan bilangan=");
	scanf("/d",bil);
	max=bil;
	min=bil;
	
	for(i=1;i<=n;i++){
		printf("%d",i);
		scanf("%d",bil);
		if(bil>max)
			max=bil;
		else if(bil<min)
			min=bil;	
		
	}
	printf("%d %d",max,min);	
	
	
	
	return 0;
}
