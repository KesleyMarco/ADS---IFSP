#include <stdio.h>

int main(){
	
	float mnota=0, nota;
	
	printf("digite o valor da primeira nota\n");
	scanf("%f", &nota);
	mnota += nota;
	printf("digite o valor da segunda nota\n");
	scanf("%f", &nota);
	mnota += nota;
	printf("digite o valor da terceira nota\n");
	scanf("%f", &nota);
	mnota += nota;
	printf("digite o valor da quarta nota\n");
	scanf("%f", &nota);
	mnota += nota;
	printf("\n");
	
	mnota = mnota / 4;
	
	printf("sua media e %.2f\t", mnota);
	if(mnota>=6)
		printf("aprovado");
	else
		if(mnota<4)
	 		printf("reprovado");
	 	else
	 		printf("IFA");
	 	
	
	return 0;
}

/*Escrever um algoritmo que leia o nome e as três notas obtidas
por um aluno durante o semestre. Calcular a sua
média (aritmética), informar o nome e sua menção aprovado
(media >= 6), Reprovado (media < 4) e IFA (media >= 4 E media < 6).*/
