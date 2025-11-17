#include <stdio.h>

int main(){
	
	int num, i;
	
	for (i=0;i<10;i++){
	
		printf("digite um numero\n");
		scanf("%d", &num);
		
		if (num>80)
		printf("%d maior que 80\n\n", num);
		if (num<25)
		printf("%d menor que 25\n\n", num);
		if(num==40)
		printf("%d igual a 40\n\n", num);
		else
		printf("\n");
    } 
	
	return 0;	
}

/*Faça um algoritmo que receba um número e mostre uma mensagem
caso este número seja maior que 80,menor que 25 ou igual a 40.*/
