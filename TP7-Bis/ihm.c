#include <stdio.h>
#include "application.h"


float saisieReel (char val)
{
    float res;
    printf("Entrer le reel %c \n", val);
    scanf("%f", &res);
    getchar();
    return res;
}
/****************************************************************************************************************************************/

int saisieEntier (char val)
{
    int res;
    printf("Entrer l'entier %c \n", val);
    scanf("%d", &res);
    getchar();
    return res;
}
/****************************************************************************************************************************************/
char menu()
{
    char choix;
    printf("Tapez :\n -i : pour calculer l'inverse\n -d: pour calculer le quotient\n -m: minimum et maximum\n -f: pour sortir\n");
    scanf("%c", &choix);
    
    return choix;
}

/**********************************************************************************************************************************/
void traitechoix(char choix)
{
    int x;
    int y;
    float t;
    float a, b, c ,d;
    float resultat;
    int resultat1;
    float resultatr;
    float resultat2;
    
 
	switch(choix)
	{
	    case 'i' : 
	    t=saisieReel('t');
	    resultat=Inverse(t);
	    printf("L'inverse est : %.2f\n",resultat); break;
    
	    case 'd' :
	    
	    x=saisieEntier ('x');
	    y=saisieEntier ('y');
	    Quotrest(x, y, &resultat1, &resultatr);
	    
	    printf("Le quotient est : %d et le reste est :%.2f\n",resultat1, resultatr); break;
    
	    case 'm' :
	    a=saisieReel ('a');
	    b=saisieReel ('b');
	    c=saisieReel ('c');
	    d=saisieReel ('d');
	    Minmax(a ,b, c, d,&resultat, &resultat2);
	    
	    printf("Le minimum est : %.2f\n",resultat);  
	    printf("Le maximun est : %.2f\n",resultat2); break;  

	    case 'f' :
	    printf("Fin de programme\n"); break;
    
	    default : 
	    printf("Saisie incorrecte\n"); 
	}
	
	

}   

/****************************************************************************************************************************************/




 
