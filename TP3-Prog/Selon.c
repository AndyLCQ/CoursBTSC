# include <stdio.h>

int main(void)

{

	int Age;
	
	
	printf("Saisir l'âge\n");
	scanf("%d", &Age);
	
	switch(Age)
	{
	case 7 :
	case 8 : printf("Poussin\n"); break;
	case 9 :
	case 10: printf("Pupille\n"); break;
	case 11: 
	case 12: printf("Benjamin\n"); break;
	case 13: 
	case 14: printf("Minime\n"); break;
	case 15:
	case 16: printf("Cadet\n"); break;
	default : printf("Hors catégorie\n");
	}
	
	return 0;
	
}
