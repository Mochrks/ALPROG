#include <stdio.h>

int main(){
	
	int N, i;
	scanf("%d",&N);
	int A[N];
	
	
	for(i=1; i<=N; i++){
		scanf("%d",&A[i]);
	}
	
	
	for(i=N; i>=1; i--){
		printf("%d\n",A[i]);
	}
	
	return 0;
	
}





















