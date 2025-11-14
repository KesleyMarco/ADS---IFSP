#include <stdio.h>

int main(){
	
	int vetor[8];
	int i;
	int maior, menor;
	
	printf("digite 8 numeros eu direi qual e o maior e menor\n");
	
	for(i=0;i<8;i++){
		scanf("%d", &vetor[i]);
	}
	
	maior=vetor[0];
	menor=vetor[0];
	
	for(i=1;i<8;i++){
		if(vetor[i]>maior)
		maior=vetor[i];
		if(vetor[i]<menor)
		menor=vetor[i];
	}
	
	printf("o menor e %d, e o maior e %d", menor, maior);
	
	
	return 0;
}
