#include <stdio.h>

int main(){
	
	int i,j;
	int soma=0;
	int matrix[8][5];
	
	for(i=0;i<8;i++){
		for(j=0;j<5;j++){
			printf("digite um numero para a linha %d, coluna %d\n", i, j);
			scanf("%d",&matrix[i][j]);
		}
	}
	
	for(i=0;i<8;i++){
		for(j=0;j<5;j++){
			soma+=matrix[i][j];
		}
	}
	
	printf ("%d", soma);
	
	
	
	
	return 0;
}
