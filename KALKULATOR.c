#include <stdio.h>
int main ()
{
	//kamus
	char o;
    int a,b;
	//algoritma
    scanf ("%d %c %d", &a,&o,&b);

    if (a=='a'||a=='A')
        printf("Hasil Penjumlahan Angka Pertama dan Angka Kedua adalah : %i", a+b);

    if (a=='b'||a=='B')
        printf("Hasil Pengurangan Angka Pertama dan Angka Kedua adalah : %i", a-b);

    if (a=='c'||a=='C')
        printf("Hasil Perkalian Angka Pertama dan Angka Kedua adalah : %i", a*b);

    if (a=='d'||a=='D')
        printf("Hasil Pembagian Angka Pertama dan Angka Kedua adalah : %i", a/b);
        

    return 0;
}

