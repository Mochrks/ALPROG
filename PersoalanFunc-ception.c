#include <stdio.h>
int main(){
	int A,B,X,Y;
	scanf("%d %d %d %d",&A,&B,&X,&Y);
	do{
		printf("%d\n",X);
		X=A*X+B;
	}while(X<Y);
	return  0;	
}
