#include <stdio.h>

int main() {
	//exercicio 5 - Exibir na tela duas vezes a letra digitada pelo usu�rio

	//definir vari�veis
	char character;

	//ler vari�veis
	printf("Digite uma letra: \n");
	character = getchar();

	//mostrar caractere 2 vzs
	putchar(character);
	putchar(character);

	return 0;
}
