#include <stdio.h>

int main(){
	
	int num[3];
	
	printf("coloque dois numeros para as contas\n\nqual o primeiro numero?");
	scanf("%d", &num[0]);
	printf("qual o segundo numero?");
	scanf("%d", &num[1]);
	
	num[2]=num[0]+num[1];
	
	printf("\n\n%d", num[2]);
	
	return 0;
}
