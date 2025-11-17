#include <stdio.h>

int main(){
	
	int num[80];
	int i;
	int si, na;
	
	si=na=0;
	
	for(i=0;i<80;i++){
		printf("digite um numero\n");
		scanf("%d", &num[i]);
		if (num[i]>10 && num[i]<150)
		si++;
	}
	
	printf("%d numeros estao entre 10 e 150", si);
	
	return 0;
}

/*Ler 80 números e ao final informar quantos número(s)
 est(á)ão no intervalo entre 10 (inclusive) e 150 (inclusive).
*** Nesse exercício, ao invés de 80 números, use somente 10. */