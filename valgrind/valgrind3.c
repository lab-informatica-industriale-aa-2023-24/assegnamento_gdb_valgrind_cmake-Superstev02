// valgrind3.c

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *p;
	p = (char *) malloc(20);

	char *s = p;
	for(int n = 0; n < 20; n++) {
		*s = '\0';
		s++;
	}
	
	s=p;  //bisogna riazzerare il counter 
	
	for(int n = 0; n < 20; n++) {  //il limite è 20
		*s = 'A';
		s++;
	}
	
	free(p);  //mancava deallocazione
}
