#include <stdio.h>

int main(){
	
	float cel, fah;
	
	printf("transformo graus Celsius em Fahrenheit\nqual seria a temperatura em Celsius?");
	scanf("%f", &cel);
	
	fah=(9 * cel + 160)/5;
	
	printf("%fº Fahrenheit", fah);
	
	return 0;
}
