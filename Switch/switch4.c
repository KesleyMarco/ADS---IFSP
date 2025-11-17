#include <stdio.h>

int main(){
	
	int op, ob=0;
	
	printf("digite um numero de 1 a 7 referente ao dia da semana\n");
	
	
	while(ob!=1){
		scanf("%d", &op);
		printf("\n\n");
		switch (op){
			case 1:
				printf("domingo");
				ob=1;
			break;
			
			case 2:
				printf("segunda");
				ob=1;
			break;
			
			case 3:
				printf("terca");
				ob=1;
			break;
			
			case 4:
				printf("quarta");
				ob=1;
			break;
			
			case 5:
				printf("quinta");
				ob=1;
			break;
			
			case 6:
				printf("sexta");
				ob=1;
			break;
			
			case 7:
				printf("sabado");
				ob=1;
			break;
			
			default:
				printf("tenta dnv\n");
		}
	}	
	
	return 0;
}

/*Construa um algoritmo que leia um número inteiro de 1 a 7 e informe o dia da semana correspondente, 
sendo domingo o dia de número 1. Se o número não corresponder a um dia da semana, mostre uma mensagem de erro.*/
