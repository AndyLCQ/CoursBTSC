#include <stdio.h>
#include "Def.h"
/*Procédure de saisie*/

void saisie(eltpers Tab[])
{
     eltpers take;
     int i;
     
     
     for(i=0;i<MAXPERS;i++)
     {
    printf("Saisir le nom :");
    scanf("%s", take.nom);
    printf("Saisir le télephone :");
    scanf("%s", take.tel);
    printf("Saisir le salaire brut :");
    scanf("%f", &take.sal.brut);
    printf("Saisir le salaire net :");
    scanf("%f", &take.sal.net);
    
    Tab[i]=take;
    
     }   
  
}


/************************************************************************************************************************************/
/*Fonction de la somme des salaires bruts*/

float SommeNets(eltpers Tab[])
{
    int i;
    float somme=0;
    
    for(i=0;i<MAXPERS;i++)
    {
    somme=somme+Tab[i].sal.net;
    }
    
    return somme;
    
}