#include <stdio.h>
#include <stdlib.h>

extern short MAX_V(short *a, int n);

int main(void)
{
	int dim = 5;
	short v[] = {3, -1, 8, 0, -3}; // Para testar
	short res;
	res = MAX_V(v, dim);
	printf("Soma dos elementos = %d\n", res);
	return EXIT_SUCCESS;
}
