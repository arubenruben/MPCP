#include <stdio.h>
#include <stdlib.h>

extern int CPY_BYTE_TO_DOUBLEWORD(char *a,long long* b,int n);

int main(void)
{
	char v[] = {3, 1, 8, 0, 3}; // Para testar
	long long ret[5];
	CPY_BYTE_TO_DOUBLEWORD(v,ret,5);


	printf("Ola");

	return EXIT_SUCCESS;
}
