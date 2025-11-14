#include <stdio.h>

int main(){
	
	int matrix[4][4];
	int i, j;
	
	for(i=0;i<4;i++){
	for(j=0;j<4;j++){	
	printf("digite um numero\n");
	scanf("%d", &matrix[i][j]);
	}
}

    for(i=0;i<4;i++){
	for(j=0;j<4;j++){
    printf("%d", matrix[i][j]);
	}
	printf("\n");	
}	

printf("\n");

 for(i=0;i<4;i++){
	for(j=0;j<4;j++){
    printf("%d", matrix[3-i][3-j]);
	}
	printf("\n");	
}	
printf("\n");

 for(i=0;i<4;i++){
	for(j=0;j<4;j++){
    printf("%d", matrix[3-j][i]);
	}
	printf("\n");	
}	
printf("\n");

 for(i=0;i<4;i++){
	for(j=0;j<4;j++){
    printf("%d", matrix[j][3-i]);
	}
	printf("\n");	
}	
	
	return 0;
}
