#include <stdio.h>

int main() {
	//exercicio 3 - Exibir na tela o triplo de um número float digitado pelo usuário

	//definir variável
	float numero;

	//ler variavel
	printf("Digite um número decimal: \n");
	scanf("%f", &numero);

	//calcular o triplo
	numero = numero * 3;

	//mostrar o valor
	printf("O valor inserido foi: %f", numero);

	return 0;
}
