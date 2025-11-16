#include <stdio.h>

float kesley(int vetor[], int n){
	
	float acumulador=0;
	int i;
	
	for(i=0;i<n;i++){
		acumulador+=vetor[i];	
	}
	return acumulador / n;
}

int main(){

	int i,n;
    float result;
	
	printf("quantos valores vc quer guardar?\n");
	scanf("%d", &n);
	
	int vetor[n];
	
	printf("digite %d numeros\n", n);
	
	for(i=0;i<n;i++){
		scanf("%d", &vetor[i]);
	}
	
	result=kesley(vetor, n);
	
	printf("%f", result);
	
	
	return 0;
}

/*Crie um vetor com N números reais (pergunte o valor de N ao usuário). 
Crie uma função que calcula e retorna a média aritmética entre os números do vetor. 
Exiba o vetor e a média.*/