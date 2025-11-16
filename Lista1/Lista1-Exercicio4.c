#include <stdio.h>

int main(){
	
	int fix, ven, tot;
	char nome[20];
	
	printf("qual o seu nome\n");
	scanf("%s", &nome);
	printf("qual seu salario fixo?\n");
	scanf("%d", &fix);
	printf("quanto vc vendeu?\n");
	scanf("%d", &ven);
	
	tot= fix + ven * 0.15;
	
	printf("\n%s\n%d\n%d", nome, fix, tot);
	
	
	
	
	
	return 0;
} 

/*Escrever um algoritmo que leia o nome de um vendedor, o seu salário fixo
e o total de vendas efetuadas por ele no mês (em dinheiro).
Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas,
 informar o seu nome, o salário fixo e salário no final do mês.*/