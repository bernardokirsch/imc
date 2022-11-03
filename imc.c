#include <stdio.h>
#include <locale.h>

void main(void) {
	
	setlocale(LC_ALL, "Portuguese");
	
	float altura = 0, peso = 0, imc = 0;
	
	printf("------------ CALCULADORA DE IMC -----------");
	printf("\nInforme sua altura: ");
	scanf("%f", &altura);
	printf("\nInforme seu peso: ");
	scanf("%f", &peso);
	
	imc = peso / (altura * altura);
	
	if (imc <= 18.5) {
		printf("\n\nSeu IMC é de %.2f e sua classificação é de baixo peso", imc);
	}
	else if (imc > 18.5 && imc <= 24.9) {
		printf("\n\nSeu IMC é de %.2f e sua classificação é de eutrofia", imc);
	}
	else if (imc > 24.9 && imc <= 29.9) {
		printf("\n\nSeu IMC é de %.2f e sua classificação é de sobrepeso", imc);
	}
	else {
		printf("\n\nSeu IMC é de %.2f e sua classificação é de obesidade", imc);
	}
}
