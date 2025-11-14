#include <stdio.h>

int kesley(int vetor1[], int vetor2[]){
	int i;
	
	for(i=0;i<5;i++){
		if(vetor1[i] != vetor2[i])
		return 0;
	}
	return 1;
}



int main(){
	
    int vetor1[5];	
	int vetor2[5];
	int i;
	
	printf("digite cinco numeros para o vetor1\n");
	
	for(i=0;i<5;i++){
		scanf("%d", &vetor1[i]);
	}
	
	printf("digite cinco numeros para o vetor2\n");
	
	for(i=0;i<5;i++){
		scanf("%d", &vetor2[i]);
	}
	
	if (kesley(vetor1, vetor2))
		printf("os vetores sao iguais\n");
		else
		printf("os vetores sao diferentes\n");
		
	return 0;
}
