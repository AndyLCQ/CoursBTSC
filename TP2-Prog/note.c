#include <stdio.h>

int main(void)

{	
	int nb=0;
	int compteur;
	float moyenne;
	float note;
	float somme=0;
	
	
	printf("Nombre de notes :\n");
	scanf("%d",&nb);
	
	for(compteur=1; compteur<=nb; compteur++)
	{
		printf("Inserer note\n");
		do
		{
			scanf("%f", &note);
			if(note<0 || note>20)
			{
				printf("Saisir une note entre 0 et 20\n");
			}
		}
		while(note<0 || note>20);
		somme=note+somme;
	}	
	
			
	moyenne=somme/nb;
	printf("Moyenne : %.2f\n",moyenne);
	
	
	
	
	return 0;
}
		
	
