#include <stdio.h>

int main(){
	
	float num, num2;
	char op;
	
	printf("digite um numero\n");
	scanf("%f", &num);
	printf("digite o operador\n");
	scanf(" %c", &op);
		
		switch (op){
			case '*': 
			printf("digite um numero\n");
			scanf("%f", &num2);
			num *= num2;
			break;
			
			case '-': 
			printf("digite um numero\n");
			scanf("%f", &num2);
			num -= num2;
			break;
			
			case '/': 
			printf("digite um numeron\n");
			scanf("%f", &num2);
			num /= num2;
			break;
			
			case '+': 
			printf("digite um numero\n");
			scanf("%f", &num2);
			num += num2;
			break;
		}
		
	printf("%.2f", num);
	
	return 0;
}

/*n tinha enunciado, mas basicamente ele esta pedindo para fazer 
uma conta com o operador que o usuario pedir, usando switch */