#include <stdio.h>


int main() {
	//exercicio 4 - Calcular a m�dia de 2 valores inseridos pelo usu�rio exibir na tela
	//definir vari�veis
	float numero1, numero2, media;

	//ler vari�veis
	printf("Digite o primeiro n�mero: \n");
	scanf("%f", &numero1);
	printf("Digite o segundo n�mero: \n");
	scanf("%f", &numero2);

	//calcular m�dia
	media = (numero1 + numero2) / 2;

	//mostrar m�dia
	printf("A m�dia � de %f", media);

	return 0;
}
