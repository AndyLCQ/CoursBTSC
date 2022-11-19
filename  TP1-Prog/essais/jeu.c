# include <stdio.h>

int main(void)

{
	int Gagne;
	int Montant;
	
	srand(time(0));
	printf("Jouer aux cartes\n");
	Gagne=rand() % 2;
	if(Gagne==0)
	{ 
		printf("Vous avez perdu ! Retentes ta chance, tu as le seum ? ;)\n");
		printf("Ne dit rien à ta femme sinon elle va te taper !\n");
	}
	else 
	{
		printf("Tu as gagné ! Bravo !\n");
		printf("Mais tu dois faire un cadeau à ta femme\n");
	
			Montant=rand() % 500;
			printf("Le montant : %d\n", Montant);
			if(Montant>100)
		
		{
			printf("Ce sera un joli collier\n");
		} 
			else
		{
			printf("Ce sera un simple bouquet\n");
		}
	}
	return 0;
}	
	
