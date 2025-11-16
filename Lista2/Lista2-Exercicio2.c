#include <stdio.h>

int main(){
	
	int num1, num2;
	
	printf("digite um numero\n");
	scanf("%d", &num1);
	printf("digite outro numero\n");
	scanf("%d", &num2);
	if(num1>num2)
	printf("%d e maior", num1);
	else
	printf("%d e maior", num2);
	
	return 0;
}

/*Escrever um algoritmo que leia dois valores inteiro distintos
e informe qual é o maior.*/