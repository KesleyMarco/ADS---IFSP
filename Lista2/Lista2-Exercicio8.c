#include <stdio.h>

int main(){
	
	char nome[20];
	float custo, venda, mcusto, mvenda;
	int i;
	
	for (i=0; i<10; i++){
		
		printf("coloque o nome do produto?\n");
		scanf("%s", &nome);
		
		printf("qual o custo do produto?\n");
		scanf("%f", &custo);
		mcusto += custo;
		
		printf("qual o valor de venda?\n");
		scanf("%f", &venda);
		mvenda += venda;
		
		printf("\n");
		
		if(custo>venda)
			printf("%s esta dando prejuizo\n\n\n", nome);
		else 
			if (venda > custo)
				printf("%s esta dando lucro\n\n\n", nome);
			else
				printf("%s n esta fazendo diferenca\n\n\n", nome);
    }
    
    printf("Media de Custo:%f\nMedia do valor da Venda:%f", mcusto/10, mvenda/10 );
    
	return 0;
}

/*Fa�a um algoritmo que receba o pre�o de custo e o pre�o de venda de 40 produtos.
Mostre como resultado se houve lucro, preju�zo ou empate para cada produto.
Informe media de pre�o de custo e do pre�o de venda.
Nesse exerc�cio, ao inv�s de 40 produtos, use somente 10.*/
