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
