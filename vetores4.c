#include <stdio.h>

void diferenca(int vetor1[], int vetor2[]){
	int i;
	int vetor3[20];
	
	printf("diferenca\n");
	
	for(i=0;i<20;i++){
	   if (vetor1[i] > vetor2[i])
	   vetor3[i] = vetor1[i] - vetor2[i];
	   else
	   vetor3[i] = vetor2[i] - vetor1[i];
	   
	   printf("%d\n", vetor3[i]);
	}
}
void soma(int vetor1[], int vetor2[]){
	int i;
	int vetor4[20];
	
	printf("soma\n");
	
	for(i=0;i<20;i++){
		vetor4[i] = vetor1[i] + vetor2[i];
		printf("%d\n", vetor4[i]);
	}
}
void multiplicacao(int vetor1[], int vetor2[]){
	int i;
	int vetor5[20];
	
	printf("multiplicacao\n");
	
	for(i=0;i<20;i++){
		vetor5[i] = vetor1[i] * vetor2[i];
		printf("%d\n", vetor5[i]);
	}
}

int main(){
	
	int vetor1[20];
	int vetor2[20];
	int i;
	
	for(i=0;i<20;i++){
	printf("escreva um numero\n");
	scanf("%d", &vetor1[i]);
	}
	
	for(i=0;i<20;i++){
	printf("escreva um numero\n");
	scanf("%d", &vetor2[i]);
	}
	
	diferenca(vetor1, vetor2);
	soma(vetor1, vetor2);
	multiplicacao(vetor1, vetor2);
	
	
	return 0;
}
