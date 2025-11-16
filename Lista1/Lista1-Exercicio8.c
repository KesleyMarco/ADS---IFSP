#include <stdio.h>

int main(){
	
	float dol, cot, real;
	
	printf("quanto vc tem de dollar?\n$");
	scanf("%f", &dol);
	
	printf("qual a cotacao atual do dolar?");
	scanf("%f", &cot);
	
	real=dol*cot;
	
	printf("vc tem um valor de R$%.2f", real);
	
	
	
	return 0;
}

/*Elaborar um algoritmo que efetue a apresentação do valor da conversão em real (R$)
de um valor lido em dólar (US$). O algoritmo deverá solicitar o valor da cotação do dólar
e também a quantidade de dólares disponíveis com o usuário.*/