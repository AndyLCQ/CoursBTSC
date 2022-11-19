#include <stdio.h>

int main(void)

{

	int dividende;
	int diviseur;
	int quotient;
	int reste;
	
	/*saisie dividende et diviseur*/
	printf("Saisir le dividende ensuite le diviseur\n");
	scanf("%d %d", &dividende, &diviseur);
	
	/*calcul*/
	quotient=dividende/diviseur;
	reste=dividende%diviseur;
	
	/*resultats*/
	printf("Le quotient est %d et le reste est %d\n", quotient, reste);
	
	return 0;
}
