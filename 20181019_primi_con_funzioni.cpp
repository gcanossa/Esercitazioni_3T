/*
Leggere un numero N da tastiera e scrivere a video
i primi N numeri primi.
*/
#include <stdio.h>

int leggiNumeroDaTastiera();

int main(){
	int numero;	
	numero = leggiNumeroDaTastiera();
	
	
	
	return 0;
}

int leggiNumeroDaTastiera(){
	int n;
	scanf("%d",&n);
	fflush(stdin);
	
	return n;
}
