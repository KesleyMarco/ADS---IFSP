#include <stdio.h>

int main(){
	
	int dis, com, res;
	
	printf("qual a distacia que o veiculo percorreu em km?\n");
	scanf("%d", &dis);
	printf("quanto que vc gastou de combutivel em litros?\n");
	scanf("%d", &com);
	
	res=com/dis;
	
	printf("seu carro faz %dL por KM ", res);
	
	return 0;
}

/*Escrever um algoritmo para determinar o consumo médio de um automóvel
 sendo fornecida a distância total percorrida pelo automóvel e o total de combustível gasto.*/