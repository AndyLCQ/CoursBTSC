# include <stdio.h>

int main(void)

{
	float Base;
	float Aire;
	float Hauteur;
	
/*Saisie du rayon*/
	
	printf("Ce programme calcule l'aire d'un triangle\n");
	printf("Saisir la longueur de la Base :");
	scanf("%f", &Base);
	printf("Saisir la hauteur :");
	scanf("%f", &Hauteur);
	
/*Calculs*/

	Aire=(Base*Hauteur)/2;
	
/*Affichage des resultats*/

	printf("Aire :%.2f\n", Aire);
	return 0;
}	
