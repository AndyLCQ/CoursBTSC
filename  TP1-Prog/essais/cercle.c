# include <stdio.h>

int main(void)

{
	const float Pi=3.14159;
	float Rayon;
	float Circonf;
	float Aire;
	
/*Saisie du rayon*/
	
	printf("Ce programme calcule la circonférence et la surface d'un cercle\n");
	printf("Saisir le rayon :");
	scanf("%f", &Rayon);
	
/*Calculs*/

	Circonf=2*Pi*Rayon;
	Aire=Pi*Rayon*Rayon;
	
/*Affichage des resultats*/

	printf("Circonference :%.2f\n", Circonf);
	printf("Surface :%.2f\n", Aire);
	return 0;
}	
