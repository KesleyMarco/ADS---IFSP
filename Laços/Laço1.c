#include <stdio.h>

int main(){
	
	int num, fat, cont;
	
	printf("digite o numero para calcular o fatorial\n");
	scanf("%d", &num);
	
	fat = cont = 1;
	
	for (cont; cont < num+1; cont++){
		fat *= cont;
	}
	
	printf("o fatorial de %d e : %d", num, fat);
	
	return 0;
}
/*n tinha enunciado, mas basicamente, 
faz o fatorial do numero que colocar*/
