#include <stdio.h>

int main(){
	
	int ida;
	
	for(int i=0;i<10;i++){
		printf("qual a sua idade?\n");
		scanf("%d", &ida);
		if(ida>=18)
		printf("vc e maior de idade\n");
		else
		printf("vc e menor de idade\n");	
	}
	
	return 0;
}

/*Faça um algoritmo que receba a idade de 75 pessoase mostre mensagem informando
“maior de idade” e “menor de idade” para cada pessoa.
Considere a idade a partir de 18 anos como maior de idade.
*** Nesse exercício, ao invés de 75 idades, use somente 10.*/