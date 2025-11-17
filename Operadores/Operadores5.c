#include  <stdio.h>

int main(){
	
	int i, res=0;
	int nota[3];
	char nome[20];
	
	printf("qual o seu nome?\n");
	scanf("%s", &nome);
	for (i=0;i<3;i++){
		printf("quantos vc tirou na prova %d\n", i+1);
		scanf("%d", &nota[i]);
		res+=nota[i];
	}
	
	printf("%s\n%d", nome, res/3);
	
	
	return 0;
}

/*Escrever um algoritmo que leia o nome de um aluno e as notas das três provas
que ele obteve no semestre. No final informar o nome do aluno e a sua média (aritmética).*/