#include <stdio.h>

int main(){
	
	float cel, fah;
	
	printf("transformo graus Celsius em Fahrenheit\nqual seria a temperatura em Celsius?");
	scanf("%f", &cel);
	
	fah=(9 * cel + 160)/5;
	
	printf("%f� Fahrenheit", fah);
	
	return 0;
}

/*Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. 
A fórmula de conversão é: F=(9*C+160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
*/