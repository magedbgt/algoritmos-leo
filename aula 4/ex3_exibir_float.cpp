#include <stdio.h>

int main() {
	//exercicio 3 - Exibir na tela o triplo de um n�mero float digitado pelo usu�rio

	//definir vari�vel
	float numero;

	//ler variavel
	printf("Digite um n�mero decimal: \n");
	scanf("%f", &numero);

	//calcular o triplo
	numero = numero * 3;

	//mostrar o valor
	printf("O valor inserido foi: %f", numero);

	return 0;
}
