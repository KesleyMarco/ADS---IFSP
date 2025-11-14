#include <stdio.h>

int main(){
	
	int N;
	
	printf("qual o tamanho da matrix?\n");
	scanf("%d", &N);
		
	int matrix1[N][N];
	int matrix2[N][N];
	int i, j;
	int matrix3[N][N];
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("digite um numero\n");
			scanf("%d", &matrix1[i][j]);
		}
	}
	
	printf("matrix 2 agora");
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("digite um numero\n");
			scanf("%d", &matrix2[i][j]);
			matrix3[i][j]=matrix2[i][j]+matrix1[i][j];
		}
	}
	
    for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%d", matrix3[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}
