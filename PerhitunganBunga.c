#include <stdio.h>
 
main(){
	//kamus
 float a,y,hasil;
 int x,p,t,i;
 //algoritma
 scanf("%d %d %d",&x,&p,&t); 
 //rumus
 y=p*0.01;
 hasil =(float)x;
 for(i=1;i<=t;i++){
	a=hasil*y;
	hasil=hasil+a;
 }
  
 
 //output
 printf("%f",hasil);

 return 0;
 
 }
