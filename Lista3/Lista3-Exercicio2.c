#include <stdio.h>
#include <math.h>

int main(){
	
	int ob, num;
	
	printf("digite um numero\n");
	scanf("%d", &num);
	printf("escolha o calculo que ele vai sofrer\n\n1 - Raiz quadrada\n2 - A metade\n3 - 10 porcento do numero\n4 - O dobro\n");
	scanf("%d", &ob);
	
	switch (ob){
		case 1:
			num = sqrt(num);
			printf("%d", num);
		break;
		
		case 2:
			num/=2;
			printf("%d", num);
		break;
		
		case 3:
			num *= 0.10;
			printf("%d", num);
		break;
		
		case 4:
			num *= 2;
			printf("%d", num);
		break;
	}
	
	return 0;
}

/*Faça um programa, utilizando estrutura de condição, que receba um número real, 
digitado pelo usuário e mostre o menu para selecionar o tipo de cálculo que deve ser realizado
conforme menu abaixo, ao final, exiba o resultado do cálculo:
101-Raiz quadrada
102-A metade
103-10% do número
104-O dobro*/
