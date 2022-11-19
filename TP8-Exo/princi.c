#include <stdio.h>
#include "Def.h"

int main()
{
  
    eltpers Tab[MAXPERS];
    float somme;
    
    saisie(Tab);
    somme=SommeNets(Tab);
    
    
    printf("Somme des salaires nets = %.2f\n", somme);
    return 0;
    
}