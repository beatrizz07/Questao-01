#include <stdio.h>
#include <locale.h>

//Quest�o 01.

int somar_numero(int n);

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int numero, soma;
	
	printf("\n\n      QUEST�O 01        \n");
	printf("\nEscreva um n�mero:");
	scanf("%d", &numero);

    soma = somar_numero(numero);

	printf("\nA soma  final �: %d", soma);
}
int somar_numero(int n) {
	int resultado = 0;
	
	for(int i = 1; i <= n; i++) {
		
		resultado = resultado + i;
	}
	
	return resultado;
}
