#include <stdio.h>

int main(){
	
	float val;
	
	printf("qual o valor da compra?\nR$");
	scanf("%f", &val);
	printf("\npague 5x de R$%.2f", val/5);
		
	
	return 0;
}
