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
