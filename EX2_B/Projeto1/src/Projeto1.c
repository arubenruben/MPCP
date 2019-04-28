#include <stdio.h>
#include <stdlib.h>

extern int MIN_V(long long int *a, int n);

int main(void)
{
	int dim = 5;
	long long int v[] = {3, -1, 8, 0, -3}; // Para testar
	int res;
	res = MIN_V(v, dim);
	printf("Soma dos elementos = %d\n", res);
	return EXIT_SUCCESS;
}
