#include <stdio.h>

int main(){
	
	int n,k,i;
	
	scanf("%d %d",&n,&k);
	
	for (i=1;i<=n;i++){
		
		if (i == n){
			if (i % k ==0){
				printf("*");
			}
			else{
				printf("%d",i);
			}
		}
		else{
			if (i % k ==0){
				printf("* ");
			}
			else{
				printf("%d ",i);
			}
			
		}
}

}



