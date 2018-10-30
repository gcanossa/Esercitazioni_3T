#include <stdio.h>
/*
scrivere un programma che:
1) prenda da tastiera i 5 elementi di un array
2) stampi a video la somma dei numeri dell'array tramite una funzione
3) stampi a video la media aritmetica dei numeri dell'array tramite una funzione
4) riempia un array con la la differenza di ogni elemento con la sua media tramite una funzione
5) stampi la media aritmetica dell'array ottenuto al punto 4 (a tutti farà 0, se volete vi spiego perché :D )
*/

void leggiDaTastiera(int arr[], int lunghezza);
void scriviArray(int arr[], int lunghezza);
int sommaArray(int arr[], int lunghezza);
int mediaArray(int arr[], int lunghezza);
void rimepiDiffMedia(int sorgente[],int destinazione[], int lunghezza);

int main(){
	
	int contenitore[5];
	
	leggiDaTastiera(contenitore, 5);
	
	scriviArray(contenitore, 5);
	scriviArray(contenitore, 5);
	
	return 0;
}

void leggiDaTastiera(int arr[], int lunghezza)
{
	int i=0;
	while(i<lunghezza){
		scanf("%d",&arr[i]);
		fflush(stdin);
		i++;
	}
}

void scriviArray(int arr[], int lunghezza){
	int i=0;
	while(i<lunghezza){
		printf("%5d",arr[i]);
		i++;
	}
	printf("\n");
}
