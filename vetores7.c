#include <stdio.h>

void kesley (int vetor[]){
	int qtdp, qtdi;
	int i;
	
	qtdp = qtdi = 0;
	
	for(i=0;i<12;i++){
		if(vetor[i]%2==0)
		qtdp++;
		else
		qtdi++;
	}
	printf("tem %d numeros par, e %d numeros impar\n", qtdp, qtdi);
}

int main(){
	
	int vetor[12];
	int i;
	
	printf("digite 12 numeros\n");
	
	for(i=0;i<12;i++){
		scanf("%d", &vetor[i]);
	}
	
	kesley(vetor);
	
	return 0;
}
