#include <stdio.h>

int main(){
	
	float val;
	
	printf("qual o valor da compra?\nR$");
	scanf("%f", &val);
	printf("\npague 5x de R$%.2f", val/5);
		
	
	return 0;
}

/*A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco) prestações sem juros. 
Faça um algoritmo que receba um valor de uma compra e mostre o valor das prestações.*/