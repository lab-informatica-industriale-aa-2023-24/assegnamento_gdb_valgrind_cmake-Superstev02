// valgrind1.c
// In questo file ci sono due problemi

#include <stdlib.h>

void f(void)
{
	int* x = malloc(10 * sizeof(int));
	x[9] = 0;
	free(x);
}

int main(void)
{
	f();
	return 0;
}

//non si esegue il free della memoria allocata dinamicamente
//il valore x[10] va ad accedere ad una casella di memoria non allocata:
//(x assume valori da 0 a 9) 
