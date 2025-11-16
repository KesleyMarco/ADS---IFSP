#include <stdio.h>

int main(){
	int vetor[10];
	int i;
	
    for(i=0; i<10; i++){
	
	printf("coloque um numero\n");
	scanf("%d", &vetor[i]);
	}
	
	for(i=0 ; i<10; i++){
	printf("%d\n", vetor[i]);	
	}
	
	for(i=9; i>-1; i--){
	printf("%d\n", vetor[i]);	
	}
	
	return 0;
}

/*Faça um programa que lê 10 números inteiros do teclado e armazene em um vetor. 
Ao final imprima o vetor armazenado nos dois sentidos (do início para o fim e do fim para o início.*/