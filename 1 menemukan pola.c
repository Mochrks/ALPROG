#include<stdio.h>
int main(){
	int i,N,K;
	scanf("%d %d",&N,&K);
	for (i=1;i<=N;i++){
			if(i%K==0){
			printf("* ");
		}else{
			printf("%d ",i);
			}
	}
	
	return 0;
}
