#include <stdio.h>

void imprimirvetores(int vetor1[], int vetor2[]){
	int i;
	
	for (i=0; i<10; i++){
	printf("%d  %d\n", vetor1[i], vetor2[i]);
	}
}

int main(){
	int vetor1[10];
	int vetor2[10];
	int i;
	int j;
	
	for(i=0; i<10; i++){
		printf("escreva um numero\n");
		scanf("%d", &vetor1[i]);
	}

	for(i=0, j=9; i<10; i++, j--){
		vetor2[j]=vetor1[i];
	}
	
	imprimirvetores(vetor1, vetor2);
	
	return 0;
}

/* Ler um vetor de 10 elementos. Crie um segundo vetor, com todos os elementos na ordem inversa, 
ou seja, o último elemento passará a ser o primeiro, o penúltimo será o segundo e assim por diante. 
Crie um procedimento que recebe os 2 vetores por parâmetro e os exibe na tela da seguinte forma:
Considere o vetor 1 com os valores 2,4,6,8,10 e o vetor 2 com os valores 10,8,6,4,2 a saída deve ser:
2 10
4 8
6 6
8 4
10 2*/
