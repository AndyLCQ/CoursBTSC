#include "traitement.h"
#include "ihm.h"


int main()
{
	char Nom[3][21];
	float Note[3];
	float moy;
	
	SaisieNom(Nom);
	SaisieNote(Note, Nom);
	moy=moyenne(Note);
	Afficher(Nom, Note, moy);
	
	return 0;
}
