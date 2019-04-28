#include <stdio.h>
#include <stdlib.h>

extern int INTRV_V(int *a,int esq,int dir, int n);

int main(void)
{
	int dim = 5;
	int v[] = {3, -1, 8, 0, -3}; // Para testar
	int res;
	res = INTRV_V(v,3,9,dim);
	printf("Soma dos elementos = %d\n", res);
	return EXIT_SUCCESS;
}
