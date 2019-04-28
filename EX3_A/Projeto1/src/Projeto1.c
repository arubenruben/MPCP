#include <stdio.h>
#include <stdlib.h>

extern int STRLEN(char *a);

int main(void)
{
	char v[] = "Ola vou tirar 18 a MPCP"; // Para testar
	int res;
	res = STRLEN(v);
	printf("Soma dos elementos = %d\n", res);
	return EXIT_SUCCESS;
}
