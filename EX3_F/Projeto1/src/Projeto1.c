#include <stdio.h>
#include <stdlib.h>

extern int CONTA_WORDS(char *a);

int main(void)
{
	char v[] = "SPORTING CLUBE"; // Para testar
	int res;
	res = CONTA_WORDS(v);

	printf("n palavras: %d\n",res);



	return EXIT_SUCCESS;
}
