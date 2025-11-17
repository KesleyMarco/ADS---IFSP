#include <stdio.h>

int main(){
	
	int num, soma=0;
	
	printf("digite um valor para a soma\n");
	scanf("%d", &num);
	
	do {	
		soma +=num;
		printf("total: %d\n", soma);
		printf("digite um valor para a soma\n");
		scanf("%d", &num);
	} while (num != 0);
	
	printf("resultado: %d", soma);
	
	return 0;
}

/*nao tem enunciado, mas foi pedido para fazer um somador 
ate quando o usuario n querer mais madando 0*/
