#include <stdio.h>

void kesley (int matrix[5][5]){
	int i, j;
	int zero, alg;
	
	zero=alg=0;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
		   	if(matrix[i][j]!=0)
		   	alg++;	
			else 
			zero++;	
		}
	}
	if (zero>alg)
	printf("verdadeiro para esparsa");
	else
	printf("falso para esparsa");
}

int main(){
	
	int matrix[5][5];
	int i, j;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("digite um numero para linha %d, coluna %d\n", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
	
	kesley(matrix);
	
	return 0;
}
