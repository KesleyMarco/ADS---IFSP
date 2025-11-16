#include <stdio.h>

int main(){
	
	int op;
	
	printf("qual seria a forma de pagamento?\n\n"
			"1 - A vista\n"
			"2 - Prazo 30 dias\n"
			"3 - Prazo 60 dias\n"
			"4 - Venda a Prazo com 90 dias\n"
			"5 - Venda com cartão de débito\n"
			"6 - Venda com cartão de crédito\n\n");
	scanf("%d", &op);
	printf("voce escolheu ");
	
	switch (op){
		case 1:
			printf("A vista");
		break;
		
		case 2:
			printf("Prazo 30 dias");
		break;
		
		case 3:
			printf("Prazo 60 dias");
		break;
		
		case 4:
			printf("Venda a Prazo com 90 dias");
		break;
		
		case 5:
			printf("Venda com cartão de débito");
		break;
		
		case 6:
			printf("Venda com cartão de crédito");
		break;
	}
	
	return 0;
}

/*Crie um progrma para uma loja de móveis que mostra o seguinte menu na tela de vendas:
1-Venda a Vista
2-Venda a Prazo 30 dias
3-Venda a Prazo 60 dias
4-Venda a Prazo com 90 dias
5-Venda com cartão de débito
6-Venda com cartão de crédito
Informe qual foi a opção selecionada pelo usuário.*/
