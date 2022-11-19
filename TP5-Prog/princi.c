#include <stdio.h>
#include "traitement.h"

int main()
{
	float Tabl[3]={20,17.5,19};
	float result;
	
	result=moyenne(Tabl);
	printf("La moyenne est %.2f\n", result);
	
	return 0;
}
	
