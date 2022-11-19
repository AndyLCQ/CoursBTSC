#include <stdio.h>

int main(void)

{	
	int nb=0;
	int compteur;
	char choix;
	float moyenne;
	float note;
	float somme=0;
	
	
	do
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
		nb=nb+1;
		printf("Voulez vous continuer a ajouter des notes ? o pour oui, n pour non\n");
		getchar();
		scanf("%c", &choix);
	}	
	while(choix=='o');
			
	moyenne=somme/nb;
	printf("Moyenne : %.2f\n",moyenne);
	
	
	
	
	return 0;
}
		
	
