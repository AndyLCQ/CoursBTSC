#include <stdio.h>
#define NBELEVES 2
	/*Saisie du nom*/
void SaisieNom (char Nom[][21])
{
	int compt;
   
    for(compt=0;compt<NBELEVES;compt++)
    {
   		printf("Entrer un nom :\n");
   		scanf("%s", &Nom[compt][0]);
   	}
   	
}

/***************************************************************************************************************************************/
	/*saisie note*/
void SaisieNote (float Note[], char Nom[][21])
{
	int compt;
	
	for(compt=0;compt<NBELEVES;compt++)
	{
		printf("%s\n", Nom[compt]);
		printf("Entrer une note :\n");
		scanf("%f", &Note[compt]);
	}
	
}

/***************************************************************************************************************************************/
	/*Affichage*/
void Afficher(char Nom[][21], float Note[], float moy)
{
	int compt;
	
	for(compt=0;compt<NBELEVES;compt++)
	{
		printf("Nom : %s\n", Nom[compt]);
		printf("Note : %.2f\n", Note[compt]);
		printf("La moyenne est :%.2f\n", moy);
	 }
	 
	 
}

