#include <stdio.h>
#include "Def.h"

int main ()
{
	rdv Carnetrdv[NBRDV];
	int i;
	
	for(i=0;i<NBRDV;i++)
	{
		Carnetrdv[i]=Saisie();
	}
	for(i=0;i<NBRDV;i++)
	{
		Affichage(Carnetrdv[i]);
	}
	
	return 0;
}
