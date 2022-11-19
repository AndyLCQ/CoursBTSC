#include <stdio.h>

int main(void)

{ 
	float prix;
	float somme=0;
	char rep;
	float montant;
	float monnaie;
	int pEmonnaie;
	int centimes;
	int billets20;
	int billets10;
	int billets5;
	int pieces1;

	
/* Calcul de la somme due par le client*/
	do
	{	
		printf("Ajouter le prix d'un article\n");
		scanf("%f", &prix);
		
		somme=prix+somme;
		
		printf("Voulez vous continuer a ajouter des notes ? o pour oui, n pour non\n");
		getchar();
		scanf("%c", &rep);
	}	
	while(rep=='o');
	
	printf("Vous devez %.2f €\n\n", somme);
	
/*Remise de la monnaie*/
	printf("Combien vous à donné le client ?\n");
	scanf("%f", &montant);
	
	monnaie=montant-somme;
	
	printf("Rendre : %.2f €\n", monnaie);
	
	pEmonnaie=(int)monnaie;
	
/*Billets*/
	
	centimes=(monnaie-pEmonnaie)*100;
	billets20=pEmonnaie/20;
	pEmonnaie=pEmonnaie%20;
	billets10=pEmonnaie/10;
	pEmonnaie=pEmonnaie%10;
	billets5=pEmonnaie/5;
	pEmonnaie=pEmonnaie%5;
	pieces1=pEmonnaie/1;
	pEmonnaie=pEmonnaie%1;
	
	printf("Donner %d billet(s) de 20 €\n", billets20);
	printf("Donner %d billet(s) de 10 €\n", billets10);
	printf("Donner %d billet(s) de 5 €\n", billets5);
	printf("Donner %d billet(s) de 1 €\n", pieces1);
	printf("Donne %d pieces\n", centimes);
	
	
	
	
	return 0;
}
