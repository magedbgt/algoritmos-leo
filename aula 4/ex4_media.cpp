#include <stdio.h>


int main() {
	//exercicio 4 - Calcular a média de 2 valores inseridos pelo usuário exibir na tela
	//definir variáveis
	float numero1, numero2, media;

	//ler variáveis
	printf("Digite o primeiro número: \n");
	scanf("%f", &numero1);
	printf("Digite o segundo número: \n");
	scanf("%f", &numero2);

	//calcular média
	media = (numero1 + numero2) / 2;

	//mostrar média
	printf("A média é de %f", media);

	return 0;
}
