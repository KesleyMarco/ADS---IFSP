#include <stdio.h>

int main(){
	
	int num[3];
	
	printf("digite um numero\n");
	scanf("%d", &num[0]);
	printf("digite outro numero\n");
	scanf("%d", &num[1]);
	
	num[2]=num[0];
	num[0]=num[1];
	num[1]=num[2];
	
	printf("\n%d\n%d", num[0], num[1]);
	
	return 0;
}

/*Ler dois valores para as variáveis A e B, e efetuar as trocas dos valores 
de forma que a variável A passe a possuir o valor da variável B e a variável B passe a possuir o valor da variável A. 
Apresentar os valores trocados.*/