#include <stdio.h>


int main()
{
	
	char Tab[12][21];
	int compteur;
	
	for(compteur=0; compteur<12; compteur++)
	{
		printf("Insere un nom\n");
		scanf("%s", Tab[compteur]);
	}
	for(compteur=0; compteur<12; compteur++)
	{
		printf("%s\n", Tab[compteur]);
	}
	return 0;
}

