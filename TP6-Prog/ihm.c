#include <stdio.h>
#include "application.h"

/*MENU*/

char menu()
{
    char choix;
    printf("Tapez :\n -l : pour calculer la fréquence des lettres\n -v: pour calculer la fréquence des voyelles\n -f: pour sortir\n");
    scanf("%c", &choix);
    
    return choix;
}

/*******************************************************************************************************************************************/
/*TRAITECHOIX*/

void traitechoix(char choix)
{
    /*Déclaration des variables*/
    int v[6];
    int l[26];
    int i;
    
 
	switch(choix)
	{
	    case 'l' : 
	   
	      lettres(l);
	      for(i=0;i<26;i++)
		{
			if(l[i]>0)
			{
		    printf("%c : %d\n", 97+i, l[i]);
		    }
		 }
      
	      ; break;
	      
	    case 'v' :
	      
	      voyelles(v);
	      printf("\nFréquence des voyelles:\n\n");
	      printf("a\te\ti\to\tu\ty\n");
	      printf(" %d\t%d\t%d\t%d\t%d\t%d\n ", v[0], v[1], v[2], v[3], v[4], v[5]); break;
	      
	    case 'f' :
	    system("clear");
	    printf("Fin de programme\n"); break;
    
	    default : 
	    printf("Saisie incorrecte\n"); 
	    
	}
	getchar();
}
