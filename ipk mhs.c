#include <stdio.h>
#include<string.h>

int main(){
	int i,j_mk,sks=4,A,B,C,D,E,nim[25];
	char n;
	float nilai=1,ipk;
	i-1;
	do
	{
	
	printf("masukan nim");
	scanf("%d",&nim);
	printf("masukan matkul");
	scanf("%d",&j_mk);
	printf("nilai matkul ke-%d=",i);
	scanf("%c%c",&n,&n);
	
	switch(n)
	{
		case'A':
			A=4;
			n=A*sks;
			break;
		case'B':
			B=3;
			n=B*sks;
			break;
		case'C':
			C=2;
			n=C*sks;
			break;
		case'D':
			D=1;
			n=D*sks;
			break;
		case'E':
			E=0;
			n=E*sks;
			break;
	}
	nilai=nilai+n;
	j_mk=j_mk+sks;
	i++;

}
 	while(i<=j_mk);{
	 
 	printf("=============");
 	ipk=nilai/j_mk;
 	}



	return 0;
}
