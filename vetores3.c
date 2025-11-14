#include <stdio.h>

void resultadofinal (int vetor1[], int vetor2[]){
	
	int i;
	
	for(i=0;i<10;i++){
		printf("%d %d\n", vetor1[i], vetor2[i]);
	}
}

int main(){
	
	int vetor1[10];
	int vetor2[10];
	int i;
	
	for(i=0;i<10;i++){

	printf("escrevaum numero\n");
	scanf("%d", &vetor1[i]);
	}
	
	for(i=0;i<10;i++){
		
	if(vetor1[i] % 2 == 0)
	vetor2[i] = vetor1[i] / 2;
	else
	vetor2[i] = vetor1[i] * 3;
    }
	
	resultadofinal (vetor1, vetor2);
	 
	return 0;
}
