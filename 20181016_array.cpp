/*
	Scrivere un programma che scrive i valori
	contenuti in un array.
	Successivamente inserire i valori dello stesso
	array in un altro, ma in ordine inverso.
*/
#include <stdio.h>

int main(){
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
	int i;
	for(i=0;i<10;i++){
		printf("%d\n",arr[i]);
	}
	
	int comp[10];
	for(i=9;i>=0;i--){
		comp[i]=arr[9-i];
	}
	
	for(i=0;i<10;i++){
		printf("%d\n",comp[i]);
	}
	
	return 0;
}
/*
	char arr_c[5]={'a','b','c','d','e'};
	for(i=0;i<5;i++){
		printf("%c\n",arr_c[i]);
	}
*/
