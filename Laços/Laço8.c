#include <stdio.h>

int main(){
	
	int op, ob=1;
	
	while (ob==1){
	printf("qual seria a forma de pagamento?\n\n"
			"0 - sair\n"
			"1 - A vista\n"
			"2 - Prazo 30 dias\n"
			"3 - Prazo 60 dias\n"
			"4 - Venda a Prazo com 90 dias\n"
			"5 - Venda com cartão de débito\n"
			"6 - Venda com cartão de crédito\n\n");
	scanf("%d", &op);
	printf("voce escolheu ");
	
	
		switch (op){
			case 0:
				printf("terminar a sessao");
				ob++;
			break;
			case 1:
				printf("A vista\n\n");
			break;
			
			case 2:
				printf("Prazo 30 dias\n\n");
			break;
			
			case 3:
				printf("Prazo 60 dias\n\n");
			break;
			
			case 4:
				printf("Venda a Prazo com 90 dias\n\n");
			break;
			
			case 5:
				printf("Venda com cartão de débito\n\n");
			break;
			
			case 6:
				printf("Venda com cartão de crédito\n\n");
			break;
		}
	}
	
	return 0;
}

/*Replique o exercício 3 da lista 3 mas adicione a opção 0-Sair. 
Enquanto o usuário não digitar o valor 0 o menu deverá ser exibido indefinidamente. */
