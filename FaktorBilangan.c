#include<stdio.h>
int main(){
	int N,i=1;
	scanf("%d",&N);
	for(i=N;i>1;i--){
		if(N%i==0){
			printf("%d ",i);
		}
	}
	printf("1");
	return 0;
}
