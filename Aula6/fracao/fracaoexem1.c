#include <stdio.h>

typedef struct {
	int numerador;
	int denominador; } fracao;

int main() {
	fracao f;
	printf ("Digite o numerador: ");
	scanf ("$d", &f.numerador);
	printf ("\nDigite o denominador: ");
	scanf ("%d", &f.denominador);
	return 0;
	}
