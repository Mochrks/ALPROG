#include<stdio.h>
int main(){
	
	int i,n;
	
	scanf("%d",&n);
	
	while (n % 2 == 0){
		n = n / 2;
	}
	if (n == 1){
		printf("ya");
	}
	else{
		printf("bukan");
	}
	
	return 0;
}
