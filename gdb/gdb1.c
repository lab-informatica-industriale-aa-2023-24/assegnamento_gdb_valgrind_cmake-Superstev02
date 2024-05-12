// gdb1.c
// Calcola la media dei numeri dati in ingresso
// premete enter dopo ogni numero
// CTRL-D per terminare l'input
// Esempio
// 1 <enter>
// 2 <enter>
// 2 <enter>
// <CTRL>-D

//da int a float

#include <stdio.h>

int main()
{
	float somma = 0;
	float val;
	float numeri = 0;
	while (scanf("%f",&val) != EOF) {
		somma += val;
		numeri++;
	}

	float media;
	if (numeri > 0) {
		media = somma/numeri;
		printf("La media è %f\n", media);
	}

	return 0;
}
