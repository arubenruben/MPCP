#include <stdio.h>
#include <stdlib.h>

extern int CPY_SWORD_TO_SDOUBLEWORD(int *a,long long* b,int n);

int main(void)
{
	int v[] = {3, -11, -8, 0, 3}; // Para testar
	long long ret[5];
	CPY_SWORD_TO_SDOUBLEWORD(v,ret,5);


	printf("Ola");

	return EXIT_SUCCESS;
}
