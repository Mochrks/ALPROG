#include<stdio.h>
	int main (){
	
	int P,K,U;
	
	scanf ("%d %d %d",&P,&U,&K);
	
	if ((P == 1) && (K >= 5) && (U >= 50)){
		printf("1000000");
	}
	else if ((P == 1) && (K <= 5) && (U >= 0)){
		printf("500000");
	}
	else if ((P == 1) && (U <= 50)){
		printf("300000");
	}
	else if ((P == 2) && (K >= 5) && (U >= 50)){
		printf("400000");
	}
	else if ((P == 2) && (U <= 50)){
		printf("0");
	}
	else if ((P == 2) && (K <= 5)){
		printf("0");
	}
	return 0;
}
