#include<stdio.h>

int main ()
{
	//kamus
	int a,b,bus,n;
	//algoritm
	scanf("%d",&n);
	//rumus
	a=n/7;
	b=n%7;
	bus=a;
	
	if(b==0){
		bus=a;
	}
	else {
		bus=a+1;
	}
	printf("%d\n",bus);	
	
	return 0;
}
