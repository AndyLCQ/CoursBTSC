#include <stdio.h>
#include "Def.h"

rdv Saisie()
{
  rdv pers;
  
  printf("Nom :\n");
  scanf("%s", pers.nom);
  printf("Jour du rendez-vous\n");
  scanf("%hd", &pers.queljour.jour);
  printf("Mois :\n");
  scanf("%s", pers.queljour.mois);
  printf("Annee :\n");
  scanf("%hd", &pers.queljour.annee);
  printf("Heure du rendez-vous\n");
  printf("Heure:\n");
  scanf("%hd", &pers.quelleur.heure);
  printf("Minute:\n");
  scanf("%hd", &pers.quelleur.minute);
  
  return pers;
}

/*******************************************************************************************************************************/
void Affichage(rdv pers)
{
  
    printf("Nom :\t %s \n", pers.nom);
    printf("Vous avez un rendez vous prévu le :\t %hd %s %hd \n", pers.queljour.jour, pers.queljour.mois, pers.queljour.annee);
    printf("A : %d:%d\n", pers.quelleur.heure, pers.quelleur.minute);
    
}
