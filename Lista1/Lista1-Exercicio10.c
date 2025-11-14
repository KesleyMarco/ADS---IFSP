#include <stdio.h>
int main(){	float fa;
	printf("qual o custo de producao?\n");
	scanf("%f", &fa);
	printf("\nR$%.2f", fa+fa*0.45+((fa*0.45+fa)*0.28));	
	return 0;
}
