#include<stdio.h>

int main(){
	int n, angka[200], kiri, kanan, tengah, temp, key;
	float ketemu;
	int i,j;
	
	printf("masukan jumlah nilai = ");
	scanf("%d",&n);
	for( i=0; i<n; i++)
 {
  printf("Angka ke - ",&i);
 scanf("%d",&angka[i]);
 }
 for ( i=0; i<n; i++)
 {
  for( j=0; j< n-i-1; j++)
  {
   if(angka [j] > angka [j+1])
   {
    temp=angka[j];
    angka[j]=angka[j+1];
    angka[j+1]=temp;
   }
  }
 }
	for (i=0; i<n; i++)
 {
  for(j=0; j< n-i-1; j++)
  {
   if(angka [j] > angka [j+1])
   {
    temp=angka[j];
    angka[j]=angka[j+1];
    angka[j+1]=temp;
   }
  }
 }
 printf("Data yang telah diurutkan adalah : ");
 for(i=0; i<n; i++)
 {
  printf(" %d",angka[i]);
 }
 printf("\n Masukan angka yang dicari : ");
 scanf("%d",&key);
 kiri=0;
 kanan=n-1;
 while(kiri<=kanan)
 {
  tengah=(kiri + kanan)/2;
  if(key == angka[tengah])
  {
   ketemu;
   break;
  }
  else if (key < angka [tengah])
  {
   kanan = tengah -1;
  }
  else
  {
   kiri = tengah +1;
  }
 }
 if (ketemu){
 
  Qintf("ketemu");
 }else{
 
  printf("tidak ketemu");
}
	getch();
	return 0;
}
