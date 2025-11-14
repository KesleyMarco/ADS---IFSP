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
