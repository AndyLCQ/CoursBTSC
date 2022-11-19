# include <stdio.h>

int main(void)

{
	
	int Choix;
	const float Pi=3.14159;
	float Rayon;
	float Circonf;
	float Aire;
	float Volume;
	float Hauteur;
	
/*Choix du programmme*/

	printf("Bonjour, et bienvenue.\n Pour calculer un périmètre TAPER 1, pour calculer une aire d'un cercle TAPER 2, et pour calculer le volume d'une sphère TAPER 3.\n");
	scanf("%d", &Choix);
	if(Choix==1)
	{
		/*PERIMETRE*/	
		/*Saisi du Rayon*/

		printf("Saisir le rayon :\n");
		scanf("%f", &Rayon);

		/*Calculs*/
		Circonf=2*Pi*Rayon;
		
		/*Affichage des resultats*/
		printf("Circonference :%.2f\n", Circonf);
		
	}
	
	if(Choix==2)
	{
		/*AIRE*/
		/*Saisie du rayon*/
		printf("Saisir le rayon :\n");
		scanf("%f", &Rayon);
		
		/*Calculs*/
		Aire=Pi*Rayon*Rayon;
		
		/*Affichage des resultats*/
		printf("Aire :%.2f\n", Aire);
		
	}	
	if(Choix==3)
	{
		/*VOLUME*/
		/*Saisie du rayon*/
		printf("Saisir le rayon :\n");
		scanf("%f", &Rayon);
		printf("Saisir la hauteur :\n");
		scanf("%f", &Hauteur);
	
		/*Calculs*/
		Volume=Rayon*Rayon*Pi*Hauteur;
	
		/*Affichage des resultats*/
		printf("Volume :%.2f\n", Volume);
		
	}	
	if(Choix!=1 && Choix!=2 && Choix!=3)
	{
		printf("Erreur : Tapez soit 1, soit 2, soit 3.\n");
	}
	return 0;
}
			
