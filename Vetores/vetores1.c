#include <stdio.h>

int main(){
	int vetor[10];
	int i;
	
    for(i=0; i<10; i++){
	
	printf("coloque um numero\n");
	scanf("%d", &vetor[i]);
	}
	
	for(i=0 ; i<10; i++){
	printf("%d\n", vetor[i]);	
	}
	
	for(i=9; i>-1; i--){
	printf("%d\n", vetor[i]);	
	}
	
	return 0;
}
