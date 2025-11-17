#include <stdio.h>
int main(){	float fa;
	printf("qual o custo de producao?\n");
	scanf("%f", &fa);
	printf("\nR$%.2f", fa+fa*0.45+((fa*0.45+fa)*0.28));	
	return 0;
}

/*O custo ao consumidor de um carro novo é a soma do custo de fábrica
com a percentagem do distribuidor e dos impostos (aplicados, primeiro os impostos sobre o custo de fábrica, 
e depois a percentagem do distribuidor sobre o resultado).
Supondo que a percentagem do distribuidor seja de 28% e os impostos 45%.
Escrever um algoritmo que leia o custo de fábrica de um carro e informe o custo ao consumidor do mesmo.*/