#include <stdio.h>
#include "application.h"

float Inverse(float Nombre)
{
    float resultat;
    resultat=(1/Nombre);
    return resultat;
}

/****************************************************************************************************************************************/

int Quotient(int nb1, int nb2)
{
    int resultat;
    resultat=nb1/nb2;
    return resultat;
}


/****************************************************************************************************************************************/

int Reste(int nb1, int nb2)
{
    int resultat;
    resultat=nb1%nb2;
    return resultat;
}


/****************************************************************************************************************************************/

float Minimum(float a, float b, float c, float d)
{
    float mini1;
    float mini2;
    float Mini;
    mini1=(a<b)?a:b;
    mini2=(c<d)?c:d;
    Mini=(mini1<mini2)?mini1:mini2;
    
    return Mini;
}
/****************************************************************************************************************************************/

float Maximum(float a, float b, float c, float d)
{
    float max1;
    float max2;
    float Max;
    max1=(a>b)?a:b;
    max2=(c>d)?c:d;
    Max=(max1>max2)?max1:max2;
    
    return Max;
}
/****************************************************************************************************************************************/

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
    int resultatr;
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
	    resultat1=Quotient(x, y);
	    resultatr=Reste(x, y);
	    printf("Le quotient est : %d et le reste est :%d\n",resultat1, resultatr); break;
    
	    case 'm' :
	    a=saisieReel ('a');
	    b=saisieReel ('b');
	    c=saisieReel ('c');
	    d=saisieReel ('d');
	    resultat=Minimum(a ,b, c, d);
	    resultat2=Maximum(a ,b, c, d);
	    printf("Le minimum est : %.2f\n",resultat);  
	    printf("Le maximun est : %.2f\n",resultat2); break;  

	    case 'f' :
	    printf("Fin de programme\n"); break;
    
	    default : 
	    printf("Saisie incorrecte\n"); 
	}
	
	

}   

