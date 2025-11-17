#include <stdio.h>

int main(){
	
	int num, fin;
	
	printf("digite o valor inicial\n");
	scanf("%d", &num);
	printf("agora o valor final\n");
	scanf("%d", &fin);
	
	do {
		printf("%d   ", num);
		num++;
	} while (num < fin+1);
	
	return 0;
}

/*Replique o exercício 2, mas dessa vez pergunte ao usuário qual será o valor inicial 
e qual será o valor final. Por exemplo, se o usuário digitar 2 e 7 
o programa deverá exibir: 2 3 4 5 6 7*/
