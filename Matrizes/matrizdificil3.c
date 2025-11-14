#include <stdio.h>

int main(){
	
	int N, M;
	
	printf("quantas linhas de matrix?\n");
	scanf("%d", &N);
	printf("quantas colunas?\n");
	scanf("%d", &M);
	
	int matrix[N][M];
	int i, j;
	
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			printf("digite um numero\n");
			scanf("%d", &matrix[i][j]);
		}
	}
	
	int num;
	int qtd=0;
	
	printf("qual numero vc procura?\n");
	scanf("%d", &num);
	
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			if(matrix[i][j]==num){
			qtd++;
			printf("esta na posicao %dx%d\n", i, j);
			
			
			}
		}
	}
	
	if(qtd==0)
	printf("nao achei nada amigao");
		
	
	
	
	return 0;
}
