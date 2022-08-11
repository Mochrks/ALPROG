#include<stdio.h>

int main(){
	int A,B,Hasil;
	char Op;
	
	scanf("%d %c %d",&A,&Op,&B);
	if(Op=='+'){
		Hasil=A+B;
		printf("%d",Hasil);
	}
		else if(Op=='-'){
			Hasil=A-B;
			printf("%d",Hasil);
		}
			else if(Op=='*'){
				Hasil=A*B;
				printf("%d",Hasil);
			}
				else if(Op=='/'){
					Hasil=A/B;
					printf("%d",Hasil);
				}
					else if(Op=='%'){
						Hasil=A%B;
						printf("%d",Hasil);
							else if(Op=='o'){
							Hasil=A%B;
							printf("tidak dapat melakukan perhitungan: %d",Hasil);
					}
		
		
	return 0;
}
