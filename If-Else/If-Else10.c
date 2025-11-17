#include <stdio.h>

int main(){

	int num, num2;
	
	printf("digite um numero\n");
	scanf("%d", &num);
	printf("digite outro\n");
	scanf("%d", &num2);
	
	if (num==num2)
		printf("sao igual");
	else
		if(num<num2)
		printf("sao diferentes, porem %d e maior", num2);
		else 
		printf("sao diferentes, porem %d e maior", num);

	return 0;
}

/*Faça um algoritmo que leia dois números e identifique se são iguais ou diferentes.
Caso eles sejam iguais imprima uma mensagem dizendo que eles são iguais.
Caso sejam diferentes, informe qual número é o maior e uma mensagem que são diferentes.*/
