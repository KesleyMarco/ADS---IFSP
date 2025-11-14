#include <stdio.h>

int main(){
	
	int num[6];
	
	printf("coloque dois numeros para as contas\n\nqual o primeiro numero?");
	scanf("%d", &num[0]);
	printf("qual o segundo numero?");
	scanf("%d", &num[1]);
	
	num[2]=num[0]+num[1];
	num[3]=num[0]-num[1];
	num[4]=num[0]/num[1];
	num[5]=num[0]*num[1];
	
	printf("\n\nsoma %d", num[2]);
	printf("\nsubtracao %d", num[3]);
	printf("\ndivisao %d", num[4]);
	printf("\nmultiplicacao %d", num[5]);
	
	return 0;
}
