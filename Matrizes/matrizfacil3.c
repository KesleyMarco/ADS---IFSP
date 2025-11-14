#include <stdio.h>

int main(){
	
	int i, j;
	int ce=6;
	int matrix[5][5];
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("digite um numero para a linha %d, coluna %d\n", i, j);
			scanf("%d",&matrix[i][j]);
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(ce==6){
			printf("%d", matrix[i][j]);
			ce=0;
				}
			else 
			printf(" ");
			ce++;
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}
