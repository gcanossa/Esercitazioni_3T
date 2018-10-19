/*
Leggere un numero N da tastiera e scrivere a video
i primi N numeri primi.
*/
#include <stdio.h>

int leggiNumeroDaTastiera();
int numeroPrimo(int n);

int main(){
	int numero;	
	numero = leggiNumeroDaTastiera();
	
	if(numeroPrimo(numero))
		printf("primo");
	else
		printf("non primo");
		
	
	return 0;
}

int leggiNumeroDaTastiera(){
	int n;
	scanf("%d",&n);
	fflush(stdin);
	
	return n;
}

int numeroPrimo(int n){
	int i;
	for(int i=2;i<n;i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}
