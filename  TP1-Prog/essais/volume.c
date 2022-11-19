# include <stdio.h>

int main(void)

{
	const float Pi=3.14159;
	float Rayon;
	float Volume;
	float Hauteur;
	
/*Saisie du rayon*/
	
	printf("Ce programme calcule la circonférence et la surface d'un cercle\n");
	printf("Saisir le rayon :");
	scanf("%f", &Rayon);
	printf("Saisir la hauteur :");
	scanf("%f", &Hauteur);
	
/*Calculs*/

	Volume=Rayon*Rayon*Pi*Hauteur;
	
/*Affichage des resultats*/

	printf("Volume :%.2f\n", Volume);
	return 0;
}	
