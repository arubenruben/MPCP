#include <stdio.h>
#include <stdlib.h>

extern int PALINDRUM(char *a);

int main(void)
{
	char v[] = "SPORTING CLUBE"; // Para testar
	int res;
	res = PALINDRUM(v);


	if(res==0){
		printf("Nao E palindrum");
	}else if(res==1){
		printf("E palindrum");
	}
	return EXIT_SUCCESS;
}
